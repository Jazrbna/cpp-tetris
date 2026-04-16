#ifndef TETRIS_H
#define TETRIS_H

#include <vector>

// Tetris class contains all game logic and state
class Tetris {
private:
    // Width of the game grid (10 columns)
    static const int width = 10;

    // Height of the game grid (20 rows)
    static const int height = 20;

    // 2D array representing the game board
    // 0 = empty cell, 1 = filled cell
    int grid[height][width];

    // Current position of the falling piece
    int currentX, currentY;

public:
    // Constructor: sets up initial game state
    Tetris();

    // Resets the game grid to empty
    void resetGrid();

    // Draws the grid to the console
    void draw();

    // Updates game state (e.g., makes piece fall)
    void update();

    // Move piece left
    void moveLeft();

    // Move piece right
    void moveRight();

    // Move piece down faster
    void moveDown();
};

#endif