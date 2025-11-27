#include "Board.h"
#include <GL/glut.h>
#include <iostream>

using namespace std;

const float BLOCK_SIZE = 0.05f; // t? l? trong OpenGL [-1,1]

void drawBlock(float x, float y) {
    glBegin(GL_QUADS);
        glVertex2f(x, y);
        glVertex2f(x+BLOCK_SIZE, y);
        glVertex2f(x+BLOCK_SIZE, y+BLOCK_SIZE);
        glVertex2f(x, y+BLOCK_SIZE);
    glEnd();
}

void Board::draw() {
	
    for(int i=0;i<20;i++){
        for(int j=0;j<10;j++){
            if(grid[i][j]) drawBlock(j*BLOCK_SIZE, i*BLOCK_SIZE);
        }
    }
}

