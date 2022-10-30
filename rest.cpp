#include <iostream>

#include "imageio.h"

void scale() {
  std::string input = "image1.pgm";
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];
  int x;
  int y;
  for(int row = 0; row < h/2; row++) {
    for(int col = 0; col < w/2; col++) {
    x = row*2;
    y = col*2;
    out[x][y] = img[row][col];
    out[x+1][y] = img[row][col];
    out[x][y+1] = img[row][col];
    out[x+1][y+1]= img[row][col];
    }
}
  writeImage("taskE.pgm",out, h, w);
}

void pixelate() {
    std::string input = "image1.pgm";
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int out[MAX_H][MAX_W];
    int average;
    int x;
    int y;
    for(int row = 0; row < h/2; row++) {
        for(int col = 0; col < w/2; col++) {
            average = (img[row][col] + img[row+1][col] + img[row][col+1] +img[row+1][col+1])/4;
    x = row*2;
    y = col*2;
    out[x][y] = average;
    out[x+1][y] = average;
    out[x][y+1] = average;
    out[x+1][y+1]= average;        
        }
    }

    writeImage("taskF.pgm",out, h, w);
    }
int main()
{
scale();
pixelate();
}