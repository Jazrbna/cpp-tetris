#include "tetris.h"
#include <iostream>

using namespace std;

// Constructor runs when a Tetris object is created
Tetris::Tetris() {
    // Clear the grid at the start
    resetGrid();

    // Start piece roughly in the middle of the screen
    currentX = width / 2;

    // Start at top of screen
    currentY = 0;
}

// Sets all grid cells to empty (0)
void Tetris::resetGrid() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            grid[y][x] = 0;
        }
    }
}

// Prints the grid to the terminal
void Tetris::draw() {
    // Clears console screen each frame (Windows = cls, Linux/mac = clear)
    system("clear");

    // Loop through every row
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

        // Move to next line after each row
        cout << endl;
    }
}

// Updates game state (called every frame)
void Tetris::update() {
    // Move piece down by 1 cell each update
    currentY++;
}

// Move piece left
void Tetris::moveLeft() {
    currentX--;
}

// Move piece right
void Tetris::moveRight() {
    currentX++;
}

// Move piece down faster
void Tetris::moveDown() {
    currentY++;
}