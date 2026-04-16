#include "tetris.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    // Create game object
    Tetris game;

    // Infinite game loop
    while (true) {

        // Draw current game state to screen
        game.draw();

        // Update game logic (move piece down)
        game.update();

        // Wait 300ms so game doesn't run too fast
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}