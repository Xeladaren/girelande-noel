
FQBN=arduino:avr:uno
TTY=/dev/ttyUSB0

all: Girelande_Noel.ino images.h screen_sequence.h
	arduino-cli compile --fqbn $(FQBN)

images.h: images/*.png
	./img_convert.py --rotate 180 images/*.png

upload: all
	arduino-cli upload -p $(TTY) --fqbn $(FQBN)