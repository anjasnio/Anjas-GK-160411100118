
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

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,0.0,0.8);

    for(float i = 1; i<=6; i+=1)
    {
        glRecti(-2, 12, 2, 8);
        glRotated(60, 0, 0, 1);

    }

    for(float i = 1; i<=11; i+=1)
    {
        glRotated(30, 0, 0, 1);
        glRecti(-1, 11, 1, 9);
    }
    glLoadIdentity();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 0.0);
    for(float t = 0.0; t<=6.28; t+=0.01)
    {
        glVertex2f(10*cos(t), 10*sin(t));

    }
    glEnd();

    glFlush();
}
void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-13.0, 13.0, -13.0, 13.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0,0.0,0.0,0.0);
    glColor3f(0.0,0.0,0.0);
}
int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Transform");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
