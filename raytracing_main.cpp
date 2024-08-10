#include <iostream>
#include "vec3.h"
#include "color.h"

const int screenSize = 256;

int main() {
    int image_width = screenSize;
    int image_height = screenSize;

    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << " " << std::flush;

        for (int i = 0; i < image_width; i++) {
            auto pixel_colour = color(double(i) / double(image_width - 1), double(j) / double(image_height - 1), 0);

            write_color(std::cout, pixel_colour);

        }
    }

    std::clog << "\rDone.                       ";

    return 0;
}

