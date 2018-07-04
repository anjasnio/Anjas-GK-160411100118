
#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
float a = 0.3;
float b = 8;
float c = 0;
float d = -1;
void garis(){
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_STRIP);

	for(float x=0.0; x<=3.6; x+=0.1)
    {
    glVertex2f(x-12.8,a*-sin(b*x+c)+d);
    }
	glEnd();
}
void hantu1(){
    glColor3f(1.0, 0.0, 1.0);
                                  //Badan
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=3.14; t+=0.01){
        glVertex2f(1.8*cos(t)-11, 2.5*sin(t));
	}
	for(float x=0.0; x<=3.6; x+=0.1)
    {
    glVertex2f(x-12.8,a*-sin(b*x+c)+d);
    }
	glEnd();

	glColor3f(1.0, 1.0, 1.0);                               //Mata putih
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-10.27, 0.9*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-11.5, 0.9*sin(t)+0.4);
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);                               //Mata kecil
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-10.1, 0.4*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-11.3, 0.4*sin(t)+0.4);
	}
	glEnd();
	glBegin(GL_LINES);
	 for(float x=0.0; x<=6.28; x+=0.1)
    {
    glVertex2f(x,-sin(x));
    }
    glEnd();

}


void hantu2(){
    glColor3f(1.0, 0.5, 0.1);
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=3.14; t+=0.01){
        glVertex2f(1.8*cos(t)-6, 2.5*sin(t));
	}
	for(float x=0.0; x<=3.6; x+=0.1)
    {
    glVertex2f(x-7.8,a*-sin(b*x+c)+d);
    }
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-5.27, 0.9*sin(t)+0.4);
	}

	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-6.5, 0.9*sin(t)+0.4);
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-5.1, 0.4*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-6.3, 0.4*sin(t)+0.4);
	}
	glEnd();

}
void hantu3(){
    glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=3.14; t+=0.01){
        glVertex2f(1.8*cos(t)-16, 2.5*sin(t));
	}
	for(float x=0.0; x<=3.6; x+=0.1)
    {
    glVertex2f(x-17.8,a*-sin(b*x+c)+d);
    }
	glEnd();

    glColor3f(1.0, 1.0, 1.0);                               //Mata putih
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-15.27, 0.9*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-16.5, 0.9*sin(t)+0.4);
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);                               //Mata kecil
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-15.1, 0.4*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-16.3, 0.4*sin(t)+0.4);
	}
	glEnd();
}
void hantu4(){
    glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=3.14; t+=0.01){
        glVertex2f(1.8*cos(t)-21, 2.5*sin(t));
	}
	for(float x=0.0; x<=3.6; x+=0.1)
    {
    glVertex2f(x-22.8,a*-sin(b*x+c)+d);
    }
	glEnd();

    glColor3f(1.0, 1.0, 1.0);                               //Mata putih
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-20.27, 0.9*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.55*cos(t)-21.5, 0.9*sin(t)+0.4);
	}
	glEnd();

	glColor3f(0.0, 0.0, 0.0);                               //Mata kecil
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-20.1, 0.4*sin(t)+0.4);
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.3*cos(t)-21.3, 0.4*sin(t)+0.4);
	}
	glEnd();
}

void pacman(){

    glColor3f(1.0, 1.0, 0.0);                           //Pacman
	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	for(float t=0.75; t<=5.28; t+=0.01){
        glVertex2f(2.5*cos(t), 2.5*sin(t));
	}
	glEnd();

    glColor3f(1.0, 0.5, 0.1);                           //Lingkaran
	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.75*cos(t)+2, 0.75*sin(t));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for(float t=0.0; t<=6.28; t+=0.01){
        glVertex2f(0.75*cos(t)+4, 0.75*sin(t));
	}
	glEnd();

}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);

	hantu1();
	 garis();
    hantu2();
    hantu3();
    hantu4();
    pacman();
	glFlush();
}

void myinit(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-25.0,6.0,-10.0,10.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc, char* argv[]){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(700,700);
	//glutInitWindowPosition(100,100);
	glutCreateWindow("PacMan");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();

	return 0;
}
