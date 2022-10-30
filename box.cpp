#include <iostream>

#include "imageio.h"

void box() {
  std::string input = "image1.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = 255 - img[row][col];
    }
  }
  for(int row = h/4; row < (3 * h)/4; row++) {
    for(int col = w/4; col < (3 * w)/4; col++) {
        out[row][col] = 255;
    }
  }
  writeImage("taskC.pgm",out, h, w);
}

void one_pixel_thick() {
  std::string input = "image1.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = 255 - img[row][col];
    }
  }
    for(int col = w/4; col < (3 * w)/4; col++) {
        out[h/4][col] = 255;
    }
    for(int col = w/4; col < (3 * w)/4; col++) {
        out[(3*h)/4][col] = 255;
    }
    for(int row = h/4; row < (3*h)/4; row++) {
        out[row][w/4] = 255;
    }
    for(int row = h/4; row < (3*h)/4; row++) {
        out[row][(3*w)/4] = 255;
    }
  writeImage("taskD.pgm",out, h, w);
}

int main()
{
box();
one_pixel_thick();
}
