#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
void display(){
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f (1, 1, 1);
 glBegin(GL_POLYGON);

 glVertex2f (-2, 0.0);
 glVertex2f (-2, 2);
 glVertex2f (0, 2);
 glVertex2f (0, 0);
glEnd();

 glColor3f (0, 0, 0);
 glBegin(GL_POLYGON);
 glVertex2f (0, 0.0);
 glVertex2f (0, 2);
 glVertex2f (2, 2);
 glVertex2f (2, 0);
glEnd();

 glColor3f (1, 1, 1);
 glBegin(GL_POLYGON);
 glVertex2f (0, 0.0);
 glVertex2f (2, 0);
 glVertex2f (2, -2);
 glVertex2f (0, -2);
 glEnd();

 glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
 glVertex2f (1.2, -1.8);
 glVertex2f (0.8, -1.8);
 glVertex2f (0.2, -0.2);
 glVertex2f (0.6, -0.2);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
 glVertex2f (1.2, -1.8);
 glVertex2f (0.8, -1.8);
 glVertex2f (1.4, -0.2);
 glVertex2f (1.8, -0.2);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
 glVertex2f (0.8, -1);
 glVertex2f (0.4, -0.6);
 glVertex2f (1.6, -0.6);
 glVertex2f (1.2, -1);
glEnd();

 glColor3f (0, 0, 0);
 glBegin(GL_POLYGON);
 glVertex2f (0, 0.0);
 glVertex2f (0, -2);
 glVertex2f (-2, -2);
 glVertex2f (-2, 0);

 glEnd();

 glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
 glVertex2f (-1.2, 1.8);
 glVertex2f (-0.8, 1.8);
 glVertex2f (-0.2, 0.2);
 glVertex2f (-0.6, 0.2);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
 glVertex2f (-1.2, 1.8);
 glVertex2f (-0.8, 1.8);
 glVertex2f (-1.4, 0.2);
 glVertex2f (-1.8, 0.2);
glEnd();

glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
 glVertex2f (-0.8, 1);
 glVertex2f (-0.4, 0.6);
 glVertex2f (-1.6, 0.6);
 glVertex2f (-1.2, 1);
glEnd();
 glFlush();
}
void myinit(){
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-2.0,2.0,-2.0,2.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0.0,0.0,0.0,0.0);
 glColor3f (1.0, 1.0, 0.0);
}
int main(int argc, char* argv[]){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 //glutInitWindowPosition(100,100);
 glutCreateWindow("Primitif Bangun Datar");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
return 0;
}
