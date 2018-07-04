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
void bangun2(){
 //depan
 glColor3f(0.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, -0.8, 0.5);
 glVertex3f(3.0, -0.8, 0.5);
 glVertex3f(3.0, 0.8, 0.5);
 glVertex3f(-3.0, 0.8, 0.5);
 glEnd();
 //belakang
 glColor3f(0.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(3.0, -0.8, -0.5);
 glVertex3f(-3.0, -0.8, -0.5);
 glVertex3f(-3.0, 0.8, -0.5);
 glVertex3f(3.0, 0.8, -0.5);
 glEnd();
 //kiri
 glColor3f(1.0,0.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, -0.8, -0.5);
 glVertex3f(-3.0, -0.8, 0.5);
 glVertex3f(-3.0, 0.8, 0.5);
 glVertex3f(-3.0, 0.8, -0.5);
 glEnd();
 //kanan
 glColor3f(0.0,1.0,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(3.0, -0.8, -0.5);
 glVertex3f(3.0, 0.8, -0.5);
 glVertex3f(3.0, 0.8, 0.5);
 glVertex3f(3.0, -0.8, 0.5);
 glEnd();
 //bawah
 glColor3f(1.0,0.0,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(3.0, -0.8, 0.5);
 glVertex3f(-3.0, -0.8, 0.5);
 glVertex3f(-3.0, -0.8, -0.5);
 glVertex3f(3.0, -0.8, -0.5);
 glEnd();
//atas
 glColor3f(1.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-3.0, 0.8, 0.5);
 glVertex3f(3.0, 0.8, 0.5);
 glVertex3f(3.0, 0.8, -0.5);
 glVertex3f(-3.0, 0.8, -0.5);
 glEnd();
}
void bangun1(){
 glColor3f(1.0,1.0,1.0);
 //depan
 glBegin(GL_LINE_STRIP);
 glVertex3f(-3.0, -0.8, 0.5);
 glVertex3f(3.0, -0.8, 0.5);
 glVertex3f(3.0, 0.8, 0.5);
 glVertex3f(-3.0, 0.8, 0.5);
 glVertex3f(-3.0, -0.8, 0.5);
 glEnd();
 //belakang
 glBegin(GL_LINE_STRIP);
 glVertex3f(3.0, -0.8, -0.5);
 glVertex3f(-3.0, -0.8, -0.5);
 glVertex3f(-3.0, 0.8, -0.5);
 glVertex3f(3.0, 0.8, -0.5);
 glVertex3f(3.0, -0.8, -0.5);
 glEnd();
 //kiri
 glBegin(GL_LINE_STRIP);
 glVertex3f(-3.0, -0.8, -0.5);
 glVertex3f(-3.0, -0.8, 0.5);
 glVertex3f(-3.0, 0.8, 0.5);
 glVertex3f(-3.0, 0.8, -0.5);
 glVertex3f(-3.0, -0.8, -0.5);
 glEnd();
 //kanan
 glBegin(GL_LINE_STRIP);
 glVertex3f(3.0, -0.8, -0.5);
 glVertex3f(3.0, 0.8, -0.5);
 glVertex3f(3.0, 0.8, 0.5);
 glVertex3f(3.0, -0.8, 0.5);
 glVertex3f(3.0, -0.8, -0.5);
 glEnd();
 //bawah
 glBegin(GL_LINE_STRIP);
 glVertex3f(3.0, -0.8, 0.5);
 glVertex3f(-3.0, -0.8, 0.5);
 glVertex3f(-3.0, -0.8, -0.5);
 glVertex3f(3.0, -0.8, -0.5);
 glVertex3f(3.0, -0.8, 0.5);
 glEnd();
//atas
 glBegin(GL_LINE_STRIP);
 glVertex3f(-3.0, 0.8, 0.5);
 glVertex3f(3.0, 0.8, 0.5);
 glVertex3f(3.0, 0.8, -0.5);
 glVertex3f(-3.0, 0.8, -0.5);
 glVertex3f(-3.0, 0.8, 0.5);
 glEnd();
}
void no1(){
 glRotated(30, 1,0,0);
 glPushMatrix();
 glRotated(45, 0,0,1);
 bangun1();
 glPopMatrix();
 glPushMatrix();
 glRotated(-45, 0,0,1);
 bangun1();
 glPopMatrix();
}
void no2(){
 glRotated(30, 1,0,0);
 glPushMatrix();
 glRotated(45, 0,0,1);
 bangun2();
 glPopMatrix();
 glPushMatrix();
 glRotated(-45, 0,0,1);
 bangun2();
 glPopMatrix();
}

void no3(){

}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
 no1();
 no2();
 //no3();
 glFlush();
}
void myinit()
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-4.0,4.0,-4.0,4.0,-4.0,4.0);
 glMatrixMode(GL_MODELVIEW);
 glClearColor(0.0,0.0,0.0,1.0);
 glColor3f(0.0,0.0,0.0);
 glShadeModel(GL_FLAT);
 glEnable(GL_DEPTH_TEST);
}
int main(int argc, char* argv[])
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
 glutInitWindowSize(400,400);
 glutInitWindowPosition(100,100);
 glutCreateWindow("Kotak");
 glutDisplayFunc(display);
 myinit();
 glutMainLoop();
 return 0;
}
