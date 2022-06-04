#include "../2-the-vec3-class/colour.h"

#include <iostream>

int main(){

    // Image attributes
    const int imageWidth = 1080;
    const int imageHeight = 1080;

    // Rendering the image

    std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for(int row = imageHeight-1; row >= 0; row--){
        std::cerr << "\rScanlines remaining: " << row << ' ' << std::flush;
        for(int col = imageWidth-1; col >= 0; col--){
            auto r = double(col) / (imageWidth-1);
            auto g = double(row) / (imageHeight-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::cerr << "Done!\n";
}