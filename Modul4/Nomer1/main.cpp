
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


void myinit()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-5.6, 5.6, -5.6, 5.6);
    glMatrixMode(GL_MODELVIEW);
}

void checker(){
    for(float i=-8; i<=8; i+=4)
    {
        glColor3f(1.0,1.0,0.0);
        for (float a=-8; a<=8; a+=4)
        {
            glRecti(a, i, a+2, i+2);
        }
        glColor3f(0.0,0.0,0.8);
        for (float a=-8; a<=8; a+=4)
        {
            glRecti(a+2, i, a+4, i+2);
        }
    }
    for(float i=-6; i<=10; i+=4)
    {

        glColor3f(0.0,0.0,0.8);
        for (float a=-8; a<=8; a+=4)
        {
            glRecti(a, i, a+2, i+2);
        }
        glColor3f(1.0,1.0,0.0);
        for (float a=-8; a<=8; a+=4)
        {
            glRecti(a+2, i, a+4, i+2);
        }
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glRotated(45, 0, 0, 1);
    checker();
    glFlush();
}

int main(int argc, char* argv[])
{
    //glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Checker Board");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
