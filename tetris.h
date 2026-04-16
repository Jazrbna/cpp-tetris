#ifndef TETRIS_H
#define TETRIS_H

#include <vector>

class Tetris {
private:
    static const int width = 10;
    static const int height = 20;

    int grid[height][width];

    int currentX, currentY;

public:
    Tetris();

    void resetGrid();
    void draw();
    void update();

    void moveLeft();
    void moveRight();
    void moveDown();
};

#endif