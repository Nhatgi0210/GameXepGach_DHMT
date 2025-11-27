#include <GL/glut.h>
#include "Config.h"
#include "Board.h"
#include "Tetromino.h"  // ch? include header

Board board;
Tetromino current = { {{1,1,1,1}}, 3, 15 };

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    board.draw();
    drawTetromino(current);
    glutSwapBuffers();
}
void keyboard(int key, int, int){
    switch(key){
        case GLUT_KEY_LEFT: current.x--; break;
        case GLUT_KEY_RIGHT: current.x++; break;
        case GLUT_KEY_DOWN: current.y--; break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow("XepGach");
	glutSpecialFunc(keyboard);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}

