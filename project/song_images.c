#include "lcdutils.h"
#include "lcddraw.h"

void drawDefault() {
  clearScreen(COLOR_BLUE);
  // find the height and width of the screen
  u_char width = screenWidth, height = screenHeight;
  // find the location of the top triangle
  int centerCol = width / 2, centerRow = height / 4;
  // set the length it each triangle
  int sideLength = 20; 

  // draw the top triangle
  for (int row = 0; row < sideLength; row++) {
    for (int col = -row; col <= row; col++) {
      drawPixel(centerCol + col, centerRow + row, COLOR_PINK);
    }
  }

  // draw the bottom-left triangle
  // find the location of the triangle
  int leftCenterCol = centerCol - sideLength;
  int leftCenterRow = centerRow + sideLength;
  for (int row = 0; row < sideLength; row++) {
    for (int col = -row; col <= row; col++) {
      drawPixel(leftCenterCol + col, leftCenterRow + row, COLOR_PINK);
    }
  }

  // draw the bottom-right triangle
  // find the location of the triangle
  int rightCenterCol = centerCol + sideLength;
  int rightCenterRow = centerRow + sideLength;
  for (int row = 0; row < sideLength; row++) {
    for (int col = -row; col <= row; col++) {
      drawPixel(rightCenterCol + col, rightCenterRow + row, COLOR_PINK);
    }
  }
}

void drawZeldasLullaby() {
  clearScreen(COLOR_RED);
  drawString5x7(30, 30, "Zelda's Lullaby", COLOR_WHITE, COLOR_RED);
}

void drawOOT() {
  clearScreen(COLOR_ORANGE);
  drawString5x7(30, 30, "Ocarina of Time Main Theme", COLOR_BLACK, COLOR_ORANGE);
}

void drawSOH() {
  clearScreen(COLOR_BROWN);
  drawString5x7(30, 30, "Song of Healing", COLOR_WHITE, COLOR_BROWN);
}

void drawTP() {
  clearScreen(COLOR_GREEN);
  drawString5x7(30, 30, "Twilight Princess Theme", COLOR_BLACK, COLOR_GREEN);
}
