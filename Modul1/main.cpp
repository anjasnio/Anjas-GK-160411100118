
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(4);
 glLineWidth(7);
 glBegin(GL_LINES);
 glColor3f (1.0, 0.0, 1.0);
 glVertex2f (-3.0, 3.0);
 glVertex2f (3.0, 3.0);
 glVertex2f (3.0, 3.0);
 glVertex2f (3.0, -3.0);
 glVertex2f (3.0, -3.0);
 glVertex2f (-3.0, -3.0);
 glVertex2f (-3.0, -3.0);
 glVertex2f (-3.0, 3.0);

 glVertex2f (-1.0, 3.0);
 glVertex2f (-1.0, -3.0);
 glVertex2f (1.0, 3.0);
 glVertex2f (1.0, -3.0);

 glVertex2f (-3.0, 1.0);
 glVertex2f (3.0, 1.0);
 glVertex2f (-3.0, -1.0);
 glVertex2f (3.0, -1.0);

 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
 glColor3f (0.0, 1.0, 0.0);
 glVertex2f (-0.1, 0.7);
 glVertex2f (0.1, 0.7);
 glVertex2f (0.7, -0.7);
 glVertex2f (0.5, -0.7);
 glVertex2f (0.3, -0.2);
 glVertex2f (-0.3, -0.2);
 glVertex2f (-0.5, -0.7);
 glVertex2f (-0.7, -0.7);

 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_STRIP);
 glColor3f (0.0, 1.0, 0.0);
 glVertex2f (0.0, 0.5);
 glVertex2f (0.2, 0.0);
 glVertex2f (-0.2, 0.0);
 glVertex2f (0.0, 0.5);
 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
 glColor3f (0.0, 1.0, 0.0);
 glVertex2f (0.0, 1.2);
 glVertex2f (0.8, 2.0);
 glVertex2f (0.4, 2.0);
 glVertex2f (0.4, 2.8);
 glVertex2f (-0.4, 2.8);
 glVertex2f (-0.4, 2.0);
 glVertex2f (-0.8, 2.0);
 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
 glVertex2f (1.5, 2.8);
 glVertex2f (2.6, 2.8);
 glVertex2f (2.6, 2.6);
 glVertex2f (2.0, 1.2);
 glVertex2f (1.8, 1.2);
 glVertex2f (2.4, 2.6);
 glVertex2f (1.5, 2.6);

 glColor3f (0.0, 0.0, 1.0);

 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
 glColor3f (0.0, 1.0, 0.0);
 glVertex2f (0.0, -1.2);
 glVertex2f (0.8, -2.0);
 glVertex2f (0.4, -2.0);
 glVertex2f (0.4, -2.8);
 glVertex2f (-0.4, -2.8);
 glVertex2f (-0.4, -2.0);
 glVertex2f (-0.8, -2.0);
 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
 glColor3f (0.0, 1.0, 0.0);
 glVertex2f (-1.2, 0.0);
 glVertex2f (-2.0, 0.8);
 glVertex2f (-2.0, 0.4);
 glVertex2f (-2.8, 0.4);
 glVertex2f (-2.8, -0.4);
 glVertex2f (-2.0, -0.4);
 glVertex2f (-2.0, -0.8);
 glEnd();

 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
 glColor3f (0.0, 1.0, 0.0);
 glVertex2f (1.2, 0.0);
 glVertex2f (2.0, 0.8);
 glVertex2f (2.0, 0.4);
 glVertex2f (2.8, 0.4);
 glVertex2f (2.8, -0.4);
 glVertex2f (2.0, -0.4);
 glVertex2f (2.0, -0.8);
 glEnd();



 glFlush();

}
void myinit(){
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-5.0,5.0,-5.0,5.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0.0,0.0,0.0,0.0);

}
int main(int argc, char* argv[]){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(700,700);
 //glutInitWindowPosition(100,100);
 glutCreateWindow("Tugas 1");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
return 0;
}

