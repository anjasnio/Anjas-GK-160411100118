
/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <Math.h>


void myinit(){
    glClearColor(1.0, 1.0, 0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-6, 6, -6, 6);
    glMatrixMode(GL_MODELVIEW);
}
void kotak(){
    glRectd(-1.08, -1.08, 1.08, 1.08);
}

void checker(){
     for(float i=-6; i<=6; i+=3)
    {
        glColor3f(0.0,0.0,1.0);
        for (float a=-6; a<=6; a+=3)
        {
            glPushMatrix();
            glTranslated(a,i,0);
            glRotated(45,0,0,1);
            kotak();
            glPopMatrix();
    }
}
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    checker();
    glFlush();
}

int main(int argc, char* argv[]){
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Checker Board");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
