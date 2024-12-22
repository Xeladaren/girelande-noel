#!/usr/bin/env python3

from PIL import Image
import numpy as np
import argparse
import os.path

parser = argparse.ArgumentParser()

parser.add_argument('--output', "-o", default="images.h")
parser.add_argument('--rotate', "-r", type=int, default=0)
parser.add_argument('image', nargs='+')

args = parser.parse_args()

define_str = ""
index_to_str = "\n#define IMAGE_TO_STR(index)	\\\n"
image_str = f"\nconst int images_count = {len(args.image)};\n"

image_str += f"\nconst uint8_t PROGMEM images[{len(args.image)}][64][3] = " + "{"
is_first_image = True
index = 0

for image_path in args.image:

    im = np.array(Image.open(image_path).convert('RGB').rotate(args.rotate))
    file_name = os.path.basename(image_path).split(".")[0]

    define_str   += f"#define {file_name:10} 0x{index:02X}\n"
    index_to_str += f"\tindex == 0x{index:02X} ? \"{file_name}\" : \\\n"

    if is_first_image:
        is_first_image = False
    else:
        image_str += ","
    image_str += f"\n\t/* {index:02} {file_name:10} */ " + "{"

    is_first_pixel = True

    for ligne in im:
        for pixel in ligne:
            if is_first_pixel:
                image_str += "{"
                is_first_pixel = False
            else:
                image_str += ", {"
            image_str += f"0x{pixel[0]:02X}, 0x{pixel[1]:02X}, 0x{pixel[2]:02X}"
            image_str += "}"
    image_str += "}"

    index += 1


image_str += "\n};\n\n"
index_to_str += f"\t\"Unknow\"\n"

file_name = "images.h"
header_guard_name = file_name.upper().replace(".", "_")

print(f"Generate {file_name}")

file_header = open("images.h", "w")
file_header.write(f"\n#ifndef {header_guard_name}\n")
file_header.write(f"#define {header_guard_name}\n")
file_header.write(image_str)
file_header.write(define_str)
file_header.write(index_to_str)
file_header.write(f"\n#endif /* {header_guard_name} */\n")
file_header.close()