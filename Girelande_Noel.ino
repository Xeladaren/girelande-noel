
#include <Adafruit_NeoPixel.h>

#include "images.h"
#include "screen_sequence.h"

#define CONTOUR_PIN        6
#define CONTOUR_NUMPIXELS 144

#define SCREEN_PIN        5
#define SCREEN_NUMPIXELS 64

Adafruit_NeoPixel contour(CONTOUR_NUMPIXELS, CONTOUR_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel screen(SCREEN_NUMPIXELS, SCREEN_PIN, NEO_GRB + NEO_KHZ800);
bool state_screen_table[CONTOUR_NUMPIXELS];

void run_contout(int brightness);
void run_screen(int brightness);

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);

  contour.begin();
  contour.clear();

  screen.begin();
  screen.clear();
}

// the loop routine runs over and over again forever:
void loop() {

  static int run_count = 0;
  int br = (analogRead(A0) * 128 ) / 1024;

//  Serial.print("rum count = ");
//  Serial.println(run_count);

  if(run_count % 128 == 0)
  {
    run_screen(br/4);
  }

  run_contout(br);
  
  run_count += 1;
  delay(5);
}

void run_screen(int brightness)
{
  static int image_index = 0;

  int image_num = screen_sequence[image_index];
  int r, g, b;

  screen.setBrightness(brightness);

  Serial.print("image : ");
  Serial.print(IMAGE_TO_STR(image_num));
  Serial.print(" ");
  Serial.println(image_num);

  for(int i = 0; i < screen.numPixels(); i++)
  {
    r = pgm_read_word(&images[image_num][i][0]) ;
    g = pgm_read_word(&images[image_num][i][1]) ;
    b = pgm_read_word(&images[image_num][i][2]) ;

    screen.setPixelColor(i, screen.Color(r, g, b));
  }
  screen.show();
  
  image_index = ( image_index + 1 ) % (sizeof(screen_sequence) / sizeof(int)) ;
}

void run_contout(int brightness)
{
  static bool state_table[CONTOUR_NUMPIXELS];
  int r, g, b, i;

  r = random(255);
  g = random(255);
  b = random(255);
  i = random(contour.numPixels());

//  Serial.println("run_contout()");

  contour.setBrightness(brightness);

  if(state_table[i] == true)
  {
    contour.setPixelColor(i, contour.Color(0, 0, 0));
    contour.show();
    state_table[i] = false;
  }
  else
  {
    contour.setPixelColor(i, contour.Color(r, g, b));
    contour.show();
    state_table[i] = true;
  }
}
