#include "Tetromino.h"
#include <GL/glut.h>

const float BLOCK_SIZE = 0.05f;

void drawTetromino(const Tetromino &t) {
    for(int i=0;i<t.shape.size();i++){
        for(int j=0;j<t.shape[i].size();j++){
            if(t.shape[i][j]){
                float x = (t.x+j)*BLOCK_SIZE;
                float y = (t.y+i)*BLOCK_SIZE;
                glBegin(GL_QUADS);
                    glVertex2f(x, y);
                    glVertex2f(x+BLOCK_SIZE, y);
                    glVertex2f(x+BLOCK_SIZE, y+BLOCK_SIZE);
                    glVertex2f(x, y+BLOCK_SIZE);
                glEnd();
            }
        }
    }
}

