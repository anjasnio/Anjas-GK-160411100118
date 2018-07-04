#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif
#include <stdlib.h>


void pintu(){
//Pintu
 glColor3f(0.3,0.3,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(2.0, 0.0, 6.0);
 glVertex3f(2.0, 6.0, 6.0);
 glVertex3f(-2.0, 6.0, 6.0);
 glVertex3f(-2.0, 0.0, 6.0);
 glEnd();
}

void jendela(){
//jendela
 glColor3f(0.2,0.2,0.2);
 glBegin(GL_POLYGON);
 glVertex3f(4.0, 3.0, 1.5);
 glVertex3f(4.0, 7.0, 1.5);
 glVertex3f(4.0, 7.0, -1.5);
 glVertex3f(4.0, 3.0, -1.5);
 glEnd();

 glBegin(GL_POLYGON);
 glVertex3f(4.0, 3.0, 5.0);
 glVertex3f(4.0, 7.0, 5.0);
 glVertex3f(4.0, 7.0, 2.0);
 glVertex3f(4.0, 3.0, 2.0);
 glEnd();

 glBegin(GL_POLYGON);
 glVertex3f(4.0, 3.0, -2.0);
 glVertex3f(4.0, 7.0, -2.0);
 glVertex3f(4.0, 7.0, -5.0);
 glVertex3f(4.0, 3.0, -5.0);
 glEnd();
}

void inis(){
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex3f(3.0, 1.0, -6.0);
glVertex3f(0.5, 7.0, -6.0);
glVertex3f(-0.5, 7.0, -6.0);
glVertex3f(2.0, 1.0, -6.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-2.0, 1.0, -6.0);
glVertex3f(0.5, 7.0, -6.0);
glVertex3f(-0.5, 7.0, -6.0);
glVertex3f(-3.0, 1.0, -6.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(1.5, 3.5, -6.0);
glVertex3f(-1.5, 3.5, -6.0);
glVertex3f(-1.5, 2.5, -6.0);
glVertex3f(1.5, 2.5, -6.0);
glEnd();
}


void nim(){
//satu
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex3f(-4.0, 2.0, -3.0);
glVertex3f(-4.0, 7.0, -3.0);
glVertex3f(-4.0, 7.0, -2.0);
glVertex3f(-4.0, 2.0, -2.0);
glEnd();
//satu
glBegin(GL_POLYGON);
glVertex3f(-4.0, 2.0, -1.0);
glVertex3f(-4.0, 7.0, -1.0);
glVertex3f(-4.0, 7.0, -0.0);
glVertex3f(-4.0, 2.0, -0.0);
glEnd();
//delapan
glBegin(GL_POLYGON);
glVertex3f(-4.0, 2.0, 2.0);
glVertex3f(-4.0, 7.0, 2.0);
glVertex3f(-4.0, 7.0, 1.0);
glVertex3f(-4.0, 2.0, 1.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-4.0, 2.0, 4.0);
glVertex3f(-4.0, 7.0, 4.0);
glVertex3f(-4.0, 7.0, 3.0);
glVertex3f(-4.0, 2.0, 3.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-4.0, 2.0, 2.0);
glVertex3f(-4.0, 3.0, 2.0);
glVertex3f(-4.0, 3.0, 4.0);
glVertex3f(-4.0, 2.0, 4.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-4.0, 6.0, 2.0);
glVertex3f(-4.0, 7.0, 2.0);
glVertex3f(-4.0, 7.0, 4.0);
glVertex3f(-4.0, 6.0, 4.0);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(-4.0, 4.0, 2.0);
glVertex3f(-4.0, 5.0, 2.0);
glVertex3f(-4.0, 5.0, 4.0);
glVertex3f(-4.0, 4.0, 4.0);
glEnd();
}

void display()
{
 glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
 //glRotated(45, 1,1,1);
glPushMatrix();
//Rumah
 //bawah
 glColor3f(0.0,0.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(4.0, 0.0, 6.0);
 glVertex3f(-4.0, 0.0, 6.0);
 glVertex3f(-4.0, 0.0, -6.0);
 glVertex3f(4.0, 0.0, -6.0);
 glEnd();

 //depan
 pintu();
 glColor3f(1.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(4.0, 0.0, 6.0);
 glVertex3f(4.0, 8.0, 6.0);
 glVertex3f(-4.0, 8.0, 6.0);
 glVertex3f(-4.0, 0.0, 6.0);
 glEnd();

 //belakang
 glColor3f(1.0,1.0,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(4.0, 0.0, -6.0);
 glVertex3f(4.0, 8.0, -6.0);
 glVertex3f(-4.0, 8.0, -6.0);
 glVertex3f(-4.0, 0.0, -6.0);
 glEnd();

 //kanan
 jendela();
 glColor3f(1.0,1.0,0.2);
 glBegin(GL_POLYGON);
 glVertex3f(-4.0, 0.0, 6.0);
 glVertex3f(-4.0, 8.0, 6.0);
 glVertex3f(-4.0, 8.0, -6.0);
 glVertex3f(-4.0, 0.0, -6.0);
 glEnd();

 //kiri
 nim();
 glColor3f(1.0,1.0,0.2);
 glBegin(GL_POLYGON);
 glVertex3f(4.0, 0.0, 6.0);
 glVertex3f(4.0, 8.0, 6.0);
 glVertex3f(4.0, 8.0, -6.0);
 glVertex3f(4.0, 0.0, -6.0);
 glEnd();

//Atap
 //depan
 glColor3f(1.0,0.3,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(5.0, 8.0, 6.0);
 glVertex3f(0.0, 14.0, 6.0);
 glVertex3f(-5.0, 8.0, 6.0);
 glEnd();

 //belakang
 inis();
 glColor3f(1.0,0.3,1.0);
 glBegin(GL_POLYGON);
 glVertex3f(5.0, 8.0, -6.0);
 glVertex3f(0.0, 14.0, -6.0);
 glVertex3f(-5.0, 8.0, -6.0);
 glEnd();

 //kanan
 glColor3f(1.0,0.5,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(5.0, 8.0, 6.0);
 glVertex3f(0.0, 14.0, 6.0);
 glVertex3f(0.0, 14.0, -6.0);
 glVertex3f(5.0, 8.0, -6.0);
 glEnd();

 //kiri
 glColor3f(1.0,0.5,0.0);
 glBegin(GL_POLYGON);
 glVertex3f(-5.0, 8.0, 6.0);
 glVertex3f(0.0, 14.0, 6.0);
 glVertex3f(0.0, 14.0, -6.0);
 glVertex3f(-5.0, 8.0, -6.0);
 glEnd();

 //bawah
 glColor3f(0.3,0.3,0.3);
 glBegin(GL_POLYGON);
 glVertex3f(5.0, 8.0, 6.0);
 glVertex3f(-5.0, 8.0, 6.0);
 glVertex3f(-5.0, 8.0, -6.0);
 glVertex3f(5.0, 8.0, -6.0);
 glEnd();

glPopMatrix();

glFlush();
}

void kunci(unsigned char key, int x, int y)
{
 switch (key)
 {
 case 'w' :
    glRotatef(-1, 1,0,0);
    break;
 case 'a' :
    glRotatef(-1, 0,1,0);
    break;
 case 'x' :
    glRotatef(-1, 0,0,1);
 case 's' :
    glRotatef(1, 1,0,0);
    break;
 case 'd' :
    glRotatef(1, 0,1,0);
    break;
 case 'z' :
    glRotatef(1, 0,0,1);
    break;
 }
 glutPostRedisplay();
}

void myinit()
{
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-15.0,15.0,-15.0,15.0,-15.0,15.0);
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
 glutKeyboardFunc(kunci);
 myinit();
 glutMainLoop();
 return 0;
}
