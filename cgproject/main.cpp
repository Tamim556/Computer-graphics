#include<cstdio>
#include <GL/gl.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>




# define PI           3.14159265358979323846
int i=0;

int night=0;
int raining=0;
int rainhappen=1;
GLfloat position1 = 0.0f;
GLfloat speedship = 2.0f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 2.1f;

GLfloat position3 = 0.0f;
GLfloat speedcar = 3.0f;
GLfloat position4 = 0.0f;
GLfloat speedsboard = 7.0f;

GLfloat positioncloud = 0.0f;
GLfloat speedcloud = 1.0f;
GLfloat positionrain = 0.0f;
GLfloat speedrain = 3.0f;

GLfloat a = 0.0f;

void Idle()
{
   // glutPostRedisplay();
    glutPostRedisplay();
}

void ship(int value) {

    if(position1 >200)
        position1 = -200;

    position1 += speedship;

	glutPostRedisplay();


	glutTimerFunc(100, ship, 0);
}

void bus(int value) {

    if(position2 <-300.0)
        position2 = 300.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, bus, 0);


}

void car(int value) {

    if(position3 <-300.0)
        position3 = 300.0f;

    position3 -= speedcar;

	glutPostRedisplay();


	glutTimerFunc(100, car, 0);


}
void sboard(int value) {

    if(position4 <-300.0)
        position4 = 300.0f;

    position4 -= speedsboard;

	glutPostRedisplay();


	glutTimerFunc(100, sboard, 0);


}


void cloud(int value) {

    if(positioncloud > 200.0)
        positioncloud = -100.0f;

    positioncloud += speedcloud;

	glutPostRedisplay();


	glutTimerFunc(100, cloud, 0);


}

void rain(int value) {

    if(positionrain <- 20.0)
        positionrain = 10.0f;

    positionrain -= speedrain;

	glutPostRedisplay();


	glutTimerFunc(100, rain, 0);


}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

      //backround Sky
     glBegin(GL_POLYGON);
	//glColor3ub(0, 102, 255);
	if(night==1)
    {
        glColor3ub(0.933, 0.910, 0.667);
    }
	else{
    glColor3ub(0,102,255);}


	glVertex2i(200.0, 200.0);
	glVertex2i(0, 200.0);

	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255,255,255);}

	//glColor3ub(255, 255, 255);
	glVertex2i(0, 130);
	glVertex2i(200, 130);
	glEnd();

	//coding for sun

    float  x=50.0; float y=190.0f;float radius =10.0f;
float	triangleAmount = 30; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
float	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(255,255,255);
    }
	else{
    glColor3ub(255, 51, 0);}
	//glColor3ub(255, 51, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//coding for cloud
	glPushMatrix();
    glTranslatef(positioncloud,0.0f, 0.0f);

	x=120.0f; y=180.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=115.0f; y=175.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=130.0f; y=170.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=135.0f; y=175.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



 glPushMatrix();
    glTranslatef(-100, 0, 0.0);

    	x=120.0f; y=180.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=115.0f; y=175.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=130.0f; y=170.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=135.0f; y=175.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 glTranslatef(-120, 0, 0.0);

    	x=120.0f; y=180.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=115.0f; y=175.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=130.0f; y=170.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=135.0f; y=175.0f; radius =9.0f;
	glBegin(GL_TRIANGLE_FAN);
if(night==1)
    {
        glColor3ub(1,1,1);
    }
	else{
    glColor3ub(255, 255,255);}		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glLoadIdentity();
    glPopMatrix();




//coding for biman
glPushMatrix();
    glTranslatef(-20, 0, 0.0);
  glBegin(GL_POLYGON);
     glColor3ub(102, 153, 153);
     glVertex2f(80, 180);
    glVertex2f(110,180);
    glVertex2f(115,182.5);
    glVertex2f(110,185);
     glVertex2f(80,185);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(102, 153, 153);
   glVertex2f(100,180);
   glVertex2f(95,180);
   glVertex2f(85,165);
   glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(102, 153, 153);
   glVertex2f(100,185);
   glVertex2f(95,185);
   glVertex2f(85,195);
   glEnd();

    glLoadIdentity();
	glPopMatrix();


  glLoadIdentity();
	glPopMatrix();


	//backroung middle
     glBegin(GL_POLYGON);
	if(night==1)
    {
        glColor3ub(0, 51, 51);
    }
	else{
    glColor3ub(204, 255, 255);}
	//glColor3ub(204, 255, 255);

	glVertex2i(0,60);
	glVertex2i(200,60);


	if(night==1)
    {
        glColor3ub(0, 51, 51);
    }
	else{
    glColor3ub(0, 153, 153);}
	//glColor3ub(0, 153, 153);
	glVertex2i(200,130);
	glVertex2i(0, 130);
	glEnd();

	 glBegin(GL_QUADS) ;
     glColor3ub(0, 102, 0);       // Each set of 4 vertices form a quad
     glVertex2f(0,130);
    glVertex2f(0,125);
    glVertex2f(200,125);
    glVertex2f(200,130);

    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(0, 102, 0);       // Each set of 4 vertices form a quad
     glVertex2f(0, 60);
    glVertex2f(200,60);
    glVertex2f(200,90);
    glVertex2f(100,80);
     glVertex2f(0,80);

    glEnd();

  //back roung last
    	 glBegin(GL_QUADS) ;
   if(night==1)
    {
        glColor3ub(10,15,15);
    }
	else{
   // glColor3ub(255, 255,255);}
    glColor3f(0.412, 0.412, 0.412);}     // Each set of 4 vertices form a quad
     glVertex2f(0,0);
    glVertex2f(200,0);
    glVertex2f(200,60);
    glVertex2f(0,60);

    glEnd();
  //coding for road divider///
    glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(20,25);
    glVertex2f(40,26);
    glVertex2f(40,31);
    glVertex2f(20,30);

    glEnd();

    glPushMatrix();
    glTranslatef(60, 0, 0.0);

 glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(20,25);
    glVertex2f(40,26);
    glVertex2f(40,31);
    glVertex2f(20,30);

    glEnd();

    glTranslatef(60, 0, 0.0);

 glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(20,25);
    glVertex2f(40,26);
    glVertex2f(40,31);
    glVertex2f(20,30);

    glEnd();

    glTranslatef(60, 0, 0.0);

 glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(20,25);
    glVertex2f(40,26);
    glVertex2f(40,31);
    glVertex2f(20,30);

    glEnd();

 glLoadIdentity();
     glPopMatrix();

        //coding for lamp post

    glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(25,60);
    glVertex2f(29,60);
    glVertex2f(29,100);
    glVertex2f(25,100);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(29,90);
    glVertex2f(40,95);
    glVertex2f(33,95);
    glVertex2f(25,90);

    glEnd();

   glBegin(GL_POLYGON) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(35,93);
      glVertex2f(40,91);
    glVertex2f(45,91);
    glVertex2f(45,96);
    glVertex2f(35,96);

    glEnd();

    glPushMatrix();
    glTranslatef(60, 0, 0.0);

       glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(25,60);
    glVertex2f(29,60);
    glVertex2f(29,100);
    glVertex2f(25,100);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(29,90);
    glVertex2f(40,95);
    glVertex2f(33,95);
    glVertex2f(25,90);

    glEnd();

   glBegin(GL_POLYGON) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(35,93);
      glVertex2f(40,91);
    glVertex2f(45,91);
    glVertex2f(45,96);
    glVertex2f(35,96);

    glEnd();

     glTranslatef(60, 0, 0.0);

       glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(25,60);
    glVertex2f(29,60);
    glVertex2f(29,100);
    glVertex2f(25,100);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(29,90);
    glVertex2f(40,95);
    glVertex2f(33,95);
    glVertex2f(25,90);

    glEnd();

   glBegin(GL_POLYGON) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(35,93);
      glVertex2f(40,91);
    glVertex2f(45,91);
    glVertex2f(45,96);
    glVertex2f(35,96);

    glEnd();



     glLoadIdentity();
     glPopMatrix();

      // coding for road middle side

     glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(0,60);
    glVertex2f(30,60);
    glVertex2f(30,67);
    glVertex2f(0,67);

    glEnd();

     glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(30,60);
    glVertex2f(60,60);
    glVertex2f(60,67);
    glVertex2f(30,67);

    glEnd();

    glPushMatrix();
    glTranslatef(60, 0, 0.0);

     glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(0,60);
    glVertex2f(30,60);
    glVertex2f(30,67);
    glVertex2f(0,67);

    glEnd();

     glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(30,60);
    glVertex2f(60,60);
    glVertex2f(60,67);
    glVertex2f(30,67);

    glEnd();

        glTranslatef(60, 0, 0.0);

     glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(0,60);
    glVertex2f(30,60);
    glVertex2f(30,67);
    glVertex2f(0,67);

    glEnd();

     glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(30,60);
    glVertex2f(60,60);
    glVertex2f(60,67);
    glVertex2f(30,67);

    glEnd();

        glTranslatef(60, 0, 0.0);

     glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(0,60);
    glVertex2f(30,60);
    glVertex2f(30,67);
    glVertex2f(0,67);

    glEnd();

     glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(30,60);
    glVertex2f(60,60);
    glVertex2f(60,67);
    glVertex2f(30,67);

    glEnd();

    glLoadIdentity();
     glPopMatrix();


  //coding for last road side

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(0,0);
    glVertex2f(30,0);
    glVertex2f(30,3);
    glVertex2f(0,3);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(30,0);
    glVertex2f(60,0);
    glVertex2f(60,3);
    glVertex2f(30,3);

    glEnd();

  glPushMatrix();
    glTranslatef(60, 0, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(0,0);
    glVertex2f(30,0);
    glVertex2f(30,3);
    glVertex2f(0,3);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(30,0);
    glVertex2f(60,0);
    glVertex2f(60,3);
    glVertex2f(30,3);

    glEnd();

     glTranslatef(60, 0, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(0,0);
    glVertex2f(30,0);
    glVertex2f(30,3);
    glVertex2f(0,3);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(30,0);
    glVertex2f(60,0);
    glVertex2f(60,3);
    glVertex2f(30,3);

    glEnd();

     glTranslatef(60, 0, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);     // Each set of 4 vertices form a quad
     glVertex2f(0,0);
    glVertex2f(30,0);
    glVertex2f(30,3);
    glVertex2f(0,3);

    glEnd();

    glBegin(GL_QUADS) ;
    glColor3ub(255,255,255);     // Each set of 4 vertices form a quad
     glVertex2f(30,0);
    glVertex2f(60,0);
    glVertex2f(60,3);
    glVertex2f(30,3);

    glEnd();

 glLoadIdentity();
     glPopMatrix();
	// code for 1st building


    glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 0);       // Each set of 4 vertices form a quad
     glVertex2f(0,175);
    glVertex2f(0,130);
    glVertex2f(15,130);
    glVertex2f(15,175);

    glEnd();

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 0);       // Each set of 4 vertices form a quad
     glVertex2f(15,130);
     glVertex2f(30,130);
    glVertex2f(30,165);
    glVertex2f(15,165);


    glEnd;

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 0);       // Each set of 4 vertices form a quad
     glVertex2f(30,130);
     glVertex2f(40,130);
    glVertex2f(40,155);
    glVertex2f(30,155);


    glEnd();



     //coding for 1st building janala

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(2,135);
     glVertex2f(10,135);
    glVertex2f(10,145);
    glVertex2f(2,145);

    glEnd();

    glPushMatrix();
    glTranslatef(0, 13, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(2,135);
     glVertex2f(10,135);
    glVertex2f(10,145);
    glVertex2f(2,145);

    glEnd();

    glTranslatef(0, 13, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(2,135);
     glVertex2f(10,135);
    glVertex2f(10,145);
    glVertex2f(2,145);

    glEnd();


    glTranslatef(14, -26, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(2,135);
     glVertex2f(10,135);
    glVertex2f(10,145);
    glVertex2f(2,145);

    glEnd();

     glTranslatef(0, 15, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(2,135);
     glVertex2f(10,135);
    glVertex2f(10,145);
    glVertex2f(2,145);

    glEnd();

   glTranslatef(12, -15, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(2,135);
     glVertex2f(10,135);
    glVertex2f(10,148);
    glVertex2f(2,148);

    glEnd();


    glLoadIdentity();
    glPopMatrix();


  //coding for 2nd building

    glBegin(GL_QUADS) ;
     glColor3ub(0, 153, 51);       // Each set of 4 vertices form a quad
     glVertex2f(45,130);
     glVertex2f(65,130);
    glVertex2f(65,170);
    glVertex2f(45,170);

    glEnd();

    //coding for 2nd building window

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

glPushMatrix();
    glTranslatef(0, 9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0, 9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0, 9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(9, 0, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0,-9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0,-9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0,-9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

glLoadIdentity();
    glPopMatrix();
    //coding for 3rd building
    glBegin(GL_QUADS) ;
     glColor3ub(255, 153, 0);       // Each set of 4 vertices form a quad
     glVertex2f(68,130);
     glVertex2f(88,130);
    glVertex2f(88,160);
    glVertex2f(68,160);

    glEnd();

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();


      glPushMatrix();
    glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(0, 9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(0, 9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(-6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glTranslatef(-6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();
    glTranslatef(0, -9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glLoadIdentity();
    glPopMatrix();

    //coding for building 4th

glBegin(GL_QUADS) ;
     glColor3ub(0, 255, 255);
     glVertex2f(90,130);
     glVertex2f(105,130);
    glVertex2f(105,180);
    glVertex2f(90,180);

    glEnd();
    //code for 4th building window
   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();

    glPushMatrix();
    glTranslatef(7, 0, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();

      glTranslatef(0, 10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();

 glTranslatef(0, 10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();
     glTranslatef(0, 10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();
     glTranslatef(0, 10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();
     glTranslatef(-7, -10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();

    glTranslatef(0, -10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();
    glTranslatef(0, -10, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();

     glTranslatef(0, 30, 0.0);

   glBegin(GL_QUADS) ;
    glColor3ub(1,1,1);
     glVertex2f(91,132);
     glVertex2f(97,132);
    glVertex2f(97,139);
    glVertex2f(91,139);

    glEnd();



   glLoadIdentity();
    glPopMatrix();

    //code for building 5th
glBegin(GL_QUADS) ;
     glColor3ub(102, 153, 153);
     glVertex2f(107,130);
     glVertex2f(121,130);
    glVertex2f(121,150);
    glVertex2f(107,150);

    glEnd();
    //for window
    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glPushMatrix();
    glTranslatef(7, 0, 0.0);

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glTranslatef(0, 9, 0.0);

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glTranslatef(-7, 0, 0.0);

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glLoadIdentity();
    glPopMatrix();

    //coding for building 9th
    glPushMatrix();
    glTranslatef(83, 0, 0.0);
    glBegin(GL_QUADS) ;
     glColor3ub(255, 204, 255);
     glVertex2f(107,130);
     glVertex2f(121,130);
    glVertex2f(121,150);
    glVertex2f(107,150);

    glEnd();
    //for window
    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glPushMatrix();
    glTranslatef(7, 0, 0.0);

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glTranslatef(0, 9, 0.0);

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glTranslatef(-7, 0, 0.0);

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);
     glVertex2f(108,131);
     glVertex2f(113,131);
    glVertex2f(113,137);
    glVertex2f(108,137);

    glEnd();

    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();
    glPopMatrix();
//coding for 6th building
glPushMatrix();
    glTranslatef(55, 0, 0.0);

  glBegin(GL_QUADS) ;
     glColor3ub(204, 102, 153);       // Each set of 4 vertices form a quad
     glVertex2f(68,130);
     glVertex2f(88,130);
    glVertex2f(88,160);
    glVertex2f(68,160);

    glEnd();

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();


      glPushMatrix();
    glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(0, 9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(0, 9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(-6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glTranslatef(-6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();
    glTranslatef(0, -9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glLoadIdentity();
    glPopMatrix();
     glLoadIdentity();
    glPopMatrix();
//coding for 8th building
glPushMatrix();
    glTranslatef(100, 0, 0.0);

  glBegin(GL_QUADS) ;
     glColor3ub(204, 0, 0);       // Each set of 4 vertices form a quad
     glVertex2f(68,130);
     glVertex2f(88,130);
    glVertex2f(88,160);
    glVertex2f(68,160);

    glEnd();

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();


      glPushMatrix();
    glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(0, 9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(0, 9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

     glTranslatef(-6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glTranslatef(-6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();
    glTranslatef(0, -9, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glTranslatef(6, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(69,132);
     glVertex2f(74,132);
    glVertex2f(74,138);
    glVertex2f(69,138);

    glEnd();

    glLoadIdentity();
    glPopMatrix();
     glLoadIdentity();
    glPopMatrix();
//coding for 7th building

glPushMatrix();
    glTranslatef(100, 0, 0.0);


    glBegin(GL_QUADS) ;
     glColor3ub(255, 153, 153);       // Each set of 4 vertices form a quad
     glVertex2f(45,130);
     glVertex2f(65,130);
    glVertex2f(65,170);
    glVertex2f(45,170);

    glEnd();

    //coding for 2nd/7th building window

    glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

glPushMatrix();
    glTranslatef(0, 9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0, 9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0, 9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(9, 0, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0,-9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0,-9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

    glTranslatef(0,-9, 0.0);

glBegin(GL_QUADS) ;
     glColor3ub(1,1,1);       // Each set of 4 vertices form a quad
     glVertex2f(47,132);
     glVertex2f(53,132);
    glVertex2f(53,139);
    glVertex2f(47,139);

    glEnd();

glLoadIdentity();
    glPopMatrix();

glLoadIdentity();
    glPopMatrix();


    //coding for speed baord

glPushMatrix();
    glTranslatef(position4,0.f, 0.0f);

  glBegin(GL_QUADS) ;
     glColor3ub(153, 153, 102);       // Each set of 4 vertices form a quad
     glVertex2f(130,110);
    glVertex2f(160,110);
    glVertex2f(160,120);
    glVertex2f(125,120);

    glEnd();

    glBegin(GL_QUADS) ;
     glColor3ub(255, 102, 0);       // Each set of 4 vertices form a quad
     glVertex2f(130,120);
    glVertex2f(157,120);
    glVertex2f(157,127);
    glVertex2f(130,127);

    glEnd();

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(133,122);
    glVertex2f(137,122);
    glVertex2f(137,126);
    glVertex2f(133,126);

    glEnd();

     glPushMatrix();
    glTranslatef(6, 0, 0.0);

  glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(133,122);
    glVertex2f(137,122);
    glVertex2f(137,126);
    glVertex2f(133,126);

    glEnd();

    glTranslatef(6, 0, 0.0);

  glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(133,122);
    glVertex2f(137,122);
    glVertex2f(137,126);
    glVertex2f(133,126);

    glEnd();

    glTranslatef(6, 0, 0.0);

  glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(133,122);
    glVertex2f(137,122);
    glVertex2f(137,126);
    glVertex2f(133,126);

    glEnd();

    glLoadIdentity();
     glPopMatrix();

         glLoadIdentity();
     glPopMatrix();

  //coding for big ship
  glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);


  glPushMatrix();
    glTranslatef(0, 20, 0.0);
   glBegin(GL_POLYGON) ;
   if(night==1)
    {
        glColor3ub(0, 0, 102);
    }
	else{
    glColor3ub(0,0,255);}

   //  glColor3ub(0, 0, 255);       // Each set of 4 vertices form a quad
     glVertex2f(0,100);
     glVertex2f(0,90);
    glVertex2f(10,83);
    glVertex2f(75,83);
    glVertex2f(100,100);


    glEnd();
 // 1st floor ship
    glBegin(GL_QUADS) ;
     glColor3ub(214, 214, 194);       // Each set of 4 vertices form a quad
     glVertex2f(10,100);
    glVertex2f(80,100);
    glVertex2f(70,110);
    glVertex2f(10,110);

    glEnd();
   // 2nd floor ship
  glBegin(GL_QUADS) ;
     glColor3ub(102, 255, 255);       // Each set of 4 vertices form a quad
     glVertex2f(15,110);
    glVertex2f(65,110);
    glVertex2f(55,120);
    glVertex2f(15,120);

    glEnd();

    // 3nd floor ship
    glBegin(GL_QUADS) ;
     glColor3ub(20, 51, 204);       // Each set of 4 vertices form a quad
     glVertex2f(20,120);
    glVertex2f(50,120);
    glVertex2f(40,130);
    glVertex2f(20,130);

    glEnd();


    glLoadIdentity();
     glPopMatrix();

     //coding for ship janala
     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(20,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(20,129);

    glEnd();

    glPushMatrix();
    glTranslatef(12, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(20,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(20,129);

    glEnd();

    glTranslatef(12, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(20,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(20,129);

    glEnd();

    glTranslatef(12, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(20,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(20,129);

    glEnd();

    glTranslatef(-10, 10, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(18,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(18,129);

    glEnd();

    glTranslatef(-13, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(18,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(18,129);

    glEnd();

glTranslatef(-13, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(18,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(18,129);

    glEnd();

    glTranslatef(12, 10, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(20,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(20,129);

    glEnd();

     glTranslatef(-10, 0, 0.0);


glBegin(GL_QUADS) ;
     glColor3ub(255, 255, 153);       // Each set of 4 vertices form a quad
     glVertex2f(20,121);
    glVertex2f(28,121);
    glVertex2f(28,129);
    glVertex2f(20,129);

    glEnd();
    glLoadIdentity();
     glPopMatrix();



     glPopMatrix();

  //   speedship=2;
//coding for tree
   glPushMatrix();
    glTranslatef(10, 15, 0.0);

   glBegin(GL_QUADS) ;
     glColor3ub(102, 68, 0);
     glVertex2f(180,70);
    glVertex2f(183,70);
    glVertex2f(183,100);
    glVertex2f(180,100);

    glEnd();

    x=176.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=185.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=181.0f; y=106.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//code for 3rd tree

	 glTranslatef(-24, -13, 0.0);

   glBegin(GL_QUADS) ;
     glColor3ub(102, 68, 0);
     glVertex2f(180,70);
    glVertex2f(183,70);
    glVertex2f(183,100);
    glVertex2f(180,100);

    glEnd();

    x=176.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=185.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=181.0f; y=106.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//code for 2nd tree
	 glTranslatef(20, -3, 0.0);

   glBegin(GL_QUADS) ;
     glColor3ub(102, 68, 0);
     glVertex2f(180,70);
    glVertex2f(183,70);
    glVertex2f(183,100);
    glVertex2f(180,100);

    glEnd();

    x=176.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=185.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=181.0f; y=106.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//thee laft 2

		 glTranslatef(-65, -10, 0.0);

   glBegin(GL_QUADS) ;
     glColor3ub(102, 68, 0);
     glVertex2f(180,80);
    glVertex2f(183,80);
    glVertex2f(183,100);
    glVertex2f(180,100);

    glEnd();

    x=176.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=185.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=181.0f; y=106.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//coding for laft tree

	glTranslatef(-63, -2, 0.0);

   glBegin(GL_QUADS) ;
     glColor3ub(102, 68, 0);
     glVertex2f(180,80);
    glVertex2f(183,80);
    glVertex2f(183,100);
    glVertex2f(180,100);

    glEnd();

    x=176.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=185.0f; y=100.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 x=181.0f; y=106.0f; radius =5.0f;
	glBegin(GL_TRIANGLE_FAN);
	if(night==1)
    {
        glColor3ub(0, 51, 18);
    }
	else{
    glColor3ub(0, 153, 51);}
	//glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glLoadIdentity();
     glPopMatrix();

// coding for bus

glPushMatrix();
    glTranslatef(position2,0.f, 0.0f);
     glBegin(GL_POLYGON) ;
     glColor3ub(255, 51, 51);       // Each set of 4 vertices form a quad
     glVertex2f(5,47);
     glVertex2f(75,47);
    glVertex2f(75,75);
    glVertex2f(10,75);
    glVertex2f(5,55);


    glEnd();
    //for bus janala

    glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

    glPushMatrix();
    glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

    glLoadIdentity();
    glPopMatrix();



    //coding for bus chaka

    x=15.0;  y=47.0f;radius =4.0f;
	triangleAmount = 30; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=15.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=56.0f; y=47.0f; radius =4.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=56.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=65.0f; y=47.0f; radius =4.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=65.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


//ciding for 2nd bus

glTranslatef(200, 0, 0.0);



     glBegin(GL_POLYGON) ;
     glColor3ub(0, 51, 51);       // Each set of 4 vertices form a quad
     glVertex2f(5,47);
     glVertex2f(75,47);
    glVertex2f(75,75);
    glVertex2f(10,75);
    glVertex2f(5,55);


    glEnd();
    //for bus janala

    glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

    glPushMatrix();
    glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

    glLoadIdentity();
    glPopMatrix();



    //coding for bus chaka

      x=15.0;  y=47.0f; radius =4.0f;
	triangleAmount = 30; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=15.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=56.0f; y=47.0f; radius =4.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=56.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=65.0f; y=47.0f; radius =4.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=65.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//code for 3rd bus

	glTranslatef(-350, -10, 0.0);



     glBegin(GL_POLYGON) ;
     glColor3ub(255, 255, 0);       // Each set of 4 vertices form a quad
     glVertex2f(5,47);
     glVertex2f(75,47);
    glVertex2f(75,75);
    glVertex2f(10,75);
    glVertex2f(5,55);


    glEnd();
    //for bus janala

    glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

    glPushMatrix();
    glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

     glTranslatef(9, 0, 0.0);

     glBegin(GL_QUADS) ;
     glColor3ub(204, 204, 255);
     glVertex2f(12,63);
    glVertex2f(20,63);
    glVertex2f(20,73);
    glVertex2f(12,73);

    glEnd();

    glLoadIdentity();
    glPopMatrix();



    //coding for bus chaka

      x=15.0;  y=47.0f; radius =4.0f;
	triangleAmount = 30; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=15.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=56.0f; y=47.0f; radius =4.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=56.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=65.0f; y=47.0f; radius =4.0f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=65.0f; y=47.0f; radius =2.7f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 204, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glLoadIdentity();
	glPopMatrix();




//glLoadIdentity();

// coding for car bolour blue

glPushMatrix();
    glTranslatef(position3,0.f, 0.0f);

     glBegin(GL_POLYGON) ;
     glColor3ub(0, 82, 204);       // Each set of 4 vertices form a quad
     glVertex2f(130,25);
     glVertex2f(155,25);
    glVertex2f(152,29);
    glVertex2f(152,35);
    glVertex2f(139,35);
    glVertex2f(139,30);
        glVertex2f(130,28);

         glEnd();
        // for car janala

        glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(145,30);
    glVertex2f(150,30);
    glVertex2f(150,34);
    glVertex2f(145,34);


    glEnd();

      glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(138,30);
    glVertex2f(144,30);
    glVertex2f(144,34);
    glVertex2f(138,33);


    glEnd();

    x=136.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=136.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	x=148.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x=148.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


 //      coding for car green
    glPushMatrix();
	glTranslatef(50,0.0f, 0.0f);



     glBegin(GL_POLYGON) ;
     glColor3ub(0, 204, 0);       // Each set of 4 vertices form a quad
     glVertex2f(130,25);
     glVertex2f(155,25);
    glVertex2f(152,29);
    glVertex2f(152,35);
    glVertex2f(139,35);
    glVertex2f(139,30);
        glVertex2f(130,28);

         glEnd();
        // for car janala

        glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(145,30);
    glVertex2f(150,30);
    glVertex2f(150,34);
    glVertex2f(145,34);


    glEnd();

      glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(138,30);
    glVertex2f(144,30);
    glVertex2f(144,34);
    glVertex2f(138,33);


    glEnd();

    x=136.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=136.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//car chaka green

	x=148.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x=148.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//coding for car red
	glTranslatef(-100.0,-20.0f, 0.0f);


     glBegin(GL_POLYGON) ;
     glColor3ub(255, 51, 0);       // Each set of 4 vertices form a quad
     glVertex2f(130,25);
     glVertex2f(155,25);
    glVertex2f(152,29);
    glVertex2f(152,35);
    glVertex2f(139,35);
    glVertex2f(139,30);
        glVertex2f(130,28);

         glEnd();
        // for car janala

        glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(145,30);
    glVertex2f(150,30);
    glVertex2f(150,34);
    glVertex2f(145,34);


    glEnd();

      glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(138,30);
    glVertex2f(144,30);
    glVertex2f(144,34);
    glVertex2f(138,33);


    glEnd();

    x=136.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=136.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//car chaka green

	x=148.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x=148.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	glPopMatrix();

	//car last sari

	 glPushMatrix();
	glTranslatef(-300,0.0f, 0.0f);

	  glBegin(GL_POLYGON) ;
     glColor3ub(0, 82, 204);       // Each set of 4 vertices form a quad
     glVertex2f(130,25);
     glVertex2f(155,25);
    glVertex2f(152,29);
    glVertex2f(152,35);
    glVertex2f(139,35);
    glVertex2f(139,30);
        glVertex2f(130,28);

         glEnd();
        // for car janala

        glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(145,30);
    glVertex2f(150,30);
    glVertex2f(150,34);
    glVertex2f(145,34);


    glEnd();

      glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(138,30);
    glVertex2f(144,30);
    glVertex2f(144,34);
    glVertex2f(138,33);


    glEnd();

    x=136.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=136.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	x=148.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x=148.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


 //      coding for car green
    glPushMatrix();
	glTranslatef(50,0.0f, 0.0f);



     glBegin(GL_POLYGON) ;
     glColor3ub(0, 153, 51);       // Each set of 4 vertices form a quad
     glVertex2f(130,25);
     glVertex2f(155,25);
    glVertex2f(152,29);
    glVertex2f(152,35);
    glVertex2f(139,35);
    glVertex2f(139,30);
        glVertex2f(130,28);

         glEnd();
        // for car janala

        glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(145,30);
    glVertex2f(150,30);
    glVertex2f(150,34);
    glVertex2f(145,34);


    glEnd();

      glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(138,30);
    glVertex2f(144,30);
    glVertex2f(144,34);
    glVertex2f(138,33);


    glEnd();

    x=136.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=136.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//car chaka green

	x=148.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x=148.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//coding for car red
	glTranslatef(-100.0,-20.0f, 0.0f);


     glBegin(GL_POLYGON) ;
     glColor3ub(255, 255, 0);       // Each set of 4 vertices form a quad
     glVertex2f(130,25);
     glVertex2f(155,25);
    glVertex2f(152,29);
    glVertex2f(152,35);
    glVertex2f(139,35);
    glVertex2f(139,30);
        glVertex2f(130,28);

         glEnd();
        // for car janala

        glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(145,30);
    glVertex2f(150,30);
    glVertex2f(150,34);
    glVertex2f(145,34);


    glEnd();

      glBegin(GL_QUADS) ;
     glColor3ub(191, 191, 191);
     glVertex2f(138,30);
    glVertex2f(144,30);
    glVertex2f(144,34);
    glVertex2f(138,33);


    glEnd();

    x=136.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		x=136.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//car chaka green

	x=148.0f; y=25.0f; radius =2.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		x=148.0f; y=25.0f; radius =1.5f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	glPopMatrix();

	glLoadIdentity();
	glPopMatrix();

	glPopMatrix();

  //  speed2=3;

// coding for rain

if(raining==1)
    {


glPushMatrix();
    glTranslatef(0.0f,positionrain,0.0f);


     glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);
    glEnd();

    glPushMatrix();
   	glTranslatef(98.f, -0.1f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);

      glEnd();

 	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
   	glTranslatef(0.f, -20.0f, 0.0f);

	 glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);
    glEnd();



    glPushMatrix();
   	glTranslatef(98.f, -0.1f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);

      glEnd();



 	glLoadIdentity();
	glPopMatrix();
	glLoadIdentity();
	glPopMatrix();
	//code 3,4 line rain
	glPushMatrix();
   	glTranslatef(0.0f, -40.0, 0.0f);
	  glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);
    glEnd();

    glPushMatrix();
   	glTranslatef(98.f, -0.1f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);

      glEnd();

 	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
   	glTranslatef(0.f, -20.0f, 0.0f);

	 glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);
    glEnd();



    glPushMatrix();
   	glTranslatef(98.f, -0.1f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);

      glEnd();







 	glLoadIdentity();
	glPopMatrix();
	glLoadIdentity();
	glPopMatrix();





	 glLoadIdentity();
    glPopMatrix();
    //hjjjjjjjj
     glPushMatrix();
   	glTranslatef(0.0f, -80.0f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);
    glEnd();

    glPushMatrix();
   	glTranslatef(98.f, -0.1f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);

      glEnd();

 	glLoadIdentity();
	glPopMatrix();

	glLoadIdentity();
	glPopMatrix();

		glTranslatef(0.0f, -110.0f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);
    glEnd();

    glPushMatrix();
   	glTranslatef(98.f, -0.1f, 0.0f);

      glBegin(GL_LINES) ;
	glColor3ub(255, 255, 255);

	 glVertex2f(10,200);
    glVertex2f(9,195);

     glVertex2f(1,200);
    glVertex2f(0,195);

     glVertex2f(5,200);
    glVertex2f(4,195);

     glVertex2f(15,200);
    glVertex2f(14,195);
    glVertex2f(20,200);
    glVertex2f(19,195);

     glVertex2f(25,200);
    glVertex2f(24,195);

     glVertex2f(30,200);
    glVertex2f(29,195);

     glVertex2f(35,200);
    glVertex2f(34,195);
    glVertex2f(40,200);
    glVertex2f(39,195);

     glVertex2f(45,200);
    glVertex2f(44,195);

     glVertex2f(50,200);
    glVertex2f(49,195);

     glVertex2f(55,200);
    glVertex2f(54,195);
    glVertex2f(60,200);
    glVertex2f(59,195);

     glVertex2f(65,200);
    glVertex2f(64,195);

     glVertex2f(70,200);
    glVertex2f(69,195);

     glVertex2f(75,200);
    glVertex2f(74,195);
    glVertex2f(80,200);
    glVertex2f(79,195);

     glVertex2f(85,200);
    glVertex2f(84,195);
     glVertex2f(90,200);
    glVertex2f(89,195);
    glVertex2f(95,200);
    glVertex2f(94,195);
     glVertex2f(100,200);
    glVertex2f(99,195);

      glEnd();

 	glLoadIdentity();
	glPopMatrix();


	//------





    //sbbshhhhh


    glLoadIdentity();
    glPopMatrix();



}

else{

    }



  //coding for wind mill
  // glPushMatrix();
  //  glTranslatef(100,100,0);
  //coding for wind mill
  // glTranslatef(80,170,0);
  //  glRotatef(a,0,0.0,.1);
   //glTranslatef(0,0,0);
  // glBegin(GL_TRIANGLES);
 //  glColor3f(1,1,1);
   //glVertex2f(100,100);
   //glVertex2f(105,95);
   //glVertex2f(130,100);
   //glEnd();

  // glBegin(GL_TRIANGLES);
   //glColor3f(1,1,1);
   //glVertex2f(100,100);
   //glVertex2f(100,105);
   //glVertex2f(80,120);
  // glEnd();
  // glBegin(GL_TRIANGLES);
//glColor3f(1,1,1);
  // glVertex2f(100,100);
  // glVertex2f(95,100);
  // glVertex2f(80,80);
  // glEnd();

  // glPopMatrix();


   // a+=0.1f;

 // glPopMatrix();


	glFlush();  // Render now


}

void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("rlxs.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

 speedship = 1.0f;
break;

case GLUT_KEY_DOWN:
  speedship = 5.0f;
  break;

case GLUT_KEY_LEFT:
    speed2 = 3.0f;
break;

case GLUT_KEY_RIGHT:
    speed2 = 5.0f;
break;
}
glutPostRedisplay();
}

void handleMouse(int key, int state, int x, int y) {

        switch(key)
{
case GLUT_RIGHT_BUTTON:

 speedcar = 10.0f;
break;

case GLUT_LEFT_BUTTON:
  speedcar = 0.0f;
  break;

}

glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':

      night =0;
   // glutDisplayFunc(day);
    //day();
    break;
case 'n':
 night =1;
    break;

case 'r':
 raining =1;
    break;

    case 'q':
 raining =0;
    break;

    case 'c':
 speedcar =3;
    break;

    case 'b':
 speed2 =0;
    break;




	}
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(720, 520);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Urban Street Scenario ");
   gluOrtho2D(0.0, 200.0, 0.0, 200.0);

   glutDisplayFunc(display);

   glutIdleFunc(Idle);

   glutTimerFunc(100, ship, 0);

   glutTimerFunc(100, bus, 0);

   glutTimerFunc(100, car, 0);

    glutTimerFunc(100, cloud, 0);

    glutTimerFunc(100, rain, 0);

    glutTimerFunc(100, sboard, 0);

    glutKeyboardFunc(handleKeypress);

    glutSpecialFunc(SpecialInput);

    glutMouseFunc(handleMouse);

   //glutFullScreen();
   sound();

   glutMainLoop();
   return 0;
}

