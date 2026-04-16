#include "tetris.h"
#include <iostream>

using namespace std;

// constructor runs when a tetris object is created
Tetris::Tetris() {
    // clear the grid at the start
    resetGrid();

    // start piece roughly in the middle of the screen
    currentX = width / 2;

    // start at top of screen
    currentY = 0;
}

// sets all grid cells to empty (0)
void Tetris::resetGrid() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            grid[y][x] = 0;
        }
    }
}

// prints the grid to the terminal
void Tetris::draw() {
    // clears console screen each frame
    system("clear");

    // loop through every row
    for (int y = 0; y < height; y++) {

        // Loop through every column
        for (int x = 0; x < width; x++) {

            // If this position matches the falling piece, draw it as X
            if (x == currentX && y == currentY)
                cout << "X";

            // Otherwise draw either empty (.) or filled (#)
            else
                cout << (grid[y][x] ? "#" : ".");
        }

        // move to next line after each row
        cout << endl;
    }
}

// updates game state (called every frame)
void Tetris::update() {
    // move piece down by 1 cell each update
    currentY++;
}

// move piece left
void Tetris::moveLeft() {
    currentX--;
}

// move piece right
void Tetris::moveRight() {
    currentX++;
}

// move piece down faster
void Tetris::moveDown() {
    currentY++;
}