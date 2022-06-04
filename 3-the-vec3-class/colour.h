#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

void writeColour(std::ostream &out, colour pixelColour){
    out << static_cast<int>(255.999 *pixelColour.x()) << ' '
        << static_cast<int>(255.999 *pixelColour.y()) << ' '
        << static_cast<int>(255.999 *pixelColour.z()) << '\n';
}

#endif