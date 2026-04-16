#include "tetris.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    Tetris game;

    while (true) {
        game.draw();
        game.update();

        // simple automatic delay
        this_thread::sleep_for(chrono::milliseconds(300));
    }

    return 0;
}