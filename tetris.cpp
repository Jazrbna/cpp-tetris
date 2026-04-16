#include "tetris.h"
#include <iostream>

using namespace std;

Tetris::Tetris() {
    resetGrid();
    currentX = width / 2;
    currentY = 0;
}

void Tetris::resetGrid() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            grid[y][x] = 0;
        }
    }
}

void Tetris::draw() {
    system("clear"); // use "cls" on Windows

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {

            if (x == currentX && y == currentY)
                cout << "X";
            else
                cout << (grid[y][x] ? "#" : ".");
        }
        cout << endl;
    }
}

void Tetris::update() {
    currentY++; // piece falls
}

void Tetris::moveLeft()  { currentX--; }
void Tetris::moveRight() { currentX++; }
void Tetris::moveDown()  { currentY++; }

// game code will go here later