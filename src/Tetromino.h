#pragma once
#include <vector>

struct Tetromino {
    std::vector<std::vector<int>> shape;
    int x, y;
};

// Khai báo hàm drawTetromino
void drawTetromino(const Tetromino &t);

