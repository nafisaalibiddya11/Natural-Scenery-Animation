////////switch n for summer night version
////////switch d for summer day version
////////switch y for snow night version
////////switch s for snow day version
////////switch a for rain night version
////////switch r for rain day version
//////////////////and the 3 scenes will change automatically for every switch cases.








#include <windows.h>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846
int scene = 0;

bool summerDay = true;
bool summerNight=false;
bool snowDay = false;
bool snowNight = false;
bool rainingDay = false;
bool rainingNight = false;

GLfloat snow_pos = 0.0f;
GLfloat snow_speed = 0.04f;
void snow_update(int value)
 {
   /* if(snow_pos >0.1)
    snow_pos = -0.1f;
    snow_pos += snow_speed;
    glutPostRedisplay();
    glutTimerFunc(100, snow_update, 0);
    */

    if(snow_pos <-0.1)
    snow_pos = 0.1f;
    snow_pos -= snow_speed;
    glutPostRedisplay();
    glutTimerFunc(100, snow_update, 0);
 }
/////////////////////////
GLfloat rain_pos = 0.0f;
GLfloat rain_speed = 0.04f;
void rain_update(int value)
 {  if(rain_pos <-0.04)
    rain_pos = 0.04f;
    rain_pos -= rain_speed;
    glutPostRedisplay();
    glutTimerFunc(100, rain_update, 0);
 }
 //////
GLfloat cloudrain_position = 0.0f;
GLfloat cloudrain_speed = 0.01f;
GLfloat cloudrain_position2 = 0.0f;
GLfloat cloudrain_speed2 = 0.01f;

/////////////////////////
void cloudrain_update(int value) {


    if(cloudrain_position >+1.5)
    cloudrain_position = -2.0f;

    cloudrain_position += cloudrain_speed;

	glutPostRedisplay();


	glutTimerFunc(100, cloudrain_update, 0);
}

void cloudrain_update2(int value) {

    if(cloudrain_position2 <-2.0)
        cloudrain_position2 = 1.5f;

    cloudrain_position2 -= cloudrain_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, cloudrain_update2, 0);
}///////////////////////////////////////


GLfloat train_pos = 0.0f;
GLfloat train_speed = 0.08f;

void train_update(int value) {

    if(train_pos >+2.0)
        train_pos = -1.0f;
        train_pos += train_speed;
    glutPostRedisplay();
	glutTimerFunc(100, train_update, 0);
}





GLfloat SMALL_SHIP_pos = 0.0f;
GLfloat SMALL_SHIP_speed = 0.1f;
void SMALL_SHIP_update(int value) {

    if(SMALL_SHIP_pos >2.0)
        SMALL_SHIP_pos = -1.5f;

    SMALL_SHIP_pos += SMALL_SHIP_speed;

	glutPostRedisplay();


	glutTimerFunc(100, SMALL_SHIP_update, 0);
}
        GLfloat BIG_SHIP_pos = 0.0f;
        GLfloat BIG_SHIP_speed = 0.1f;
       void BIG_SHIP_update(int value) {

    if(BIG_SHIP_pos >2.0)
        BIG_SHIP_pos = -1.5f;

    BIG_SHIP_pos += BIG_SHIP_speed;

	glutPostRedisplay();


	glutTimerFunc(100, BIG_SHIP_update, 0);
}
      GLfloat SPEED_BOAT_pos = 0.0f;
GLfloat SPEED_BOAT_speed = 0.04f;
void SPEED_BOAT_update(int value)
 {
    if(SPEED_BOAT_pos <-3.5)
    SPEED_BOAT_pos = +1.0f;
    SPEED_BOAT_pos -= SPEED_BOAT_speed;
    glutPostRedisplay();
    glutTimerFunc(100, SPEED_BOAT_update, 0);
 }

////////////////////////truck

GLfloat truck_position = 0.0f;
GLfloat truck_speed = 0.03f;

void truck_update(int value)
 {
    if(truck_position >+1.3)
    truck_position = -1.3f;
    truck_position += truck_speed;
    glutPostRedisplay();
    glutTimerFunc(100, truck_update, 0);
}
//////////////////////bus
GLfloat bus_position = 0.0f;
GLfloat bus_speed = 0.031f;
void bus_update(int value)
 {

    if(bus_position <-1.5)
    bus_position = 1.5f;
    bus_position -= bus_speed;
    glutPostRedisplay();
    glutTimerFunc(100, bus_update, 0);
}
///////////////////////////////


GLfloat redcar_position1 = 0.0f;
GLfloat redcar_position2 = 0.0f;
GLfloat redcar_speed = 0.01f;
void redcar_update1(int value) {
if(redcar_position1 < -1.5)
    redcar_position1 = 1.0f;
    redcar_position1 -= redcar_speed;
    glutPostRedisplay();
    glutTimerFunc(100, redcar_update1, 0);
}



void redcar_update2(int value)
{
if(redcar_position1 > 1.0)
     redcar_position1 = -1.0f;
    redcar_position1 += redcar_speed;
	glutPostRedisplay();
    glutTimerFunc(100, redcar_update2, 0);
}




void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
break;
case GLUT_KEY_DOWN:
break;
case GLUT_KEY_LEFT:
    {
        redcar_speed=.04;
        glutTimerFunc(100, redcar_update1, 0);
        break;
    }
case GLUT_KEY_RIGHT:
    {
        redcar_speed=0;
        //glutTimerFunc(100, redcar_update2, 0);
        break;
    }
break;
}
glutPostRedisplay();
}

////////////////////////////////////////////////////


GLfloat carposition = 0.0f;
GLfloat carspeed = 0.01f;

void carupdate(int value) {

    if(carposition > 1.9)
        carposition = -1.2f;

    carposition += carspeed;

	glutPostRedisplay();


	glutTimerFunc(100, carupdate, 0);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
            carspeed =0;
			printf("clicked at (%d, %d)\n", x, y);


	}

		if (button == GLUT_RIGHT_BUTTON)
	{

			carspeed =0.04f;
			carspeed+=0.01;
			printf("clicked at (%d, %d)\n", x, y);

	}



	glutPostRedisplay();
}
/////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;
GLfloat SMALL_SHIP_pos_fs = 0.0f;
GLfloat SMALL_SHIP_speed_fs = 0.01f;
void SMALL_SHIP_update_fs(int value)
{

    if(SMALL_SHIP_pos_fs >2.0)
        SMALL_SHIP_pos_fs = -1.5f;

    SMALL_SHIP_pos_fs += SMALL_SHIP_speed_fs;

	glutPostRedisplay();


	glutTimerFunc(100, SMALL_SHIP_update_fs, 0);
}

GLfloat palboat_pos_fs = 0.0f;
GLfloat palboat_speed_fs = 0.01f;
void palboat_update_fs(int value)
{

    if(palboat_pos_fs >2.0)
        palboat_pos_fs = -1.5f;

    palboat_pos_fs += palboat_speed_fs;

	glutPostRedisplay();


	glutTimerFunc(100, palboat_update_fs, 0);
}
///////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
GLfloat sea_pos = 0.0f;
     GLfloat sea_speed = 0.015f;
     void sea_update(int value)
     {
     if(sea_pos <-0.25)
     sea_pos = +0.0f;
     sea_pos -= sea_speed;
     glutPostRedisplay();
     glutTimerFunc(100, sea_update, 0);
}
////////////////////////////
       GLfloat right_boat_pos = 0.0f;
       GLfloat right_boat_speed = 0.021f;
       void right_boat_update(int value)
       {
        if(right_boat_pos <-1.9)
        right_boat_pos = 1.8f;
        right_boat_pos -= right_boat_speed;
        glutPostRedisplay();
        glutTimerFunc(100, right_boat_update, 0);
       }
        //////////////////////////////
        GLfloat bird_pos = 0.0f;
       GLfloat bird_speed = 0.031f;
       void bird_update(int value)
       {
        if(bird_pos <-1.5)
        bird_pos = 1.7f;
        bird_pos -= bird_speed;
        glutPostRedisplay();
        glutTimerFunc(100, bird_update, 0);
}
/////////////////////////////////////////////
        GLfloat left_boat_pos = 0.0f;
       GLfloat left_boat_speed = 0.019f;
       void left_boat_update(int value)
       {
        if(left_boat_pos >+2.0)
       left_boat_pos = -1.6f;
        left_boat_pos += left_boat_speed;
        glutPostRedisplay();
        glutTimerFunc(100, left_boat_update, 0);
       }


/////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
void scenarioChange(int value)
 {
    if(scene==0)
    {
        scene=1;
        glutTimerFunc(5000,scenarioChange,0);

    }
    else if(scene==1)
        {
        scene=2;
        glutTimerFunc(5000,scenarioChange,0);

        }
    else if(scene==2)
    {
        scene=0;
        glutTimerFunc(5000,scenarioChange,0);

    }
}
//////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;

///////////////////////;;;;;;;;;;;;;;;;;;;;;
 void init()
{
   glClearColor(0.0f, 0.8f, 0.9f, 1.0f);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if(summerDay)
        {

if(scene==0)
    {
      glLoadIdentity();

      glBegin(GL_QUADS);  ////////bottom road
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-1.0f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(-1.0f,-0.7f);
	    glVertex2f(-1.0f,-1.0f);
	    glEnd();
	}

	////////upper road
	glBegin(GL_QUADS);
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.65f);
	    glEnd();
	}
	////////road middle border
	glBegin(GL_QUADS);
	{
	    glColor3f(1.39f, .69f, .19f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.7f);
	    glEnd();
	}
	//////////////////////roads white strips
	glLoadIdentity();
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.86f);
        glVertex2f(-0.65f,-0.85f);
	    glVertex2f(-0.95f,-0.85f);
	    glVertex2f(-0.95f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.86f);
        glVertex2f(-0.15f,-0.85f);
	    glVertex2f(-0.45f,-0.85f);
	    glVertex2f(-0.45f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.86f);
        glVertex2f(0.35f,-0.85f);
	    glVertex2f(0.05f,-0.85f);
	    glVertex2f(0.05f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.86f);
        glVertex2f(0.85f,-0.85f);
	    glVertex2f(0.55f,-0.85f);
	    glVertex2f(0.55f,-0.86f);
	    glEnd();
	}
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.51f);
        glVertex2f(-0.65f,-0.50f);
	    glVertex2f(-0.95f,-0.50f);
	    glVertex2f(-0.95f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.51f);
        glVertex2f(-0.15f,-0.50f);
	    glVertex2f(-0.45f,-0.50f);
	    glVertex2f(-0.45f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.51f);
        glVertex2f(0.35f,-0.50f);
	    glVertex2f(0.05f,-0.50f);
	    glVertex2f(0.05f,-0.51f);
	    glEnd();
	}
       glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.51f);
        glVertex2f(0.85f,-0.50f);
	    glVertex2f(0.55f,-0.50f);
	    glVertex2f(0.55f,-0.51f);
	    glEnd();
	}
/////////////done road
////////////////////////////////////////car start
glLoadIdentity();
glPushMatrix();
glTranslatef(carposition, 0.0f,0.0f);

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.71f, -0.45f);
	glVertex2f(-0.71f, -0.38f);
	glVertex2f(-0.67f, -0.38f);
	glVertex2f(-0.64f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.45f, -0.45f);
	glVertex2f(-0.61f, -0.36f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.36f);
    glVertex2f(-0.58f, -0.45f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex2f(-0.85f, -0.48f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.71f, -0.41f);
	glVertex2f(-0.7f, -0.43f);
	glVertex2f(-0.55f, -0.43f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.41f, -0.41f);
	glVertex2f(-0.41f, -0.48f);
	glEnd();


  int i_car;
  GLfloat x_car=-0.55f; GLfloat y_car=-0.48f; GLfloat radius_car =.035f;
  int triangleAmount_car = 20;
  GLfloat twicePi_car = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car, y_car);
		for(i_car = 0; i_car <= triangleAmount_car;i_car++)
            {
			glVertex2f
			(
                x_car + (radius_car * cos(i_car * twicePi_car / triangleAmount_car)),
			    y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
			);
		    }
	    glEnd();


	    int i_car_2;
  GLfloat x_car_2=-0.7f; GLfloat y_car_2=-0.48f; GLfloat radius_car_2 =.035f;
  int triangleAmount_car_2 = 20;
  GLfloat twicePi_car_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car_2, y_car_2);
		for(i_car_2 = 0; i_car_2 <= triangleAmount_car_2;i_car_2++)
            {
			glVertex2f
			(
                x_car_2 + (radius_car_2 * cos(i_car_2 * twicePi_car_2 / triangleAmount_car_2)),
			    y_car_2 + (radius_car_2 * sin(i_car_2 * twicePi_car_2 / triangleAmount_car_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
////////////////////////////////////////car end
/////////////////truck start
glLoadIdentity();
    glPushMatrix();
    glTranslatef(truck_position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(0.43f, -0.44f);
	glVertex2f(0.5f, -0.44f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.58f, -0.5f);
	glVertex2f(0.58f, -0.6f);
	glVertex2f(0.43f, -0.6f);

	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 0.4f);
    glVertex2f(0.43f, -0.6f);
	glVertex2f(0.43f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.52f, -0.5f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.49f, -0.45f);
    glEnd();


 int i_truck;
  GLfloat x_truck=0.5f; GLfloat y_truck=-0.6f; GLfloat radius_truck =.04f;
  int triangleAmount_truck = 20;
  GLfloat twicePi_truck = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck, y_truck);
		for(i_truck = 0; i_truck <= triangleAmount_truck;i_truck++)
            {
			glVertex2f
			(
                x_truck + (radius_truck * cos(i_truck * twicePi_truck / triangleAmount_truck)),
			    y_truck + (radius_truck * sin(i_truck * twicePi_truck / triangleAmount_truck))
			);
		    }
	    glEnd();



    int i_truck_2;
  GLfloat x_truck_2=0.25f; GLfloat y_truck_2=-0.6f; GLfloat radius_truck_2 =.04f;
  int triangleAmount_truck_2 = 20;
  GLfloat twicePi_truck_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck_2, y_truck_2);
		for(i_truck_2 = 0; i_truck_2 <= triangleAmount_truck_2;i_truck_2++)
            {
			glVertex2f
			(
                x_truck_2 + (radius_truck_2 * cos(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2)),
			    y_truck_2 + (radius_truck_2 * sin(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2))
			);
		    }
	    glEnd();

	    glPopMatrix();
///////////////////truck finis

////////////////////////////////////////redcar start
glLoadIdentity();
glPushMatrix();
glTranslatef(redcar_position1,redcar_position2, 0.0f);


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.835f);
	glVertex2f(0.1f, -0.755f);
	glVertex2f(0.22f, -0.755f);
	glVertex2f(0.23f, -0.7f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.45f, -0.755f);
	glVertex2f(0.52f, -0.755f);
	glVertex2f(0.52f, -0.835f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(0.2f, -0.755f);
	glVertex2f(0.26f, -0.71f);
	glVertex2f(0.38f, -0.71f);
	glVertex2f(0.41f, -0.755f);
    glEnd();


    int i_redcar_2;
  GLfloat x_redcar_2=0.22f; GLfloat y_redcar_2=-0.84f; GLfloat radius_redcar_2 =.035f;
  int triangleAmount_redcar_2 = 20;
  GLfloat twicePi_redcar_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar_2, y_redcar_2);
		for(i_redcar_2 = 0; i_redcar_2 <= triangleAmount_redcar_2;i_redcar_2++)
            {
			glVertex2f
			(
                x_redcar_2 + (radius_redcar_2 * cos(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2)),
			    y_redcar_2 + (radius_redcar_2 * sin(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2))
			);
		    }
	    glEnd();

  int i_redcar;
  GLfloat x_redcar=0.45f; GLfloat y_redcar=-0.84f; GLfloat radius_redcar =.035f;
  int triangleAmount_redcar = 20;
  GLfloat twicePi_redcar = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar, y_redcar);
		for(i_redcar = 0; i_redcar <= triangleAmount_redcar;i_redcar++)
            {
			glVertex2f
			(
                x_redcar + (radius_redcar * cos(i_redcar * twicePi_redcar / triangleAmount_redcar)),
			    y_redcar + (radius_redcar * sin(i_redcar * twicePi_redcar / triangleAmount_redcar))
			);
		    }
	    glEnd();
glPopMatrix();

////////////////////////////////////////redcar end

/////////////////bus start
glLoadIdentity();
glPushMatrix();
glTranslatef(bus_position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68f, -0.92f);
	glVertex2f(-0.68f, -0.71f);
	glVertex2f(-0.3f, -0.71f);
	glVertex2f(-0.3f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.85f, 1.0f);
	glVertex2f(-0.59f, -0.87f);
	glVertex2f(-0.55f, -0.83f);
	glVertex2f(-0.31f, -0.83f);
	glVertex2f(-0.31f, -0.77f);
	glVertex2f(-0.59f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.9f);
	glVertex2f(-0.64f, -0.74f);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.9f);
    glEnd();

    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.77);
	glVertex2f(-0.55f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.77);
	glVertex2f(-0.5f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.45f, -0.77);
	glVertex2f(-0.45f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.77);
	glVertex2f(-0.4f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.77);
	glVertex2f(-0.35f, -0.84f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.79);
	glVertex2f(-0.61f, -0.83f);
    glEnd();
    }

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.68f, -0.9f);
	glVertex2f(-0.68f, -0.74f);
	glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.89f);
    glEnd();

    {/////////////////////////////bus stand

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.75f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.69f, -0.76f);
    glEnd();
    }

    glBegin(GL_TRIANGLES);
    {
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.69f, -0.8f);
    glEnd();
    }



 int i_bus;
  GLfloat x_bus=-0.35f; GLfloat y_bus=-0.91f; GLfloat radius_bus =.035f;
  int triangleAmount_bus = 20;
  GLfloat twicePi_bus = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus, y_bus);
		for(i_bus = 0; i_bus <= triangleAmount_bus;i_bus++)
            {
			glVertex2f
			(
                x_bus + (radius_bus * cos(i_bus * twicePi_bus / triangleAmount_bus)),
			    y_bus + (radius_bus * sin(i_bus * twicePi_bus / triangleAmount_bus))
			);
		    }
	    glEnd();



    int i_bus_2;
  GLfloat x_bus_2=-0.55f; GLfloat y_bus_2=-0.91f; GLfloat radius_bus_2 =.035f;
  int triangleAmount_bus_2 = 20;
  GLfloat twicePi_bus_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus_2, y_bus_2);
		for(i_bus_2 = 0; i_bus_2 <= triangleAmount_bus_2;i_bus_2++)
            {
			glVertex2f
			(
                x_bus_2 + (radius_bus_2 * cos(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2)),
			    y_bus_2 + (radius_bus_2 * sin(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
///////////////////bus finis


//////////////////

////////sea
         glLoadIdentity();
         glBegin(GL_QUADS);
	    glColor3f(0.0f,0.4f,1.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,0.35f);
	    glVertex2f(-1.0f,0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();

	    glBegin(GL_QUADS);     // GROUND
	    glColor3f(0.6f, 0.6f, 0.0f);
	    glVertex2f(1.0,0.35f);
        glVertex2f(1.0f,0.5f);
	    glVertex2f(-1.0f,0.5f);
	    glVertex2f(-1.0f,0.35f);
	    glEnd();
	     ///////////////////////////////////// RAIL LINE

       glLineWidth(1.4);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.37f);
	   glVertex2f(1.0f, 0.37f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.4f);
	   glVertex2f(1.0f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.95f, 0.37f);
	   glVertex2f(-0.95f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.85f, 0.37f);
	   glVertex2f(-0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.8f, 0.37f);
	   glVertex2f(-0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.75f, 0.37f);
	   glVertex2f(-0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.7f, 0.37f);
	   glVertex2f(-0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.65f, 0.37f);
	   glVertex2f(-0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.6f, 0.37f);
	   glVertex2f(-0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.55f, 0.37f);
	   glVertex2f(-0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.37f);
	   glVertex2f(-0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.45f, 0.37f);
	   glVertex2f(-0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.4f, 0.37f);
	   glVertex2f(-0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.35f, 0.37f);
	   glVertex2f(-0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.3f, 0.37f);
	   glVertex2f(-0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.25f, 0.37f);
	   glVertex2f(-0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.2f, 0.37f);
	   glVertex2f(-0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.15f, 0.37f);
	   glVertex2f(-0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.37f);
	   glVertex2f(-0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.05f, 0.37f);
	   glVertex2f(-0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.0f, 0.37f);
	   glVertex2f(0.0f, 0.4f);
       glEnd();
        glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.05f, 0.37f);
	   glVertex2f(0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.37f);
	   glVertex2f(0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.15f, 0.37f);
	   glVertex2f(0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.37f);
	   glVertex2f(0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.25f, 0.37f);
	   glVertex2f(0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.3f, 0.37f);
	   glVertex2f(0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.35f, 0.37f);
	   glVertex2f(0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.37f);
	   glVertex2f(0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.45f, 0.37f);
	   glVertex2f(0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.37f);
	   glVertex2f(0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.55f, 0.37f);
	   glVertex2f(0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.37f);
	   glVertex2f(0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.65f, 0.37f);
	   glVertex2f(0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.7f, 0.37f);
	   glVertex2f(0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.37f);
	   glVertex2f(0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.8f, 0.37f);
	   glVertex2f(0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.85f, 0.37f);
	   glVertex2f(0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.9f, 0.37f);
	   glVertex2f(0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.95f, 0.37f);
	   glVertex2f(0.95f, 0.4f);
       glEnd();
       ///////////// TRAIN STARTS
	   glPushMatrix();
       glTranslatef(train_pos,0.0f, 0.0f);
	   glBegin(GL_POLYGON);            //
	   glColor3f(0.7f, 0.7f, 0.7f); // TRAIN
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.43f);
	   glVertex2f(-0.1f, 0.43f);
	   glVertex2f(0.0f, 0.38f);
	   glVertex2f(0.0f, 0.37f);
       glEnd();

       glLineWidth(2.5);
	glBegin(GL_LINES);              // TRAIN MIDDLE BORDER
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(-0.5f, 0.43f);
    glEnd();

        glBegin(GL_QUADS);              // TRAIN FRONT BLACK WINDOW
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.43f);
	glVertex2f(-0.2f, 0.43f);
	glVertex2f(-0.2f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
    glEnd();

    glBegin(GL_POLYGON);              // TRAIN BELOW BORDER
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.9f, 0.37f);
	glVertex2f(-0.9f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
	glVertex2f(0.0f, 0.38f);
	glVertex2f(0.0f, 0.37f);
    glEnd();

    glPointSize(4.0);
	glBegin(GL_POINTS);              // TRAIN WHEEL
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.37f);
	glVertex2f(-0.45f, 0.37f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.15f, 0.37f);
	glVertex2f(-0.8f, 0.37f);
	glVertex2f(-0.75f, 0.37f);
	glVertex2f(-0.6f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
    glEnd();
////////////////////// TRAIN WHEEL DONE
///////////////////// TRAIN WINDOW
    glLineWidth(2.0);
	glBegin(GL_LINES);              //
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.85f, 0.41f);
	glVertex2f(-0.55f, 0.41f);
	glVertex2f(-0.45f, 0.41f);
	glVertex2f(-0.25f, 0.41f);
    glEnd();
    glPopMatrix();
    ////////////////// TRAIN WINDOW DONE

	   ///////////
	   glBegin(GL_POLYGON);         //RIGHT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.45f, 0.45f);
       glVertex2f(-0.4f, 0.5f);
       glVertex2f(-0.4f, 0.55f);
       glVertex2f(-0.25f, 0.6f);
       glVertex2f(-0.35f, 0.65f);
	   glVertex2f(-0.2f, 0.8f);
	   glVertex2f(0.0f, 0.6f);
       glVertex2f(0.25f,  0.45f);
       glEnd();

	   glBegin(GL_POLYGON);       //LEFT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.95f, 0.45f);
	   glVertex2f(-0.7f, 0.6f);
       glVertex2f(-0.8f, 0.75f);
       glVertex2f(-0.6f, 0.88f);
       glVertex2f(-0.5f, 0.65f);
       glVertex2f(-0.4f, 0.58f);
	   glVertex2f(-.3f,  0.45f);
       glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING
	   glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(0.43f, 0.45f);
	   glVertex2f(0.43f, 0.8f);
	   glVertex2f(0.63f, 0.8f);
	   glVertex2f(0.63f, 0.45f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING DOOR
	   glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(0.5f, 0.45f);
	   glVertex2f(0.5f, 0.55f);
	   glVertex2f(0.55f, 0.55f);
	   glVertex2f(0.55f, 0.45f);
	   glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f, 0.75f);
	   glVertex2f(0.5f, 0.75f);
	   glVertex2f(0.5f, 0.7f);
	   glVertex2f(0.45f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f, 0.75f);
	   glVertex2f(0.6f, 0.75f);
	   glVertex2f(0.6f, 0.7f);
	   glVertex2f(0.55f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f,0.65f);
	   glVertex2f(0.5f,0.65f);
	   glVertex2f(0.5f,0.6f);
	   glVertex2f(0.45f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f,0.65f);
	   glVertex2f(0.6f,0.65f);
	   glVertex2f(0.6f,0.6f);
	   glVertex2f(0.55f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // MIDDLE BUILDING
	   glColor3f(0.0f, 0.4f, 0.4f);
       glVertex2f(0.64f, 0.45f);
	   glVertex2f(0.64f, 0.85f);
	   glVertex2f(0.85f, 0.85f);
	   glVertex2f(0.85f, 0.45f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.5f);
	  glVertex2f(0.85f, 0.5f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.55f);
	  glVertex2f(0.85f, 0.55f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.6f);
	  glVertex2f(0.85f, 0.6f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.65f);
	  glVertex2f(0.85f, 0.65f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.7f);
	  glVertex2f(0.85f, 0.7f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.75f);
	  glVertex2f(0.85f, 0.75f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.8f);
	  glVertex2f(0.85f, 0.8f);
      glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.83f, 0.65f);
       glVertex2f(0.83f, 0.68f);
       glVertex2f(0.98f, 0.68f);
       glVertex2f(0.98f, 0.65f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.85f, 0.68f);
       glVertex2f(0.85f, 0.71f);
       glVertex2f(0.96f, 0.71f);
       glVertex2f(0.96f, 0.68f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.87f, 0.71f);
       glVertex2f(0.87f, 0.74f);
       glVertex2f(0.94f, 0.74f);
       glVertex2f(0.94f, 0.71f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.85f, 0.43f);
       glVertex2f(0.85f, 0.65f);
       glVertex2f(0.96f, 0.65f);
       glVertex2f(0.96f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING DOOR
	   glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.89f, 0.43f);
       glVertex2f(0.89f, 0.49f);
       glVertex2f(0.92f, 0.49f);
       glVertex2f(0.92f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.6f);
       glVertex2f(0.9f, 0.6f);
       glVertex2f(0.9f, 0.58f);
       glVertex2f(0.88f, 0.58f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.55f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.9f, 0.53f);
       glVertex2f(0.88f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.55f);
       glVertex2f(0.93f, 0.55f);
       glVertex2f(0.93f, 0.53f);
       glVertex2f(0.91f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.6f);
       glVertex2f(0.93f, 0.6f);
       glVertex2f(0.93f, 0.58f);
       glVertex2f(0.91f, 0.58f);
	   glEnd();
          glTranslatef(+0.0f, 0.07f, 0.0f);
	   glBegin(GL_TRIANGLES);  // 1st TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
       /////////////////////  2nd
       glScalef(0.9,0.9,0);
       glTranslatef(0.13f, 0.05f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
//////////////////////////// 3rd
             glLoadIdentity();
       glScalef(1.1,1.2,0);
       glTranslatef(+0.16f, 0.0f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////
             glLoadIdentity();
      // glScalef(0,0,0);
       glTranslatef(+0.11f, 0.06f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////////////
       glLoadIdentity();
          glScalef(0.8,0.7,0);
        glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();

          glLoadIdentity();
          glPushMatrix();
         glTranslatef(BIG_SHIP_pos,0.0f, 0.0f);
         glBegin(GL_POLYGON);            // RIGHT BELOW SHIP LOWER BODY
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.45f, -0.15f);
	glVertex2f(0.9f, -0.15f);
	glVertex2f(0.8f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);  //RIGHT BELOW SHIP LOWER RED BODY
	{
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(0.3,-0.25f);
        glVertex2f(0.25f,-0.2f);
	    glVertex2f(0.85f,-0.2f);
	    glVertex2f(0.8f,-0.25f);
	    glEnd();
	}
	      glLineWidth(0.8);
	   glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.1f);
	  glVertex2f(0.25f, -0.05f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.05f);
	  glVertex2f(0.4f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.4f, -0.05f);
	  glVertex2f(0.4f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.3f, -0.1f);
	  glVertex2f(0.3f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.35f, -0.1f);
	  glVertex2f(0.35f, -0.05f);
      glEnd();

      glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER BLUE BODY

	    glColor3f(0.0f,0.0f,0.5f);
	    glVertex2f(0.5,-0.15f);
        glVertex2f(0.5f,-0.09f);
	    glVertex2f(0.6f,-0.09f);
	    glVertex2f(0.6f,-0.15f);
	    glEnd();

	    glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER RED BODY

	    glColor3f(.8f,0.0f,0.0f);
	    glVertex2f(0.68,-0.15f);
        glVertex2f(0.68f,-0.1f);
	    glVertex2f(0.85f,-0.1f);
	    glVertex2f(0.85f,-0.15f);
	    glEnd();

	    glLineWidth(1.4);
	   glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.52f, -0.15f);
	  glVertex2f(0.52f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.55f, -0.15f);
	  glVertex2f(0.55f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.58f, -0.15f);
	  glVertex2f(0.58f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.71f, -0.15f);
	  glVertex2f(0.71f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.74f, -0.15f);
	  glVertex2f(0.74f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.78f, -0.15f);
	  glVertex2f(0.78f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.62f, -0.15f);
	  glVertex2f(0.62f, -0.1f);
      glEnd();
      glPopMatrix();

        //////////////////////////speed boat start
           glLoadIdentity();
          glScalef(0.5,0.5,0);
          glTranslatef(+0.8f, 0.3f, 0.0f);

        glPushMatrix();
       glTranslatef(SPEED_BOAT_pos,0.0f, 0.0f);
      glBegin(GL_POLYGON);            //  RIGHT SIDE SPEEDBOAT WHITE PART
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.0f);

	glEnd();

	 glBegin(GL_QUADS);          // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.02f, 0.12f);
	glVertex2f(0.4f, 0.12f);
	glVertex2f(0.4f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);   // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.12f);
    glVertex2f(0.48f, 0.04f);
	glVertex2f(0.5f, 0.05f);
     glEnd();

     glBegin(GL_QUADS);   //  SIDE SPEEDBOAT BLACK PART
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.5f, 0.05f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.0f);
	 glVertex2f(0.5f, 0.0f);
     glEnd();

      glBegin(GL_QUADS);   //RIGHT  SIDE SPEEDBOAT GLASS
      glColor3f(0.0f, 0.9f, 1.0f);
     glVertex2f(0.1f, 0.15f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.3f, 0.25f);
	 glVertex2f(0.25f, 0.15f);
     glEnd();

              glLineWidth(2.5);
	  glBegin(GL_LINES);     // RIGHT SIDE SPEEDBOAT RED PART
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glVertex2f(0.3f, 0.15f);
	  glVertex2f(0.32f, 0.18f);
      glEnd();
      glPopMatrix();
      /////////////finis speed boat
////////sea border
         glLoadIdentity();   ////////SEA BORDER
      glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();
	}
	glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.22f);
        glVertex2f(1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.22f);
	    glEnd();
	}
       glLoadIdentity();
      glLineWidth(2.5);
	  glBegin(GL_LINES);     //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.95f, -0.18f);
	  glVertex2f(-0.95f, -0.3f);
      glEnd();

     glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.89f, -0.18f);
	  glVertex2f(-0.89f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
       glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.83f, -0.18f);
	  glVertex2f(-0.83f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.76f, -0.18f);
	  glVertex2f(-0.76f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.69f, -0.18f);
	  glVertex2f(-0.69f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.62f, -0.18f);
	  glVertex2f(-0.62f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.55f, -0.18f);
	  glVertex2f(-0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.48f, -0.18f);
	  glVertex2f(-0.48f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.41f, -0.18f);
	  glVertex2f(-0.41f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.34f, -0.18f);
	  glVertex2f(-0.34f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.27f, -0.18f);
	  glVertex2f(-0.27f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.20f, -0.18f);
	  glVertex2f(-0.20f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.13f, -0.18f);
	  glVertex2f(-0.13f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.05f, -0.18f);
	  glVertex2f(-0.05f, -0.3f);
      glEnd();

      glBegin(GL_LINES);             //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.02f, -0.18f);
	  glVertex2f(0.02f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.1f, -0.18f);
	  glVertex2f(0.1f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.17f, -0.18f);
	  glVertex2f(0.17f, -0.3f);
      glEnd();

       glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.25f, -0.18f);
	  glVertex2f(0.25f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.32f, -0.18f);
	  glVertex2f(0.32f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.40f, -0.18f);
	  glVertex2f(0.40f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.47f, -0.18f);
	  glVertex2f(0.47f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.55f, -0.18f);
	  glVertex2f(0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.62f, -0.18f);
	  glVertex2f(0.62f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.70f, -0.18f);
	  glVertex2f(0.70f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.77f, -0.18f);
	  glVertex2f(0.77f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.85f, -0.18f);
	  glVertex2f(0.85f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.92f, -0.18f);
	  glVertex2f(0.92f, -0.3f);
      glEnd();

    }
////////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==1)
    {

 glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.4f); //green



    glVertex2f(1.0f, 0.4f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.4f);
	glEnd();

}
glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.2f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}
{///////far far land
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();
}



//Ship far away palboat
    {
        glLoadIdentity();
        glTranslatef(+0.0f, 0.25f, 0.0f);
        glTranslatef(palboat_pos_fs,0,0);

        glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glEnd();

        glColor3f(0.7,0.5,0.3);
        glBegin(GL_QUADS);
        glVertex2f(-0.005,0);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.005,0.5);
        glVertex2f(0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(0.01,0.25);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.04,0.3);
        glVertex2f(0.05,0.1);
        glVertex2f(-0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0.0,-0.05);
        glVertex2f(-0.2,-0.05);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glVertex2f(0.0,-0.05);
        glEnd();

        glLoadIdentity();
    }

    glBegin(GL_POLYGON); //far mountain
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.54f, -0.11f);
	glVertex2f(0.44f, -0.12f);
	glVertex2f(0.4f, -0.14f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.31f, -0.08f);
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.36f, 0.06f);
	glVertex2f(0.44f, 0.06f);
	glVertex2f(0.51f, 0.2f);
	glVertex2f(0.56f, 0.2f);
	glVertex2f(0.66f, 0.29f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}
   glBegin(GL_POLYGON); //far mountain house part
{
	glColor3f(1.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}
///////////////////////////////////ship
       glLoadIdentity();
         // glScalef(0.8,0.7,0);
       // glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos_fs,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();
//////////////////////////ship finish


    glBegin(GL_POLYGON); //front mountain
{
	glColor3f(0.0f, 0.8f, 0.0f); //green
	glVertex2f(0.12f, -1.0f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.65f, 0.12f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.8f, 0.08f);
	glVertex2f(-0.9f, 0.14f);
	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}
///////////////far mountain on far far mountain extra part

    glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}






   glBegin(GL_POLYGON); //far mountain house part
{
	glColor3f(1.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}




//////////////////////////////////////house start
glBegin(GL_QUADS);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.44f);
    glVertex2f(-0.79f, -0.44f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.54f, -0.84f);
    glEnd();
}
glBegin(GL_POLYGON);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.84f);
	glVertex2f(-0.54f, -0.44f);
	glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.31f, -0.84f);


    glEnd();
}
glBegin(GL_QUADS);//// near house red part
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.58f, -0.55f);
    glVertex2f(-0.82f, -0.44f);
    glVertex2f(-0.68f, -0.06f);
    glEnd();
}
glBegin(GL_TRIANGLES);//// near house 1
{
	glColor3f(1.0f, 0.2f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.49f, -0.33f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}


glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.33f);
	glVertex2f(-0.58f, -0.55f);
	glVertex2f(-0.57f, -0.59f);
    glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
 glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.28f, -0.6f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
{//////////////////////////////bari black
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -1.0f);
	glVertex2f(-0.54f, -0.5f);
    glEnd();
}

////////////////////////////////house finis 1
///////////////tree start
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);
    glVertex2f(0.07f, -1.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.16f, -0.2f);
    glVertex2f(0.13f, -1.0f);


    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.072f, 0.22f);
    glVertex2f(0.13f, -0.2f);

    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(0.162f, 0.22f);
    glVertex2f(0.16f, -0.2f);

    glEnd();
}
glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(0.04f, 0.1f);
    glVertex2f(-0.05f, 0.06f);
    glVertex2f(-0.14f, 0.24f);

    glVertex2f(-0.07f, 0.47f);
    glVertex2f(-0.04f, 0.72f);
    glVertex2f(0.06f, 0.8f);
    glVertex2f(0.19f, 0.74f);

    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.36f, 0.1f);
    glVertex2f(0.2f, 0.2f);

    glVertex2f(0.18f, 0.02f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.15f, 0.01f);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.1f, 0.07f);
    glEnd();
}
////////////////////////////
glBegin(GL_POLYGON); //////jhao
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.04f, -1.0f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.78f);
    glVertex2f(-0.28f, -0.62f);

    glVertex2f(-0.35f, -0.86f);
    glVertex2f(-0.41f, -0.8f);
    glVertex2f(-0.48f, -0.88f);
    glVertex2f(-0.56f, -0.7f);


    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}

glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);


     glVertex2f(-0.64f, -0.78f);
    glVertex2f(-0.67f, -0.58f);
    glVertex2f(-0.77f, -0.65f);
    glVertex2f(-0.8f, -0.5f);

    glVertex2f(-0.88f, -0.44f);
    glVertex2f(-0.92f, -0.24f);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.8f, -1.0f);

    glEnd();
}

/////////////////jhao end

glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.48f);
    glVertex2f(-0.38f, -0.4f);
    glVertex2f(-0.44f, -0.4f);
    glVertex2f(-0.44f, -0.48f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.45f, -0.5f);
    glVertex2f(-0.51f, -0.5f);
    glVertex2f(-0.51f, -0.6f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.6f);
    glVertex2f(-0.34f, -0.5f);
    glVertex2f(-0.38f, -0.5f);
    glVertex2f(-0.38f, -0.6f);
    glEnd();
}
/////////////finis windows
}
/////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==2)
    {


       glBegin(GL_QUADS);///////////
{
	glColor3f(0.4f, 0.8f, 1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

    ////////////////////////////////////// SUN
       glLoadIdentity();
	    int sun;
        GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.6f;
	    int triangleAmount = 200000;
        GLfloat twicePi = 2.0f * PI;
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.5f, 0.0f);
		glVertex2f(x, y);
		for(sun = 0;sun <= triangleAmount;sun++) {
			glVertex2f(
		            x + (radius * cos(sun *  twicePi / triangleAmount)),
			    y + (radius * sin(sun * twicePi / triangleAmount))
			);
		}
	    glEnd();
    //////////////////////////////////////// BIRDS
      glLoadIdentity();
      glPushMatrix();
      glTranslatef(bird_pos,0.0f, 0.0f);
      glLineWidth(2.5);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.45f, 0.75f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.35f, 0.75f);
       glEnd();
/////////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.05f, 0.85f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.65f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.55f, 0.85f);
       glEnd();
///////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.05f, 0.85f);
       glEnd();
       ///////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.15f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.05f, 0.6f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.55f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.45f, 0.85f);
       glEnd();
       ////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.25f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.15f, 0.6f);
       glEnd();  // BIRD FINISHED
       glPopMatrix();


    ////////////////////////////////////////
       glLoadIdentity();
	        glBegin(GL_QUADS);
	     glColor3f(0.8f, 0.8f, 0.0f);    //SEA SHORE
         glVertex2f(-1.0f, -1.0f);
	    glVertex2f(-1.0f, -0.4f);
	    glVertex2f(1.0f, -0.4f);
	    glVertex2f(1.0f, -1.0f);
        glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    //SEA
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

         glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,sea_pos, 0.0f);
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    // UPPER SEA
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
    glEnd();
    glPopMatrix();
   ////////////////////////////////
          glLoadIdentity();
          glPushMatrix();
          glTranslatef(right_boat_pos,0.0f, 0.0f);
       glBegin(GL_QUADS);              // RIGHT BOAT
	   glColor3f(0.7f, 0.7f, 0.0f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
	   glPopMatrix();
//////////////////////////////////////  2ND BOAT
       glPushMatrix();
       glTranslatef(left_boat_pos,0.0f, 0.0f);
       glTranslatef(-1.4f, -0.2f, 0.0f);
       glBegin(GL_QUADS);              // LEFT BOAT
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
       glPopMatrix();
    }





        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(summerNight)
        {


if(scene==0)
    {
         glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
     glLoadIdentity();
      glBegin(GL_QUADS);  ////////bottom road
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-1.0f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(-1.0f,-0.7f);
	    glVertex2f(-1.0f,-1.0f);
	    glEnd();
	}
	////////upper road
	glBegin(GL_QUADS);
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.65f);
	    glEnd();
	}
	////////road middle border
	glBegin(GL_QUADS);
	{
	    glColor3f(1.39f, .69f, .19f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.7f);
	    glEnd();
	}
	//////////////////////roads white strips
	glLoadIdentity();
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.86f);
        glVertex2f(-0.65f,-0.85f);
	    glVertex2f(-0.95f,-0.85f);
	    glVertex2f(-0.95f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.86f);
        glVertex2f(-0.15f,-0.85f);
	    glVertex2f(-0.45f,-0.85f);
	    glVertex2f(-0.45f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.86f);
        glVertex2f(0.35f,-0.85f);
	    glVertex2f(0.05f,-0.85f);
	    glVertex2f(0.05f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.86f);
        glVertex2f(0.85f,-0.85f);
	    glVertex2f(0.55f,-0.85f);
	    glVertex2f(0.55f,-0.86f);
	    glEnd();
	}
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.51f);
        glVertex2f(-0.65f,-0.50f);
	    glVertex2f(-0.95f,-0.50f);
	    glVertex2f(-0.95f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.51f);
        glVertex2f(-0.15f,-0.50f);
	    glVertex2f(-0.45f,-0.50f);
	    glVertex2f(-0.45f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.51f);
        glVertex2f(0.35f,-0.50f);
	    glVertex2f(0.05f,-0.50f);
	    glVertex2f(0.05f,-0.51f);
	    glEnd();
	}
       glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.51f);
        glVertex2f(0.85f,-0.50f);
	    glVertex2f(0.55f,-0.50f);
	    glVertex2f(0.55f,-0.51f);
	    glEnd();
	}
/////////////done road
////////////////////////////////////////car start
glLoadIdentity();
glPushMatrix();
glTranslatef(carposition, 0.0f,0.0f);

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.71f, -0.45f);
	glVertex2f(-0.71f, -0.38f);
	glVertex2f(-0.67f, -0.38f);
	glVertex2f(-0.64f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.45f, -0.45f);
	glVertex2f(-0.61f, -0.36f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.36f);
    glVertex2f(-0.58f, -0.45f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex2f(-0.85f, -0.48f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.71f, -0.41f);
	glVertex2f(-0.7f, -0.43f);
	glVertex2f(-0.55f, -0.43f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.41f, -0.41f);
	glVertex2f(-0.41f, -0.48f);
	glEnd();


  int i_car;
  GLfloat x_car=-0.55f; GLfloat y_car=-0.48f; GLfloat radius_car =.035f;
  int triangleAmount_car = 20;
  GLfloat twicePi_car = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car, y_car);
		for(i_car = 0; i_car <= triangleAmount_car;i_car++)
            {
			glVertex2f
			(
                x_car + (radius_car * cos(i_car * twicePi_car / triangleAmount_car)),
			    y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
			);
		    }
	    glEnd();


	    int i_car_2;
  GLfloat x_car_2=-0.7f; GLfloat y_car_2=-0.48f; GLfloat radius_car_2 =.035f;
  int triangleAmount_car_2 = 20;
  GLfloat twicePi_car_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car_2, y_car_2);
		for(i_car_2 = 0; i_car_2 <= triangleAmount_car_2;i_car_2++)
            {
			glVertex2f
			(
                x_car_2 + (radius_car_2 * cos(i_car_2 * twicePi_car_2 / triangleAmount_car_2)),
			    y_car_2 + (radius_car_2 * sin(i_car_2 * twicePi_car_2 / triangleAmount_car_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
////////////////////////////////////////car end
/////////////////truck start
glLoadIdentity();
    glPushMatrix();
    glTranslatef(truck_position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(0.43f, -0.44f);
	glVertex2f(0.5f, -0.44f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.58f, -0.5f);
	glVertex2f(0.58f, -0.6f);
	glVertex2f(0.43f, -0.6f);

	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 0.4f);
    glVertex2f(0.43f, -0.6f);
	glVertex2f(0.43f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.52f, -0.5f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.49f, -0.45f);
    glEnd();


 int i_truck;
  GLfloat x_truck=0.5f; GLfloat y_truck=-0.6f; GLfloat radius_truck =.04f;
  int triangleAmount_truck = 20;
  GLfloat twicePi_truck = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck, y_truck);
		for(i_truck = 0; i_truck <= triangleAmount_truck;i_truck++)
            {
			glVertex2f
			(
                x_truck + (radius_truck * cos(i_truck * twicePi_truck / triangleAmount_truck)),
			    y_truck + (radius_truck * sin(i_truck * twicePi_truck / triangleAmount_truck))
			);
		    }
	    glEnd();



    int i_truck_2;
  GLfloat x_truck_2=0.25f; GLfloat y_truck_2=-0.6f; GLfloat radius_truck_2 =.04f;
  int triangleAmount_truck_2 = 20;
  GLfloat twicePi_truck_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck_2, y_truck_2);
		for(i_truck_2 = 0; i_truck_2 <= triangleAmount_truck_2;i_truck_2++)
            {
			glVertex2f
			(
                x_truck_2 + (radius_truck_2 * cos(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2)),
			    y_truck_2 + (radius_truck_2 * sin(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2))
			);
		    }
	    glEnd();

	    glPopMatrix();
///////////////////truck finis

////////////////////////////////////////redcar start
glLoadIdentity();
glPushMatrix();
glTranslatef(redcar_position1,redcar_position2, 0.0f);


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.835f);
	glVertex2f(0.1f, -0.755f);
	glVertex2f(0.22f, -0.755f);
	glVertex2f(0.23f, -0.7f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.45f, -0.755f);
	glVertex2f(0.52f, -0.755f);
	glVertex2f(0.52f, -0.835f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(0.2f, -0.755f);
	glVertex2f(0.26f, -0.71f);
	glVertex2f(0.38f, -0.71f);
	glVertex2f(0.41f, -0.755f);
    glEnd();


    int i_redcar_2;
  GLfloat x_redcar_2=0.22f; GLfloat y_redcar_2=-0.84f; GLfloat radius_redcar_2 =.035f;
  int triangleAmount_redcar_2 = 20;
  GLfloat twicePi_redcar_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar_2, y_redcar_2);
		for(i_redcar_2 = 0; i_redcar_2 <= triangleAmount_redcar_2;i_redcar_2++)
            {
			glVertex2f
			(
                x_redcar_2 + (radius_redcar_2 * cos(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2)),
			    y_redcar_2 + (radius_redcar_2 * sin(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2))
			);
		    }
	    glEnd();

  int i_redcar;
  GLfloat x_redcar=0.45f; GLfloat y_redcar=-0.84f; GLfloat radius_redcar =.035f;
  int triangleAmount_redcar = 20;
  GLfloat twicePi_redcar = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar, y_redcar);
		for(i_redcar = 0; i_redcar <= triangleAmount_redcar;i_redcar++)
            {
			glVertex2f
			(
                x_redcar + (radius_redcar * cos(i_redcar * twicePi_redcar / triangleAmount_redcar)),
			    y_redcar + (radius_redcar * sin(i_redcar * twicePi_redcar / triangleAmount_redcar))
			);
		    }
	    glEnd();
glPopMatrix();

////////////////////////////////////////redcar end

/////////////////bus start
glLoadIdentity();
glPushMatrix();
glTranslatef(bus_position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68f, -0.92f);
	glVertex2f(-0.68f, -0.71f);
	glVertex2f(-0.3f, -0.71f);
	glVertex2f(-0.3f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.85f, 1.0f);
	glVertex2f(-0.59f, -0.87f);
	glVertex2f(-0.55f, -0.83f);
	glVertex2f(-0.31f, -0.83f);
	glVertex2f(-0.31f, -0.77f);
	glVertex2f(-0.59f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.9f);
	glVertex2f(-0.64f, -0.74f);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.9f);
    glEnd();

    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.77);
	glVertex2f(-0.55f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.77);
	glVertex2f(-0.5f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.45f, -0.77);
	glVertex2f(-0.45f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.77);
	glVertex2f(-0.4f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.77);
	glVertex2f(-0.35f, -0.84f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.79);
	glVertex2f(-0.61f, -0.83f);
    glEnd();
    }

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.68f, -0.9f);
	glVertex2f(-0.68f, -0.74f);
	glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.89f);
    glEnd();

    {/////////////////////////////bus stand

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.75f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.69f, -0.76f);
    glEnd();
    }

    glBegin(GL_TRIANGLES);
    {
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.69f, -0.8f);
    glEnd();
    }



 int i_bus;
  GLfloat x_bus=-0.35f; GLfloat y_bus=-0.91f; GLfloat radius_bus =.035f;
  int triangleAmount_bus = 20;
  GLfloat twicePi_bus = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus, y_bus);
		for(i_bus = 0; i_bus <= triangleAmount_bus;i_bus++)
            {
			glVertex2f
			(
                x_bus + (radius_bus * cos(i_bus * twicePi_bus / triangleAmount_bus)),
			    y_bus + (radius_bus * sin(i_bus * twicePi_bus / triangleAmount_bus))
			);
		    }
	    glEnd();



    int i_bus_2;
  GLfloat x_bus_2=-0.55f; GLfloat y_bus_2=-0.91f; GLfloat radius_bus_2 =.035f;
  int triangleAmount_bus_2 = 20;
  GLfloat twicePi_bus_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus_2, y_bus_2);
		for(i_bus_2 = 0; i_bus_2 <= triangleAmount_bus_2;i_bus_2++)
            {
			glVertex2f
			(
                x_bus_2 + (radius_bus_2 * cos(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2)),
			    y_bus_2 + (radius_bus_2 * sin(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
///////////////////bus finis


//////////////////

////////sea
         glLoadIdentity();
         glBegin(GL_QUADS);
	    glColor3f(0.0f,0.0f,0.6f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,0.35f);
	    glVertex2f(-1.0f,0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();

	    glBegin(GL_QUADS);     // GROUND
	    glColor3f(0.6f, 0.6f, 0.0f);
	    glVertex2f(1.0,0.35f);
        glVertex2f(1.0f,0.5f);
	    glVertex2f(-1.0f,0.5f);
	    glVertex2f(-1.0f,0.35f);
	    glEnd();
	     ///////////////////////////////////// RAIL LINE

       glLineWidth(1.4);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.37f);
	   glVertex2f(1.0f, 0.37f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.4f);
	   glVertex2f(1.0f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.95f, 0.37f);
	   glVertex2f(-0.95f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.85f, 0.37f);
	   glVertex2f(-0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.8f, 0.37f);
	   glVertex2f(-0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.75f, 0.37f);
	   glVertex2f(-0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.7f, 0.37f);
	   glVertex2f(-0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.65f, 0.37f);
	   glVertex2f(-0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.6f, 0.37f);
	   glVertex2f(-0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.55f, 0.37f);
	   glVertex2f(-0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.37f);
	   glVertex2f(-0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.45f, 0.37f);
	   glVertex2f(-0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.4f, 0.37f);
	   glVertex2f(-0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.35f, 0.37f);
	   glVertex2f(-0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.3f, 0.37f);
	   glVertex2f(-0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.25f, 0.37f);
	   glVertex2f(-0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.2f, 0.37f);
	   glVertex2f(-0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.15f, 0.37f);
	   glVertex2f(-0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.37f);
	   glVertex2f(-0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.05f, 0.37f);
	   glVertex2f(-0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.0f, 0.37f);
	   glVertex2f(0.0f, 0.4f);
       glEnd();
        glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.05f, 0.37f);
	   glVertex2f(0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.37f);
	   glVertex2f(0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.15f, 0.37f);
	   glVertex2f(0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.37f);
	   glVertex2f(0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.25f, 0.37f);
	   glVertex2f(0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.3f, 0.37f);
	   glVertex2f(0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.35f, 0.37f);
	   glVertex2f(0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.37f);
	   glVertex2f(0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.45f, 0.37f);
	   glVertex2f(0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.37f);
	   glVertex2f(0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.55f, 0.37f);
	   glVertex2f(0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.37f);
	   glVertex2f(0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.65f, 0.37f);
	   glVertex2f(0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.7f, 0.37f);
	   glVertex2f(0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.37f);
	   glVertex2f(0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.8f, 0.37f);
	   glVertex2f(0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.85f, 0.37f);
	   glVertex2f(0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.9f, 0.37f);
	   glVertex2f(0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.95f, 0.37f);
	   glVertex2f(0.95f, 0.4f);
       glEnd();
	   ///////////
	   ///////////// TRAIN STARTS
	   glPushMatrix();
       glTranslatef(train_pos,0.0f, 0.0f);
	   glBegin(GL_POLYGON);            //
	   glColor3f(0.7f, 0.7f, 0.7f); // TRAIN
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.43f);
	   glVertex2f(-0.1f, 0.43f);
	   glVertex2f(0.0f, 0.38f);
	   glVertex2f(0.0f, 0.37f);
       glEnd();

       glLineWidth(2.5);
	glBegin(GL_LINES);              // TRAIN MIDDLE BORDER
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(-0.5f, 0.43f);
    glEnd();

        glBegin(GL_QUADS);              // TRAIN FRONT BLACK WINDOW
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.43f);
	glVertex2f(-0.2f, 0.43f);
	glVertex2f(-0.2f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
    glEnd();

    glBegin(GL_POLYGON);              // TRAIN BELOW BORDER
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.9f, 0.37f);
	glVertex2f(-0.9f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
	glVertex2f(0.0f, 0.38f);
	glVertex2f(0.0f, 0.37f);
    glEnd();

    glPointSize(4.0);
	glBegin(GL_POINTS);              // TRAIN WHEEL
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.37f);
	glVertex2f(-0.45f, 0.37f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.15f, 0.37f);
	glVertex2f(-0.8f, 0.37f);
	glVertex2f(-0.75f, 0.37f);
	glVertex2f(-0.6f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
    glEnd();
////////////////////// TRAIN WHEEL DONE
///////////////////// TRAIN WINDOW
    glLineWidth(2.0);
	glBegin(GL_LINES);              //
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.85f, 0.41f);
	glVertex2f(-0.55f, 0.41f);
	glVertex2f(-0.45f, 0.41f);
	glVertex2f(-0.25f, 0.41f);
    glEnd();
    glPopMatrix();
    ////////////////// TRAIN WINDOW DONE

	   glBegin(GL_POLYGON);         //RIGHT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.45f, 0.45f);
       glVertex2f(-0.4f, 0.5f);
       glVertex2f(-0.4f, 0.55f);
       glVertex2f(-0.25f, 0.6f);
       glVertex2f(-0.35f, 0.65f);
	   glVertex2f(-0.2f, 0.8f);
	   glVertex2f(0.0f, 0.6f);
       glVertex2f(0.25f,  0.45f);
       glEnd();

	   glBegin(GL_POLYGON);       //LEFT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.95f, 0.45f);
	   glVertex2f(-0.7f, 0.6f);
       glVertex2f(-0.8f, 0.75f);
       glVertex2f(-0.6f, 0.88f);
       glVertex2f(-0.5f, 0.65f);
       glVertex2f(-0.4f, 0.58f);
	   glVertex2f(-.3f,  0.45f);
       glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING
	   glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(0.43f, 0.45f);
	   glVertex2f(0.43f, 0.8f);
	   glVertex2f(0.63f, 0.8f);
	   glVertex2f(0.63f, 0.45f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING DOOR
	   glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(0.5f, 0.45f);
	   glVertex2f(0.5f, 0.55f);
	   glVertex2f(0.55f, 0.55f);
	   glVertex2f(0.55f, 0.45f);
	   glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f, 0.75f);
	   glVertex2f(0.5f, 0.75f);
	   glVertex2f(0.5f, 0.7f);
	   glVertex2f(0.45f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f, 0.75f);
	   glVertex2f(0.6f, 0.75f);
	   glVertex2f(0.6f, 0.7f);
	   glVertex2f(0.55f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f,0.65f);
	   glVertex2f(0.5f,0.65f);
	   glVertex2f(0.5f,0.6f);
	   glVertex2f(0.45f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f,0.65f);
	   glVertex2f(0.6f,0.65f);
	   glVertex2f(0.6f,0.6f);
	   glVertex2f(0.55f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // MIDDLE BUILDING
	   glColor3f(0.0f, 0.4f, 0.4f);
       glVertex2f(0.64f, 0.45f);
	   glVertex2f(0.64f, 0.85f);
	   glVertex2f(0.85f, 0.85f);
	   glVertex2f(0.85f, 0.45f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.5f);
	  glVertex2f(0.85f, 0.5f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.55f);
	  glVertex2f(0.85f, 0.55f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.6f);
	  glVertex2f(0.85f, 0.6f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.65f);
	  glVertex2f(0.85f, 0.65f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.7f);
	  glVertex2f(0.85f, 0.7f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.75f);
	  glVertex2f(0.85f, 0.75f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.8f);
	  glVertex2f(0.85f, 0.8f);
      glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.83f, 0.65f);
       glVertex2f(0.83f, 0.68f);
       glVertex2f(0.98f, 0.68f);
       glVertex2f(0.98f, 0.65f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.85f, 0.68f);
       glVertex2f(0.85f, 0.71f);
       glVertex2f(0.96f, 0.71f);
       glVertex2f(0.96f, 0.68f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.87f, 0.71f);
       glVertex2f(0.87f, 0.74f);
       glVertex2f(0.94f, 0.74f);
       glVertex2f(0.94f, 0.71f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.85f, 0.43f);
       glVertex2f(0.85f, 0.65f);
       glVertex2f(0.96f, 0.65f);
       glVertex2f(0.96f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING DOOR
	   glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.89f, 0.43f);
       glVertex2f(0.89f, 0.49f);
       glVertex2f(0.92f, 0.49f);
       glVertex2f(0.92f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.6f);
       glVertex2f(0.9f, 0.6f);
       glVertex2f(0.9f, 0.58f);
       glVertex2f(0.88f, 0.58f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.55f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.9f, 0.53f);
       glVertex2f(0.88f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.55f);
       glVertex2f(0.93f, 0.55f);
       glVertex2f(0.93f, 0.53f);
       glVertex2f(0.91f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.6f);
       glVertex2f(0.93f, 0.6f);
       glVertex2f(0.93f, 0.58f);
       glVertex2f(0.91f, 0.58f);
	   glEnd();
          glTranslatef(+0.0f, 0.07f, 0.0f);
	   glBegin(GL_TRIANGLES);  // 1st TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
       /////////////////////  2nd
       glScalef(0.9,0.9,0);
       glTranslatef(0.13f, 0.05f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
//////////////////////////// 3rd
             glLoadIdentity();
       glScalef(1.1,1.2,0);
       glTranslatef(+0.16f, 0.0f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////
             glLoadIdentity();
      // glScalef(0,0,0);
       glTranslatef(+0.11f, 0.06f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////////////
       glLoadIdentity();
          glScalef(0.8,0.7,0);
        glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();

          glLoadIdentity();
          glPushMatrix();
         glTranslatef(BIG_SHIP_pos,0.0f, 0.0f);
         glBegin(GL_POLYGON);            // RIGHT BELOW SHIP LOWER BODY
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.45f, -0.15f);
	glVertex2f(0.9f, -0.15f);
	glVertex2f(0.8f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);  //RIGHT BELOW SHIP LOWER RED BODY
	{
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(0.3,-0.25f);
        glVertex2f(0.25f,-0.2f);
	    glVertex2f(0.85f,-0.2f);
	    glVertex2f(0.8f,-0.25f);
	    glEnd();
	}
	      glLineWidth(0.8);
	   glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.1f);
	  glVertex2f(0.25f, -0.05f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.05f);
	  glVertex2f(0.4f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.4f, -0.05f);
	  glVertex2f(0.4f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.3f, -0.1f);
	  glVertex2f(0.3f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.35f, -0.1f);
	  glVertex2f(0.35f, -0.05f);
      glEnd();

      glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER BLUE BODY

	    glColor3f(0.0f,0.0f,0.5f);
	    glVertex2f(0.5,-0.15f);
        glVertex2f(0.5f,-0.09f);
	    glVertex2f(0.6f,-0.09f);
	    glVertex2f(0.6f,-0.15f);
	    glEnd();

	    glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER RED BODY

	    glColor3f(.8f,0.0f,0.0f);
	    glVertex2f(0.68,-0.15f);
        glVertex2f(0.68f,-0.1f);
	    glVertex2f(0.85f,-0.1f);
	    glVertex2f(0.85f,-0.15f);
	    glEnd();

	    glLineWidth(1.4);
	   glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.52f, -0.15f);
	  glVertex2f(0.52f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.55f, -0.15f);
	  glVertex2f(0.55f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.58f, -0.15f);
	  glVertex2f(0.58f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.71f, -0.15f);
	  glVertex2f(0.71f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.74f, -0.15f);
	  glVertex2f(0.74f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.78f, -0.15f);
	  glVertex2f(0.78f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.62f, -0.15f);
	  glVertex2f(0.62f, -0.1f);
      glEnd();
      glPopMatrix();

        //////////////////////////speed boat start
           glLoadIdentity();
          glScalef(0.5,0.5,0);
          glTranslatef(+0.8f, 0.3f, 0.0f);

        glPushMatrix();
       glTranslatef(SPEED_BOAT_pos,0.0f, 0.0f);
      glBegin(GL_POLYGON);            //  RIGHT SIDE SPEEDBOAT WHITE PART
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.0f);

	glEnd();

	 glBegin(GL_QUADS);          // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.02f, 0.12f);
	glVertex2f(0.4f, 0.12f);
	glVertex2f(0.4f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);   // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.12f);
    glVertex2f(0.48f, 0.04f);
	glVertex2f(0.5f, 0.05f);
     glEnd();

     glBegin(GL_QUADS);   //  SIDE SPEEDBOAT BLACK PART
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.5f, 0.05f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.0f);
	 glVertex2f(0.5f, 0.0f);
     glEnd();

      glBegin(GL_QUADS);   //RIGHT  SIDE SPEEDBOAT GLASS
      glColor3f(0.0f, 0.9f, 1.0f);
     glVertex2f(0.1f, 0.15f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.3f, 0.25f);
	 glVertex2f(0.25f, 0.15f);
     glEnd();

              glLineWidth(2.5);
	  glBegin(GL_LINES);     // RIGHT SIDE SPEEDBOAT RED PART
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glVertex2f(0.3f, 0.15f);
	  glVertex2f(0.32f, 0.18f);
      glEnd();
      glPopMatrix();
      /////////////finis speed boat
////////sea border
         glLoadIdentity();   ////////SEA BORDER
      glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();
	}
	glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.22f);
        glVertex2f(1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.22f);
	    glEnd();
	}
       glLoadIdentity();
      glLineWidth(2.5);
	  glBegin(GL_LINES);     //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.95f, -0.18f);
	  glVertex2f(-0.95f, -0.3f);
      glEnd();

     glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.89f, -0.18f);
	  glVertex2f(-0.89f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
       glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.83f, -0.18f);
	  glVertex2f(-0.83f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.76f, -0.18f);
	  glVertex2f(-0.76f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.69f, -0.18f);
	  glVertex2f(-0.69f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.62f, -0.18f);
	  glVertex2f(-0.62f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.55f, -0.18f);
	  glVertex2f(-0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.48f, -0.18f);
	  glVertex2f(-0.48f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.41f, -0.18f);
	  glVertex2f(-0.41f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.34f, -0.18f);
	  glVertex2f(-0.34f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.27f, -0.18f);
	  glVertex2f(-0.27f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.20f, -0.18f);
	  glVertex2f(-0.20f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.13f, -0.18f);
	  glVertex2f(-0.13f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.05f, -0.18f);
	  glVertex2f(-0.05f, -0.3f);
      glEnd();

      glBegin(GL_LINES);             //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.02f, -0.18f);
	  glVertex2f(0.02f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.1f, -0.18f);
	  glVertex2f(0.1f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.17f, -0.18f);
	  glVertex2f(0.17f, -0.3f);
      glEnd();

       glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.25f, -0.18f);
	  glVertex2f(0.25f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.32f, -0.18f);
	  glVertex2f(0.32f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.40f, -0.18f);
	  glVertex2f(0.40f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.47f, -0.18f);
	  glVertex2f(0.47f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.55f, -0.18f);
	  glVertex2f(0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.62f, -0.18f);
	  glVertex2f(0.62f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.70f, -0.18f);
	  glVertex2f(0.70f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.77f, -0.18f);
	  glVertex2f(0.77f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.85f, -0.18f);
	  glVertex2f(0.85f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.92f, -0.18f);
	  glVertex2f(0.92f, -0.3f);
      glEnd();


    }
////////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==1)
    {
 glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
 glBegin(GL_QUADS);   ////////////sky
	    glColor3f(0.1f,0.1f,0.1f);
	    glVertex2f(1.0,0.45f);
        glVertex2f(1.0f,1.0f);
	    glVertex2f(-1.0f,1.0f);
	    glVertex2f(-1.0f,0.45f);
	    glEnd();

 glBegin(GL_POLYGON); //far far far mountain
{glColor3f(0.0f, 0.6f, 0.0f); //green



    glVertex2f(1.0f, 0.4f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.4f);
	glEnd();

}

glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}
glBegin(GL_POLYGON); //far far far mountain snow
{
	glColor3f(0.0f, 0.6f, 0.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}

{///////far far land
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();
}



//Ship far away palboat
    {
        glLoadIdentity();
        glTranslatef(+0.0f, 0.25f, 0.0f);
        glTranslatef(palboat_pos_fs,0,0);

        glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glEnd();

        glColor3f(0.7,0.5,0.3);
        glBegin(GL_QUADS);
        glVertex2f(-0.005,0);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.005,0.5);
        glVertex2f(0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(0.01,0.25);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.04,0.3);
        glVertex2f(0.05,0.1);
        glVertex2f(-0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0.0,-0.05);
        glVertex2f(-0.2,-0.05);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glVertex2f(0.0,-0.05);
        glEnd();

        glLoadIdentity();
    }

    glBegin(GL_POLYGON); //far mountain
{
	glColor3f(0.0f,0.4f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.54f, -0.11f);
	glVertex2f(0.44f, -0.12f);
	glVertex2f(0.4f, -0.14f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.31f, -0.08f);
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.36f, 0.06f);
	glVertex2f(0.44f, 0.06f);
	glVertex2f(0.51f, 0.2f);
	glVertex2f(0.56f, 0.2f);
	glVertex2f(0.66f, 0.29f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}


   glBegin(GL_POLYGON); //far mountain house part////////////////////////
{
	glColor3f(0.0f,0.4f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}
///////////////////////////////////ship
       glLoadIdentity();
         // glScalef(0.8,0.7,0);
       // glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos_fs,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();
//////////////////////////ship finish

    glBegin(GL_POLYGON); //front mountain
{
	glColor3f(0.0f, 0.8f, 0.0f); //green
	glVertex2f(0.12f, -1.0f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.65f, 0.12f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.8f, 0.08f);
	glVertex2f(-0.9f, 0.14f);
	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}

///////////////far mountain on far far mountain extra part
/*
    glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}

*/




   glBegin(GL_POLYGON); //far mountain house part//////////////
{
	glColor3f(0.6f, 0.4f, 0.2f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}




//////////////////////////////////////house start
 glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {2,2,1.5,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
glBegin(GL_QUADS);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.44f);
    glVertex2f(-0.79f, -0.44f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.54f, -0.84f);
    glEnd();
}
glBegin(GL_POLYGON);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.84f);
	glVertex2f(-0.54f, -0.44f);
	glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.31f, -0.84f);


    glEnd();
}
glDisable(GL_LIGHTING);
glBegin(GL_QUADS);//// near house red part
{
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.58f, -0.55f);
    glVertex2f(-0.82f, -0.44f);
    glVertex2f(-0.68f, -0.06f);
    glEnd();
}
glBegin(GL_TRIANGLES);//// near house 1
{
	glColor3f(1.0f, 0.2f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.49f, -0.33f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}


glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.33f);
	glVertex2f(-0.58f, -0.55f);
	glVertex2f(-0.57f, -0.59f);
    glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
 glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.28f, -0.6f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
{//////////////////////////////bari black
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -1.0f);
	glVertex2f(-0.54f, -0.5f);
    glEnd();
}

////////////////////////////////house finis 1
///////////////tree start
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);
    glVertex2f(0.07f, -1.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.16f, -0.2f);
    glVertex2f(0.13f, -1.0f);


    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.072f, 0.22f);
    glVertex2f(0.13f, -0.2f);

    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(0.162f, 0.22f);
    glVertex2f(0.16f, -0.2f);

    glEnd();
}
glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(0.04f, 0.1f);
    glVertex2f(-0.05f, 0.06f);
    glVertex2f(-0.14f, 0.24f);

    glVertex2f(-0.07f, 0.47f);
    glVertex2f(-0.04f, 0.72f);
    glVertex2f(0.06f, 0.8f);
    glVertex2f(0.19f, 0.74f);

    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.36f, 0.1f);
    glVertex2f(0.2f, 0.2f);

    glVertex2f(0.18f, 0.02f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.15f, 0.01f);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.1f, 0.07f);
    glEnd();
}
////////////////////////////
glBegin(GL_POLYGON); //////jhao
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.04f, -1.0f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.78f);
    glVertex2f(-0.28f, -0.62f);

    glVertex2f(-0.35f, -0.86f);
    glVertex2f(-0.41f, -0.8f);
    glVertex2f(-0.48f, -0.88f);
    glVertex2f(-0.56f, -0.7f);


    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}

glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);


     glVertex2f(-0.64f, -0.78f);
    glVertex2f(-0.67f, -0.58f);
    glVertex2f(-0.77f, -0.65f);
    glVertex2f(-0.8f, -0.5f);

    glVertex2f(-0.88f, -0.44f);
    glVertex2f(-0.92f, -0.24f);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.8f, -1.0f);

    glEnd();
}


/////////////////jhao end

glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.48f);
    glVertex2f(-0.38f, -0.4f);
    glVertex2f(-0.44f, -0.4f);
    glVertex2f(-0.44f, -0.48f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.45f, -0.5f);
    glVertex2f(-0.51f, -0.5f);
    glVertex2f(-0.51f, -0.6f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.6f);
    glVertex2f(-0.34f, -0.5f);
    glVertex2f(-0.38f, -0.5f);
    glVertex2f(-0.38f, -0.6f);
    glEnd();
}
/////////////finis windows
}
/////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==2)
    {
 glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
    //////////////////////////////////////// BIRDS
      glLoadIdentity();
      glPushMatrix();
      glTranslatef(bird_pos,0.0f, 0.0f);
      glLineWidth(2.5);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.45f, 0.75f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.35f, 0.75f);
       glEnd();
/////////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.05f, 0.85f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.65f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.55f, 0.85f);
       glEnd();
///////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.05f, 0.85f);
       glEnd();
       ///////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.15f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.05f, 0.6f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.55f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.45f, 0.85f);
       glEnd();
       ////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.25f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.15f, 0.6f);
       glEnd();  // BIRD FINISHED
       glPopMatrix();


    ////////////////////////////////////////
       glLoadIdentity();
	        glBegin(GL_QUADS);
	     glColor3f(0.4f, 0.3f, 0.0f);    //SEA SHORE
         glVertex2f(-1.0f, -1.0f);
	    glVertex2f(-1.0f, -0.4f);
	    glVertex2f(1.0f, -0.4f);
	    glVertex2f(1.0f, -1.0f);
        glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    //SEA
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

         glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,sea_pos, 0.0f);
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    // UPPER SEA
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
    glEnd();
    glPopMatrix();
   ////////////////////////////////
          glLoadIdentity();
          glPushMatrix();
          glTranslatef(right_boat_pos,0.0f, 0.0f);
       glBegin(GL_QUADS);              // RIGHT BOAT
	   glColor3f(0.7f, 0.7f, 0.0f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
	   glPopMatrix();
//////////////////////////////////////  2ND BOAT
       glPushMatrix();
       glTranslatef(left_boat_pos,0.0f, 0.0f);
       glTranslatef(-1.4f, -0.2f, 0.0f);
       glBegin(GL_QUADS);              // LEFT BOAT
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
       glPopMatrix();

    }



        }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(snowDay)
        {

if(scene==0)
    {

       glLoadIdentity();

      glBegin(GL_QUADS);  ////////bottom road
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-1.0f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(-1.0f,-0.7f);
	    glVertex2f(-1.0f,-1.0f);
	    glEnd();
	}
	////////upper road
	glBegin(GL_QUADS);
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.65f);
	    glEnd();
	}
	////////road middle border
	glBegin(GL_QUADS);
	{
	    glColor3f(1.39f, .69f, .19f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.7f);
	    glEnd();
	}
	//////////////////////roads white strips
	glLoadIdentity();
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.86f);
        glVertex2f(-0.65f,-0.85f);
	    glVertex2f(-0.95f,-0.85f);
	    glVertex2f(-0.95f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.86f);
        glVertex2f(-0.15f,-0.85f);
	    glVertex2f(-0.45f,-0.85f);
	    glVertex2f(-0.45f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.86f);
        glVertex2f(0.35f,-0.85f);
	    glVertex2f(0.05f,-0.85f);
	    glVertex2f(0.05f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.86f);
        glVertex2f(0.85f,-0.85f);
	    glVertex2f(0.55f,-0.85f);
	    glVertex2f(0.55f,-0.86f);
	    glEnd();
	}
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.51f);
        glVertex2f(-0.65f,-0.50f);
	    glVertex2f(-0.95f,-0.50f);
	    glVertex2f(-0.95f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.51f);
        glVertex2f(-0.15f,-0.50f);
	    glVertex2f(-0.45f,-0.50f);
	    glVertex2f(-0.45f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.51f);
        glVertex2f(0.35f,-0.50f);
	    glVertex2f(0.05f,-0.50f);
	    glVertex2f(0.05f,-0.51f);
	    glEnd();
	}
       glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.51f);
        glVertex2f(0.85f,-0.50f);
	    glVertex2f(0.55f,-0.50f);
	    glVertex2f(0.55f,-0.51f);
	    glEnd();
	}
/////////////done road
////////////////////////////////////////car start
glLoadIdentity();
glPushMatrix();
glTranslatef(carposition, 0.0f,0.0f);

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.71f, -0.45f);
	glVertex2f(-0.71f, -0.38f);
	glVertex2f(-0.67f, -0.38f);
	glVertex2f(-0.64f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.45f, -0.45f);
	glVertex2f(-0.61f, -0.36f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.36f);
    glVertex2f(-0.58f, -0.45f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex2f(-0.85f, -0.48f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.71f, -0.41f);
	glVertex2f(-0.7f, -0.43f);
	glVertex2f(-0.55f, -0.43f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.41f, -0.41f);
	glVertex2f(-0.41f, -0.48f);
	glEnd();


  int i_car;
  GLfloat x_car=-0.55f; GLfloat y_car=-0.48f; GLfloat radius_car =.035f;
  int triangleAmount_car = 20;
  GLfloat twicePi_car = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car, y_car);
		for(i_car = 0; i_car <= triangleAmount_car;i_car++)
            {
			glVertex2f
			(
                x_car + (radius_car * cos(i_car * twicePi_car / triangleAmount_car)),
			    y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
			);
		    }
	    glEnd();


	    int i_car_2;
  GLfloat x_car_2=-0.7f; GLfloat y_car_2=-0.48f; GLfloat radius_car_2 =.035f;
  int triangleAmount_car_2 = 20;
  GLfloat twicePi_car_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car_2, y_car_2);
		for(i_car_2 = 0; i_car_2 <= triangleAmount_car_2;i_car_2++)
            {
			glVertex2f
			(
                x_car_2 + (radius_car_2 * cos(i_car_2 * twicePi_car_2 / triangleAmount_car_2)),
			    y_car_2 + (radius_car_2 * sin(i_car_2 * twicePi_car_2 / triangleAmount_car_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
////////////////////////////////////////car end
/////////////////truck start
glLoadIdentity();
    glPushMatrix();
    glTranslatef(truck_position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(0.43f, -0.44f);
	glVertex2f(0.5f, -0.44f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.58f, -0.5f);
	glVertex2f(0.58f, -0.6f);
	glVertex2f(0.43f, -0.6f);

	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 0.4f);
    glVertex2f(0.43f, -0.6f);
	glVertex2f(0.43f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.52f, -0.5f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.49f, -0.45f);
    glEnd();


 int i_truck;
  GLfloat x_truck=0.5f; GLfloat y_truck=-0.6f; GLfloat radius_truck =.04f;
  int triangleAmount_truck = 20;
  GLfloat twicePi_truck = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck, y_truck);
		for(i_truck = 0; i_truck <= triangleAmount_truck;i_truck++)
            {
			glVertex2f
			(
                x_truck + (radius_truck * cos(i_truck * twicePi_truck / triangleAmount_truck)),
			    y_truck + (radius_truck * sin(i_truck * twicePi_truck / triangleAmount_truck))
			);
		    }
	    glEnd();



    int i_truck_2;
  GLfloat x_truck_2=0.25f; GLfloat y_truck_2=-0.6f; GLfloat radius_truck_2 =.04f;
  int triangleAmount_truck_2 = 20;
  GLfloat twicePi_truck_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck_2, y_truck_2);
		for(i_truck_2 = 0; i_truck_2 <= triangleAmount_truck_2;i_truck_2++)
            {
			glVertex2f
			(
                x_truck_2 + (radius_truck_2 * cos(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2)),
			    y_truck_2 + (radius_truck_2 * sin(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2))
			);
		    }
	    glEnd();

	    glPopMatrix();
///////////////////truck finis

////////////////////////////////////////redcar start
glLoadIdentity();
glPushMatrix();
glTranslatef(redcar_position1,redcar_position2, 0.0f);


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.835f);
	glVertex2f(0.1f, -0.755f);
	glVertex2f(0.22f, -0.755f);
	glVertex2f(0.23f, -0.7f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.45f, -0.755f);
	glVertex2f(0.52f, -0.755f);
	glVertex2f(0.52f, -0.835f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(0.2f, -0.755f);
	glVertex2f(0.26f, -0.71f);
	glVertex2f(0.38f, -0.71f);
	glVertex2f(0.41f, -0.755f);
    glEnd();


    int i_redcar_2;
  GLfloat x_redcar_2=0.22f; GLfloat y_redcar_2=-0.84f; GLfloat radius_redcar_2 =.035f;
  int triangleAmount_redcar_2 = 20;
  GLfloat twicePi_redcar_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar_2, y_redcar_2);
		for(i_redcar_2 = 0; i_redcar_2 <= triangleAmount_redcar_2;i_redcar_2++)
            {
			glVertex2f
			(
                x_redcar_2 + (radius_redcar_2 * cos(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2)),
			    y_redcar_2 + (radius_redcar_2 * sin(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2))
			);
		    }
	    glEnd();

  int i_redcar;
  GLfloat x_redcar=0.45f; GLfloat y_redcar=-0.84f; GLfloat radius_redcar =.035f;
  int triangleAmount_redcar = 20;
  GLfloat twicePi_redcar = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar, y_redcar);
		for(i_redcar = 0; i_redcar <= triangleAmount_redcar;i_redcar++)
            {
			glVertex2f
			(
                x_redcar + (radius_redcar * cos(i_redcar * twicePi_redcar / triangleAmount_redcar)),
			    y_redcar + (radius_redcar * sin(i_redcar * twicePi_redcar / triangleAmount_redcar))
			);
		    }
	    glEnd();
glPopMatrix();

////////////////////////////////////////redcar end

/////////////////bus start
glLoadIdentity();
glPushMatrix();
glTranslatef(bus_position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68f, -0.92f);
	glVertex2f(-0.68f, -0.71f);
	glVertex2f(-0.3f, -0.71f);
	glVertex2f(-0.3f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.85f, 1.0f);
	glVertex2f(-0.59f, -0.87f);
	glVertex2f(-0.55f, -0.83f);
	glVertex2f(-0.31f, -0.83f);
	glVertex2f(-0.31f, -0.77f);
	glVertex2f(-0.59f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.9f);
	glVertex2f(-0.64f, -0.74f);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.9f);
    glEnd();

    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.77);
	glVertex2f(-0.55f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.77);
	glVertex2f(-0.5f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.45f, -0.77);
	glVertex2f(-0.45f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.77);
	glVertex2f(-0.4f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.77);
	glVertex2f(-0.35f, -0.84f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.79);
	glVertex2f(-0.61f, -0.83f);
    glEnd();
    }

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.68f, -0.9f);
	glVertex2f(-0.68f, -0.74f);
	glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.89f);
    glEnd();

    {/////////////////////////////bus stand

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.75f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.69f, -0.76f);
    glEnd();
    }

    glBegin(GL_TRIANGLES);
    {
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.69f, -0.8f);
    glEnd();
    }



 int i_bus;
  GLfloat x_bus=-0.35f; GLfloat y_bus=-0.91f; GLfloat radius_bus =.035f;
  int triangleAmount_bus = 20;
  GLfloat twicePi_bus = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus, y_bus);
		for(i_bus = 0; i_bus <= triangleAmount_bus;i_bus++)
            {
			glVertex2f
			(
                x_bus + (radius_bus * cos(i_bus * twicePi_bus / triangleAmount_bus)),
			    y_bus + (radius_bus * sin(i_bus * twicePi_bus / triangleAmount_bus))
			);
		    }
	    glEnd();



    int i_bus_2;
  GLfloat x_bus_2=-0.55f; GLfloat y_bus_2=-0.91f; GLfloat radius_bus_2 =.035f;
  int triangleAmount_bus_2 = 20;
  GLfloat twicePi_bus_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus_2, y_bus_2);
		for(i_bus_2 = 0; i_bus_2 <= triangleAmount_bus_2;i_bus_2++)
            {
			glVertex2f
			(
                x_bus_2 + (radius_bus_2 * cos(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2)),
			    y_bus_2 + (radius_bus_2 * sin(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
///////////////////bus finis


//////////////////

////////sea
         glLoadIdentity();
         glBegin(GL_QUADS);
	    glColor3f(0.0f,0.4f,1.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,0.35f);
	    glVertex2f(-1.0f,0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();

	    glBegin(GL_QUADS);     // GROUND
	    glColor3f(0.6f, 0.6f, 0.0f);
	    glVertex2f(1.0,0.35f);
        glVertex2f(1.0f,0.5f);
	    glVertex2f(-1.0f,0.5f);
	    glVertex2f(-1.0f,0.35f);
	    glEnd();
	     ///////////////////////////////////// RAIL LINE

       glLineWidth(1.4);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.37f);
	   glVertex2f(1.0f, 0.37f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.4f);
	   glVertex2f(1.0f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.95f, 0.37f);
	   glVertex2f(-0.95f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.85f, 0.37f);
	   glVertex2f(-0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.8f, 0.37f);
	   glVertex2f(-0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.75f, 0.37f);
	   glVertex2f(-0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.7f, 0.37f);
	   glVertex2f(-0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.65f, 0.37f);
	   glVertex2f(-0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.6f, 0.37f);
	   glVertex2f(-0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.55f, 0.37f);
	   glVertex2f(-0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.37f);
	   glVertex2f(-0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.45f, 0.37f);
	   glVertex2f(-0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.4f, 0.37f);
	   glVertex2f(-0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.35f, 0.37f);
	   glVertex2f(-0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.3f, 0.37f);
	   glVertex2f(-0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.25f, 0.37f);
	   glVertex2f(-0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.2f, 0.37f);
	   glVertex2f(-0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.15f, 0.37f);
	   glVertex2f(-0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.37f);
	   glVertex2f(-0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.05f, 0.37f);
	   glVertex2f(-0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.0f, 0.37f);
	   glVertex2f(0.0f, 0.4f);
       glEnd();
        glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.05f, 0.37f);
	   glVertex2f(0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.37f);
	   glVertex2f(0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.15f, 0.37f);
	   glVertex2f(0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.37f);
	   glVertex2f(0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.25f, 0.37f);
	   glVertex2f(0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.3f, 0.37f);
	   glVertex2f(0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.35f, 0.37f);
	   glVertex2f(0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.37f);
	   glVertex2f(0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.45f, 0.37f);
	   glVertex2f(0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.37f);
	   glVertex2f(0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.55f, 0.37f);
	   glVertex2f(0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.37f);
	   glVertex2f(0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.65f, 0.37f);
	   glVertex2f(0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.7f, 0.37f);
	   glVertex2f(0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.37f);
	   glVertex2f(0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.8f, 0.37f);
	   glVertex2f(0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.85f, 0.37f);
	   glVertex2f(0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.9f, 0.37f);
	   glVertex2f(0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.95f, 0.37f);
	   glVertex2f(0.95f, 0.4f);
       glEnd();
	   ///////////
	   ///////////// TRAIN STARTS
	   glPushMatrix();
       glTranslatef(train_pos,0.0f, 0.0f);
	   glBegin(GL_POLYGON);            //
	   glColor3f(0.7f, 0.7f, 0.7f); // TRAIN
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.43f);
	   glVertex2f(-0.1f, 0.43f);
	   glVertex2f(0.0f, 0.38f);
	   glVertex2f(0.0f, 0.37f);
       glEnd();

       glLineWidth(2.5);
	glBegin(GL_LINES);              // TRAIN MIDDLE BORDER
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(-0.5f, 0.43f);
    glEnd();

        glBegin(GL_QUADS);              // TRAIN FRONT BLACK WINDOW
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.43f);
	glVertex2f(-0.2f, 0.43f);
	glVertex2f(-0.2f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
    glEnd();

    glBegin(GL_POLYGON);              // TRAIN BELOW BORDER
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.9f, 0.37f);
	glVertex2f(-0.9f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
	glVertex2f(0.0f, 0.38f);
	glVertex2f(0.0f, 0.37f);
    glEnd();

    glPointSize(4.0);
	glBegin(GL_POINTS);              // TRAIN WHEEL
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.37f);
	glVertex2f(-0.45f, 0.37f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.15f, 0.37f);
	glVertex2f(-0.8f, 0.37f);
	glVertex2f(-0.75f, 0.37f);
	glVertex2f(-0.6f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
    glEnd();
////////////////////// TRAIN WHEEL DONE
///////////////////// TRAIN WINDOW
    glLineWidth(2.0);
	glBegin(GL_LINES);              //
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.85f, 0.41f);
	glVertex2f(-0.55f, 0.41f);
	glVertex2f(-0.45f, 0.41f);
	glVertex2f(-0.25f, 0.41f);
    glEnd();
    glPopMatrix();
    ////////////////// TRAIN WINDOW DONE

	   glBegin(GL_POLYGON);         //RIGHT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.45f, 0.45f);
       glVertex2f(-0.4f, 0.5f);
       glVertex2f(-0.4f, 0.55f);
       glVertex2f(-0.25f, 0.6f);
       glVertex2f(-0.35f, 0.65f);
	   glVertex2f(-0.2f, 0.8f);
	   glVertex2f(0.0f, 0.6f);
       glVertex2f(0.25f,  0.45f);
       glEnd();

	   glBegin(GL_POLYGON);       //LEFT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.95f, 0.45f);
	   glVertex2f(-0.7f, 0.6f);
       glVertex2f(-0.8f, 0.75f);
       glVertex2f(-0.6f, 0.88f);
       glVertex2f(-0.5f, 0.65f);
       glVertex2f(-0.4f, 0.58f);
	   glVertex2f(-.3f,  0.45f);
       glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING
	   glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(0.43f, 0.45f);
	   glVertex2f(0.43f, 0.8f);
	   glVertex2f(0.63f, 0.8f);
	   glVertex2f(0.63f, 0.45f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING DOOR
	   glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(0.5f, 0.45f);
	   glVertex2f(0.5f, 0.55f);
	   glVertex2f(0.55f, 0.55f);
	   glVertex2f(0.55f, 0.45f);
	   glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f, 0.75f);
	   glVertex2f(0.5f, 0.75f);
	   glVertex2f(0.5f, 0.7f);
	   glVertex2f(0.45f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f, 0.75f);
	   glVertex2f(0.6f, 0.75f);
	   glVertex2f(0.6f, 0.7f);
	   glVertex2f(0.55f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f,0.65f);
	   glVertex2f(0.5f,0.65f);
	   glVertex2f(0.5f,0.6f);
	   glVertex2f(0.45f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f,0.65f);
	   glVertex2f(0.6f,0.65f);
	   glVertex2f(0.6f,0.6f);
	   glVertex2f(0.55f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // MIDDLE BUILDING
	   glColor3f(0.0f, 0.4f, 0.4f);
       glVertex2f(0.64f, 0.45f);
	   glVertex2f(0.64f, 0.85f);
	   glVertex2f(0.85f, 0.85f);
	   glVertex2f(0.85f, 0.45f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.5f);
	  glVertex2f(0.85f, 0.5f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.55f);
	  glVertex2f(0.85f, 0.55f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.6f);
	  glVertex2f(0.85f, 0.6f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.65f);
	  glVertex2f(0.85f, 0.65f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.7f);
	  glVertex2f(0.85f, 0.7f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.75f);
	  glVertex2f(0.85f, 0.75f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.8f);
	  glVertex2f(0.85f, 0.8f);
      glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.83f, 0.65f);
       glVertex2f(0.83f, 0.68f);
       glVertex2f(0.98f, 0.68f);
       glVertex2f(0.98f, 0.65f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.85f, 0.68f);
       glVertex2f(0.85f, 0.71f);
       glVertex2f(0.96f, 0.71f);
       glVertex2f(0.96f, 0.68f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.87f, 0.71f);
       glVertex2f(0.87f, 0.74f);
       glVertex2f(0.94f, 0.74f);
       glVertex2f(0.94f, 0.71f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.85f, 0.43f);
       glVertex2f(0.85f, 0.65f);
       glVertex2f(0.96f, 0.65f);
       glVertex2f(0.96f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING DOOR
	   glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.89f, 0.43f);
       glVertex2f(0.89f, 0.49f);
       glVertex2f(0.92f, 0.49f);
       glVertex2f(0.92f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.6f);
       glVertex2f(0.9f, 0.6f);
       glVertex2f(0.9f, 0.58f);
       glVertex2f(0.88f, 0.58f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.55f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.9f, 0.53f);
       glVertex2f(0.88f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.55f);
       glVertex2f(0.93f, 0.55f);
       glVertex2f(0.93f, 0.53f);
       glVertex2f(0.91f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.6f);
       glVertex2f(0.93f, 0.6f);
       glVertex2f(0.93f, 0.58f);
       glVertex2f(0.91f, 0.58f);
	   glEnd();
          glTranslatef(+0.0f, 0.07f, 0.0f);
	   glBegin(GL_TRIANGLES);  // 1st TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
       /////////////////////  2nd
       glScalef(0.9,0.9,0);
       glTranslatef(0.13f, 0.05f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
//////////////////////////// 3rd
             glLoadIdentity();
       glScalef(1.1,1.2,0);
       glTranslatef(+0.16f, 0.0f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////
             glLoadIdentity();
      // glScalef(0,0,0);
       glTranslatef(+0.11f, 0.06f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////////////
       glLoadIdentity();
          glScalef(0.8,0.7,0);
        glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();

          glLoadIdentity();
          glPushMatrix();
         glTranslatef(BIG_SHIP_pos,0.0f, 0.0f);
         glBegin(GL_POLYGON);            // RIGHT BELOW SHIP LOWER BODY
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.45f, -0.15f);
	glVertex2f(0.9f, -0.15f);
	glVertex2f(0.8f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);  //RIGHT BELOW SHIP LOWER RED BODY
	{
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(0.3,-0.25f);
        glVertex2f(0.25f,-0.2f);
	    glVertex2f(0.85f,-0.2f);
	    glVertex2f(0.8f,-0.25f);
	    glEnd();
	}
	      glLineWidth(0.8);
	   glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.1f);
	  glVertex2f(0.25f, -0.05f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.05f);
	  glVertex2f(0.4f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.4f, -0.05f);
	  glVertex2f(0.4f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.3f, -0.1f);
	  glVertex2f(0.3f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.35f, -0.1f);
	  glVertex2f(0.35f, -0.05f);
      glEnd();

      glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER BLUE BODY

	    glColor3f(0.0f,0.0f,0.5f);
	    glVertex2f(0.5,-0.15f);
        glVertex2f(0.5f,-0.09f);
	    glVertex2f(0.6f,-0.09f);
	    glVertex2f(0.6f,-0.15f);
	    glEnd();

	    glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER RED BODY

	    glColor3f(.8f,0.0f,0.0f);
	    glVertex2f(0.68,-0.15f);
        glVertex2f(0.68f,-0.1f);
	    glVertex2f(0.85f,-0.1f);
	    glVertex2f(0.85f,-0.15f);
	    glEnd();

	    glLineWidth(1.4);
	   glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.52f, -0.15f);
	  glVertex2f(0.52f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.55f, -0.15f);
	  glVertex2f(0.55f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.58f, -0.15f);
	  glVertex2f(0.58f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.71f, -0.15f);
	  glVertex2f(0.71f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.74f, -0.15f);
	  glVertex2f(0.74f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.78f, -0.15f);
	  glVertex2f(0.78f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.62f, -0.15f);
	  glVertex2f(0.62f, -0.1f);
      glEnd();
      glPopMatrix();

        //////////////////////////speed boat start
           glLoadIdentity();
          glScalef(0.5,0.5,0);
          glTranslatef(+0.8f, 0.3f, 0.0f);

        glPushMatrix();
       glTranslatef(SPEED_BOAT_pos,0.0f, 0.0f);
      glBegin(GL_POLYGON);            //  RIGHT SIDE SPEEDBOAT WHITE PART
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.0f);

	glEnd();

	 glBegin(GL_QUADS);          // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.02f, 0.12f);
	glVertex2f(0.4f, 0.12f);
	glVertex2f(0.4f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);   // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.12f);
    glVertex2f(0.48f, 0.04f);
	glVertex2f(0.5f, 0.05f);
     glEnd();

     glBegin(GL_QUADS);   //  SIDE SPEEDBOAT BLACK PART
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.5f, 0.05f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.0f);
	 glVertex2f(0.5f, 0.0f);
     glEnd();

      glBegin(GL_QUADS);   //RIGHT  SIDE SPEEDBOAT GLASS
      glColor3f(0.0f, 0.9f, 1.0f);
     glVertex2f(0.1f, 0.15f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.3f, 0.25f);
	 glVertex2f(0.25f, 0.15f);
     glEnd();

              glLineWidth(2.5);
	  glBegin(GL_LINES);     // RIGHT SIDE SPEEDBOAT RED PART
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glVertex2f(0.3f, 0.15f);
	  glVertex2f(0.32f, 0.18f);
      glEnd();
      glPopMatrix();
      /////////////finis speed boat
////////sea border
         glLoadIdentity();   ////////SEA BORDER
      glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();
	}
	glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.22f);
        glVertex2f(1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.22f);
	    glEnd();
	}
       glLoadIdentity();
      glLineWidth(2.5);
	  glBegin(GL_LINES);     //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.95f, -0.18f);
	  glVertex2f(-0.95f, -0.3f);
      glEnd();

     glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.89f, -0.18f);
	  glVertex2f(-0.89f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
       glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.83f, -0.18f);
	  glVertex2f(-0.83f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.76f, -0.18f);
	  glVertex2f(-0.76f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.69f, -0.18f);
	  glVertex2f(-0.69f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.62f, -0.18f);
	  glVertex2f(-0.62f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.55f, -0.18f);
	  glVertex2f(-0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.48f, -0.18f);
	  glVertex2f(-0.48f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.41f, -0.18f);
	  glVertex2f(-0.41f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.34f, -0.18f);
	  glVertex2f(-0.34f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.27f, -0.18f);
	  glVertex2f(-0.27f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.20f, -0.18f);
	  glVertex2f(-0.20f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.13f, -0.18f);
	  glVertex2f(-0.13f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.05f, -0.18f);
	  glVertex2f(-0.05f, -0.3f);
      glEnd();

      glBegin(GL_LINES);             //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.02f, -0.18f);
	  glVertex2f(0.02f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.1f, -0.18f);
	  glVertex2f(0.1f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.17f, -0.18f);
	  glVertex2f(0.17f, -0.3f);
      glEnd();

       glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.25f, -0.18f);
	  glVertex2f(0.25f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.32f, -0.18f);
	  glVertex2f(0.32f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.40f, -0.18f);
	  glVertex2f(0.40f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.47f, -0.18f);
	  glVertex2f(0.47f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.55f, -0.18f);
	  glVertex2f(0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.62f, -0.18f);
	  glVertex2f(0.62f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.70f, -0.18f);
	  glVertex2f(0.70f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.77f, -0.18f);
	  glVertex2f(0.77f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.85f, -0.18f);
	  glVertex2f(0.85f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.92f, -0.18f);
	  glVertex2f(0.92f, -0.3f);
      glEnd();



	glPointSize(4.0);

glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,snow_pos, 0.0f);

//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////

    }
////////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==1)
    {




 glBegin(GL_QUADS);   ////////////sky
	    glColor3f(0.6f,0.6f,1.0f);
	    glVertex2f(1.0,0.45f);
        glVertex2f(1.0f,1.0f);
	    glVertex2f(-1.0f,1.0f);
	    glVertex2f(-1.0f,0.45f);
	    glEnd();

 glBegin(GL_POLYGON); //far far far mountain
{
	//glColor3f(0.0f, 0.9f, 0.0f); //green
glColor3f(1.0f, 1.0f, 1.0f);


    glVertex2f(1.0f, 0.4f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.4f);
	glEnd();

}
/*
glBegin(GL_POLYGON); //far far far mountain snow
{
	glColor3f(1.0f, 1.0f, 1.0f); //green



    glVertex2f(1.0f, 0.9f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.47f);
	glEnd();

}
*/

glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}
glBegin(GL_POLYGON); //far far far mountain snow
{
	glColor3f(1.0f, 1.0f, 1.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}

{///////far far land
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();
}



//Ship far away palboat
    {
        glLoadIdentity();
        glTranslatef(+0.0f, 0.25f, 0.0f);
        glTranslatef(palboat_pos_fs,0,0);

        glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glEnd();

        glColor3f(0.7,0.5,0.3);
        glBegin(GL_QUADS);
        glVertex2f(-0.005,0);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.005,0.5);
        glVertex2f(0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(0.01,0.25);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.04,0.3);
        glVertex2f(0.05,0.1);
        glVertex2f(-0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0.0,-0.05);
        glVertex2f(-0.2,-0.05);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glVertex2f(0.0,-0.05);
        glEnd();

        glLoadIdentity();
    }

    glBegin(GL_POLYGON); //far mountain
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.54f, -0.11f);
	glVertex2f(0.44f, -0.12f);
	glVertex2f(0.4f, -0.14f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.31f, -0.08f);
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.36f, 0.06f);
	glVertex2f(0.44f, 0.06f);
	glVertex2f(0.51f, 0.2f);
	glVertex2f(0.56f, 0.2f);
	glVertex2f(0.66f, 0.29f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}


   glBegin(GL_POLYGON); //far mountain house part
{
	glColor3f(1.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}
///////////////////////////////////ship
       glLoadIdentity();
         // glScalef(0.8,0.7,0);
       // glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos_fs,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();
//////////////////////////ship finish

    glBegin(GL_POLYGON); //front mountain
{
	glColor3f(0.0f, 0.8f, 0.0f); //green
	glVertex2f(0.12f, -1.0f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.65f, 0.12f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.8f, 0.08f);
	glVertex2f(-0.9f, 0.14f);
	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}

///////////////far mountain on far far mountain extra part

    glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}






   glBegin(GL_POLYGON); //far mountain house part
{
	glColor3f(1.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}




//////////////////////////////////////house start
glBegin(GL_QUADS);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.44f);
    glVertex2f(-0.79f, -0.44f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.54f, -0.84f);
    glEnd();
}
glBegin(GL_POLYGON);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.84f);
	glVertex2f(-0.54f, -0.44f);
	glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.31f, -0.84f);


    glEnd();
}
glBegin(GL_QUADS);//// near house red part
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.58f, -0.55f);
    glVertex2f(-0.82f, -0.44f);
    glVertex2f(-0.68f, -0.06f);
    glEnd();
}
glBegin(GL_TRIANGLES);//// near house 1
{
	glColor3f(1.0f, 0.2f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.49f, -0.33f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}


glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.33f);
	glVertex2f(-0.58f, -0.55f);
	glVertex2f(-0.57f, -0.59f);
    glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
 glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.28f, -0.6f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
{//////////////////////////////bari black
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -1.0f);
	glVertex2f(-0.54f, -0.5f);
    glEnd();
}

////////////////////////////////house finis 1
///////////////tree start
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);
    glVertex2f(0.07f, -1.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.16f, -0.2f);
    glVertex2f(0.13f, -1.0f);


    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.072f, 0.22f);
    glVertex2f(0.13f, -0.2f);

    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(0.162f, 0.22f);
    glVertex2f(0.16f, -0.2f);

    glEnd();
}
glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(0.04f, 0.1f);
    glVertex2f(-0.05f, 0.06f);
    glVertex2f(-0.14f, 0.24f);

    glVertex2f(-0.07f, 0.47f);
    glVertex2f(-0.04f, 0.72f);
    glVertex2f(0.06f, 0.8f);
    glVertex2f(0.19f, 0.74f);

    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.36f, 0.1f);
    glVertex2f(0.2f, 0.2f);

    glVertex2f(0.18f, 0.02f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.15f, 0.01f);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.1f, 0.07f);
    glEnd();
}
////////////////////////////
glBegin(GL_POLYGON); //////jhao
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.04f, -1.0f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.78f);
    glVertex2f(-0.28f, -0.62f);

    glVertex2f(-0.35f, -0.86f);
    glVertex2f(-0.41f, -0.8f);
    glVertex2f(-0.48f, -0.88f);
    glVertex2f(-0.56f, -0.7f);


    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}

glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);


     glVertex2f(-0.64f, -0.78f);
    glVertex2f(-0.67f, -0.58f);
    glVertex2f(-0.77f, -0.65f);
    glVertex2f(-0.8f, -0.5f);

    glVertex2f(-0.88f, -0.44f);
    glVertex2f(-0.92f, -0.24f);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.8f, -1.0f);

    glEnd();
}


/////////////////jhao end

glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.48f);
    glVertex2f(-0.38f, -0.4f);
    glVertex2f(-0.44f, -0.4f);
    glVertex2f(-0.44f, -0.48f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.45f, -0.5f);
    glVertex2f(-0.51f, -0.5f);
    glVertex2f(-0.51f, -0.6f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.6f);
    glVertex2f(-0.34f, -0.5f);
    glVertex2f(-0.38f, -0.5f);
    glVertex2f(-0.38f, -0.6f);
    glEnd();
}
/////////////finis windows
/////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;snow
glPointSize(4.0);

glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,snow_pos, 0.0f);

//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
    glEnd();
    glLoadIdentity();
//////////////////////////////////////////////


    }
/////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==2)
    {



    //////////////////////////////////////// BIRDS
      glLoadIdentity();
      glPushMatrix();
      glTranslatef(bird_pos,0.0f, 0.0f);
      glLineWidth(2.5);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.45f, 0.75f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.35f, 0.75f);
       glEnd();
/////////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.05f, 0.85f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.65f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.55f, 0.85f);
       glEnd();
///////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.05f, 0.85f);
       glEnd();
       ///////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.15f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.05f, 0.6f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.55f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.45f, 0.85f);
       glEnd();
       ////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.25f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.15f, 0.6f);
       glEnd();  // BIRD FINISHED
       glPopMatrix();


    ////////////////////////////////////////
       glLoadIdentity();
	        glBegin(GL_QUADS);
	     glColor3f(0.8f, 0.8f, 0.0f);    //SEA SHORE
         glVertex2f(-1.0f, -1.0f);
	    glVertex2f(-1.0f, -0.4f);
	    glVertex2f(1.0f, -0.4f);
	    glVertex2f(1.0f, -1.0f);
        glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    //SEA
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

         glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,sea_pos, 0.0f);
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    // UPPER SEA
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
    glEnd();
    glPopMatrix();
   ////////////////////////////////
          glLoadIdentity();
          glPushMatrix();
          glTranslatef(right_boat_pos,0.0f, 0.0f);
       glBegin(GL_QUADS);              // RIGHT BOAT
	   glColor3f(0.7f, 0.7f, 0.0f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
	   glPopMatrix();
//////////////////////////////////////  2ND BOAT
       glPushMatrix();
       glTranslatef(left_boat_pos,0.0f, 0.0f);
       glTranslatef(-1.4f, -0.2f, 0.0f);
       glBegin(GL_QUADS);              // LEFT BOAT
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
       glPopMatrix();





       	glPointSize(4.0);

glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,snow_pos, 0.0f);

//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////

    }



        }
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(snowNight)
        {

if(scene==0)
    {
glLoadIdentity();
glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
       glLoadIdentity();

      glBegin(GL_QUADS);  ////////bottom road
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-1.0f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(-1.0f,-0.7f);
	    glVertex2f(-1.0f,-1.0f);
	    glEnd();
	}
	////////upper road
	glBegin(GL_QUADS);
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.65f);
	    glEnd();
	}
	////////road middle border
	glBegin(GL_QUADS);
	{
	    glColor3f(1.39f, .69f, .19f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.7f);
	    glEnd();
	}
	//////////////////////roads white strips
	glLoadIdentity();
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.86f);
        glVertex2f(-0.65f,-0.85f);
	    glVertex2f(-0.95f,-0.85f);
	    glVertex2f(-0.95f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.86f);
        glVertex2f(-0.15f,-0.85f);
	    glVertex2f(-0.45f,-0.85f);
	    glVertex2f(-0.45f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.86f);
        glVertex2f(0.35f,-0.85f);
	    glVertex2f(0.05f,-0.85f);
	    glVertex2f(0.05f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.86f);
        glVertex2f(0.85f,-0.85f);
	    glVertex2f(0.55f,-0.85f);
	    glVertex2f(0.55f,-0.86f);
	    glEnd();
	}
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.51f);
        glVertex2f(-0.65f,-0.50f);
	    glVertex2f(-0.95f,-0.50f);
	    glVertex2f(-0.95f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.51f);
        glVertex2f(-0.15f,-0.50f);
	    glVertex2f(-0.45f,-0.50f);
	    glVertex2f(-0.45f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.51f);
        glVertex2f(0.35f,-0.50f);
	    glVertex2f(0.05f,-0.50f);
	    glVertex2f(0.05f,-0.51f);
	    glEnd();
	}
       glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.51f);
        glVertex2f(0.85f,-0.50f);
	    glVertex2f(0.55f,-0.50f);
	    glVertex2f(0.55f,-0.51f);
	    glEnd();
	}
/////////////done road
////////////////////////////////////////car start
glLoadIdentity();
glPushMatrix();
glTranslatef(carposition, 0.0f,0.0f);

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.71f, -0.45f);
	glVertex2f(-0.71f, -0.38f);
	glVertex2f(-0.67f, -0.38f);
	glVertex2f(-0.64f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.45f, -0.45f);
	glVertex2f(-0.61f, -0.36f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.36f);
    glVertex2f(-0.58f, -0.45f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex2f(-0.85f, -0.48f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.71f, -0.41f);
	glVertex2f(-0.7f, -0.43f);
	glVertex2f(-0.55f, -0.43f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.41f, -0.41f);
	glVertex2f(-0.41f, -0.48f);
	glEnd();


  int i_car;
  GLfloat x_car=-0.55f; GLfloat y_car=-0.48f; GLfloat radius_car =.035f;
  int triangleAmount_car = 20;
  GLfloat twicePi_car = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car, y_car);
		for(i_car = 0; i_car <= triangleAmount_car;i_car++)
            {
			glVertex2f
			(
                x_car + (radius_car * cos(i_car * twicePi_car / triangleAmount_car)),
			    y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
			);
		    }
	    glEnd();


	    int i_car_2;
  GLfloat x_car_2=-0.7f; GLfloat y_car_2=-0.48f; GLfloat radius_car_2 =.035f;
  int triangleAmount_car_2 = 20;
  GLfloat twicePi_car_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car_2, y_car_2);
		for(i_car_2 = 0; i_car_2 <= triangleAmount_car_2;i_car_2++)
            {
			glVertex2f
			(
                x_car_2 + (radius_car_2 * cos(i_car_2 * twicePi_car_2 / triangleAmount_car_2)),
			    y_car_2 + (radius_car_2 * sin(i_car_2 * twicePi_car_2 / triangleAmount_car_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
////////////////////////////////////////car end
/////////////////truck start
glLoadIdentity();
    glPushMatrix();
    glTranslatef(truck_position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(0.43f, -0.44f);
	glVertex2f(0.5f, -0.44f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.58f, -0.5f);
	glVertex2f(0.58f, -0.6f);
	glVertex2f(0.43f, -0.6f);

	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 0.4f);
    glVertex2f(0.43f, -0.6f);
	glVertex2f(0.43f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.52f, -0.5f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.49f, -0.45f);
    glEnd();


 int i_truck;
  GLfloat x_truck=0.5f; GLfloat y_truck=-0.6f; GLfloat radius_truck =.04f;
  int triangleAmount_truck = 20;
  GLfloat twicePi_truck = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck, y_truck);
		for(i_truck = 0; i_truck <= triangleAmount_truck;i_truck++)
            {
			glVertex2f
			(
                x_truck + (radius_truck * cos(i_truck * twicePi_truck / triangleAmount_truck)),
			    y_truck + (radius_truck * sin(i_truck * twicePi_truck / triangleAmount_truck))
			);
		    }
	    glEnd();



    int i_truck_2;
  GLfloat x_truck_2=0.25f; GLfloat y_truck_2=-0.6f; GLfloat radius_truck_2 =.04f;
  int triangleAmount_truck_2 = 20;
  GLfloat twicePi_truck_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck_2, y_truck_2);
		for(i_truck_2 = 0; i_truck_2 <= triangleAmount_truck_2;i_truck_2++)
            {
			glVertex2f
			(
                x_truck_2 + (radius_truck_2 * cos(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2)),
			    y_truck_2 + (radius_truck_2 * sin(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2))
			);
		    }
	    glEnd();

	    glPopMatrix();
///////////////////truck finis

////////////////////////////////////////redcar start
glLoadIdentity();
glPushMatrix();
glTranslatef(redcar_position1,redcar_position2, 0.0f);


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.835f);
	glVertex2f(0.1f, -0.755f);
	glVertex2f(0.22f, -0.755f);
	glVertex2f(0.23f, -0.7f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.45f, -0.755f);
	glVertex2f(0.52f, -0.755f);
	glVertex2f(0.52f, -0.835f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(0.2f, -0.755f);
	glVertex2f(0.26f, -0.71f);
	glVertex2f(0.38f, -0.71f);
	glVertex2f(0.41f, -0.755f);
    glEnd();


    int i_redcar_2;
  GLfloat x_redcar_2=0.22f; GLfloat y_redcar_2=-0.84f; GLfloat radius_redcar_2 =.035f;
  int triangleAmount_redcar_2 = 20;
  GLfloat twicePi_redcar_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar_2, y_redcar_2);
		for(i_redcar_2 = 0; i_redcar_2 <= triangleAmount_redcar_2;i_redcar_2++)
            {
			glVertex2f
			(
                x_redcar_2 + (radius_redcar_2 * cos(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2)),
			    y_redcar_2 + (radius_redcar_2 * sin(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2))
			);
		    }
	    glEnd();

  int i_redcar;
  GLfloat x_redcar=0.45f; GLfloat y_redcar=-0.84f; GLfloat radius_redcar =.035f;
  int triangleAmount_redcar = 20;
  GLfloat twicePi_redcar = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar, y_redcar);
		for(i_redcar = 0; i_redcar <= triangleAmount_redcar;i_redcar++)
            {
			glVertex2f
			(
                x_redcar + (radius_redcar * cos(i_redcar * twicePi_redcar / triangleAmount_redcar)),
			    y_redcar + (radius_redcar * sin(i_redcar * twicePi_redcar / triangleAmount_redcar))
			);
		    }
	    glEnd();
glPopMatrix();

////////////////////////////////////////redcar end

/////////////////bus start
glLoadIdentity();
glPushMatrix();
glTranslatef(bus_position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68f, -0.92f);
	glVertex2f(-0.68f, -0.71f);
	glVertex2f(-0.3f, -0.71f);
	glVertex2f(-0.3f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.85f, 1.0f);
	glVertex2f(-0.59f, -0.87f);
	glVertex2f(-0.55f, -0.83f);
	glVertex2f(-0.31f, -0.83f);
	glVertex2f(-0.31f, -0.77f);
	glVertex2f(-0.59f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.9f);
	glVertex2f(-0.64f, -0.74f);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.9f);
    glEnd();

    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.77);
	glVertex2f(-0.55f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.77);
	glVertex2f(-0.5f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.45f, -0.77);
	glVertex2f(-0.45f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.77);
	glVertex2f(-0.4f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.77);
	glVertex2f(-0.35f, -0.84f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.79);
	glVertex2f(-0.61f, -0.83f);
    glEnd();
    }

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.68f, -0.9f);
	glVertex2f(-0.68f, -0.74f);
	glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.89f);
    glEnd();

    {/////////////////////////////bus stand

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.75f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.69f, -0.76f);
    glEnd();
    }

    glBegin(GL_TRIANGLES);
    {
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.69f, -0.8f);
    glEnd();
    }



 int i_bus;
  GLfloat x_bus=-0.35f; GLfloat y_bus=-0.91f; GLfloat radius_bus =.035f;
  int triangleAmount_bus = 20;
  GLfloat twicePi_bus = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus, y_bus);
		for(i_bus = 0; i_bus <= triangleAmount_bus;i_bus++)
            {
			glVertex2f
			(
                x_bus + (radius_bus * cos(i_bus * twicePi_bus / triangleAmount_bus)),
			    y_bus + (radius_bus * sin(i_bus * twicePi_bus / triangleAmount_bus))
			);
		    }
	    glEnd();



    int i_bus_2;
  GLfloat x_bus_2=-0.55f; GLfloat y_bus_2=-0.91f; GLfloat radius_bus_2 =.035f;
  int triangleAmount_bus_2 = 20;
  GLfloat twicePi_bus_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus_2, y_bus_2);
		for(i_bus_2 = 0; i_bus_2 <= triangleAmount_bus_2;i_bus_2++)
            {
			glVertex2f
			(
                x_bus_2 + (radius_bus_2 * cos(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2)),
			    y_bus_2 + (radius_bus_2 * sin(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
///////////////////bus finis


//////////////////

////////sea
         glLoadIdentity();
         glBegin(GL_QUADS);
	    glColor3f(0.0f,0.0f,0.6f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,0.35f);
	    glVertex2f(-1.0f,0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();

	    glBegin(GL_QUADS);     // GROUND
	    glColor3f(0.6f, 0.6f, 0.0f);
	    glVertex2f(1.0,0.35f);
        glVertex2f(1.0f,0.5f);
	    glVertex2f(-1.0f,0.5f);
	    glVertex2f(-1.0f,0.35f);
	    glEnd();
	     ///////////////////////////////////// RAIL LINE

       glLineWidth(1.4);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.37f);
	   glVertex2f(1.0f, 0.37f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.4f);
	   glVertex2f(1.0f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.95f, 0.37f);
	   glVertex2f(-0.95f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.85f, 0.37f);
	   glVertex2f(-0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.8f, 0.37f);
	   glVertex2f(-0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.75f, 0.37f);
	   glVertex2f(-0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.7f, 0.37f);
	   glVertex2f(-0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.65f, 0.37f);
	   glVertex2f(-0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.6f, 0.37f);
	   glVertex2f(-0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.55f, 0.37f);
	   glVertex2f(-0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.37f);
	   glVertex2f(-0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.45f, 0.37f);
	   glVertex2f(-0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.4f, 0.37f);
	   glVertex2f(-0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.35f, 0.37f);
	   glVertex2f(-0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.3f, 0.37f);
	   glVertex2f(-0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.25f, 0.37f);
	   glVertex2f(-0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.2f, 0.37f);
	   glVertex2f(-0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.15f, 0.37f);
	   glVertex2f(-0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.37f);
	   glVertex2f(-0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.05f, 0.37f);
	   glVertex2f(-0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.0f, 0.37f);
	   glVertex2f(0.0f, 0.4f);
       glEnd();
        glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.05f, 0.37f);
	   glVertex2f(0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.37f);
	   glVertex2f(0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.15f, 0.37f);
	   glVertex2f(0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.37f);
	   glVertex2f(0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.25f, 0.37f);
	   glVertex2f(0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.3f, 0.37f);
	   glVertex2f(0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.35f, 0.37f);
	   glVertex2f(0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.37f);
	   glVertex2f(0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.45f, 0.37f);
	   glVertex2f(0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.37f);
	   glVertex2f(0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.55f, 0.37f);
	   glVertex2f(0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.37f);
	   glVertex2f(0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.65f, 0.37f);
	   glVertex2f(0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.7f, 0.37f);
	   glVertex2f(0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.37f);
	   glVertex2f(0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.8f, 0.37f);
	   glVertex2f(0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.85f, 0.37f);
	   glVertex2f(0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.9f, 0.37f);
	   glVertex2f(0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.95f, 0.37f);
	   glVertex2f(0.95f, 0.4f);
       glEnd();
	   ///////////
	   ///////////// TRAIN STARTS
	   glPushMatrix();
       glTranslatef(train_pos,0.0f, 0.0f);
	   glBegin(GL_POLYGON);            //
	   glColor3f(0.7f, 0.7f, 0.7f); // TRAIN
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.43f);
	   glVertex2f(-0.1f, 0.43f);
	   glVertex2f(0.0f, 0.38f);
	   glVertex2f(0.0f, 0.37f);
       glEnd();

       glLineWidth(2.5);
	glBegin(GL_LINES);              // TRAIN MIDDLE BORDER
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(-0.5f, 0.43f);
    glEnd();

        glBegin(GL_QUADS);              // TRAIN FRONT BLACK WINDOW
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.43f);
	glVertex2f(-0.2f, 0.43f);
	glVertex2f(-0.2f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
    glEnd();

    glBegin(GL_POLYGON);              // TRAIN BELOW BORDER
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.9f, 0.37f);
	glVertex2f(-0.9f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
	glVertex2f(0.0f, 0.38f);
	glVertex2f(0.0f, 0.37f);
    glEnd();

    glPointSize(4.0);
	glBegin(GL_POINTS);              // TRAIN WHEEL
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.37f);
	glVertex2f(-0.45f, 0.37f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.15f, 0.37f);
	glVertex2f(-0.8f, 0.37f);
	glVertex2f(-0.75f, 0.37f);
	glVertex2f(-0.6f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
    glEnd();
////////////////////// TRAIN WHEEL DONE
///////////////////// TRAIN WINDOW
    glLineWidth(2.0);
	glBegin(GL_LINES);              //
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.85f, 0.41f);
	glVertex2f(-0.55f, 0.41f);
	glVertex2f(-0.45f, 0.41f);
	glVertex2f(-0.25f, 0.41f);
    glEnd();
    glPopMatrix();
    ////////////////// TRAIN WINDOW DONE

	   glBegin(GL_POLYGON);         //RIGHT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.45f, 0.45f);
       glVertex2f(-0.4f, 0.5f);
       glVertex2f(-0.4f, 0.55f);
       glVertex2f(-0.25f, 0.6f);
       glVertex2f(-0.35f, 0.65f);
	   glVertex2f(-0.2f, 0.8f);
	   glVertex2f(0.0f, 0.6f);
       glVertex2f(0.25f,  0.45f);
       glEnd();

	   glBegin(GL_POLYGON);       //LEFT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.95f, 0.45f);
	   glVertex2f(-0.7f, 0.6f);
       glVertex2f(-0.8f, 0.75f);
       glVertex2f(-0.6f, 0.88f);
       glVertex2f(-0.5f, 0.65f);
       glVertex2f(-0.4f, 0.58f);
	   glVertex2f(-.3f,  0.45f);
       glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING
	   glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(0.43f, 0.45f);
	   glVertex2f(0.43f, 0.8f);
	   glVertex2f(0.63f, 0.8f);
	   glVertex2f(0.63f, 0.45f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING DOOR
	   glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(0.5f, 0.45f);
	   glVertex2f(0.5f, 0.55f);
	   glVertex2f(0.55f, 0.55f);
	   glVertex2f(0.55f, 0.45f);
	   glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f, 0.75f);
	   glVertex2f(0.5f, 0.75f);
	   glVertex2f(0.5f, 0.7f);
	   glVertex2f(0.45f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f, 0.75f);
	   glVertex2f(0.6f, 0.75f);
	   glVertex2f(0.6f, 0.7f);
	   glVertex2f(0.55f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f,0.65f);
	   glVertex2f(0.5f,0.65f);
	   glVertex2f(0.5f,0.6f);
	   glVertex2f(0.45f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f,0.65f);
	   glVertex2f(0.6f,0.65f);
	   glVertex2f(0.6f,0.6f);
	   glVertex2f(0.55f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // MIDDLE BUILDING
	   glColor3f(0.0f, 0.4f, 0.4f);
       glVertex2f(0.64f, 0.45f);
	   glVertex2f(0.64f, 0.85f);
	   glVertex2f(0.85f, 0.85f);
	   glVertex2f(0.85f, 0.45f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.5f);
	  glVertex2f(0.85f, 0.5f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.55f);
	  glVertex2f(0.85f, 0.55f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.6f);
	  glVertex2f(0.85f, 0.6f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.65f);
	  glVertex2f(0.85f, 0.65f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.7f);
	  glVertex2f(0.85f, 0.7f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.75f);
	  glVertex2f(0.85f, 0.75f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.8f);
	  glVertex2f(0.85f, 0.8f);
      glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.83f, 0.65f);
       glVertex2f(0.83f, 0.68f);
       glVertex2f(0.98f, 0.68f);
       glVertex2f(0.98f, 0.65f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.85f, 0.68f);
       glVertex2f(0.85f, 0.71f);
       glVertex2f(0.96f, 0.71f);
       glVertex2f(0.96f, 0.68f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.87f, 0.71f);
       glVertex2f(0.87f, 0.74f);
       glVertex2f(0.94f, 0.74f);
       glVertex2f(0.94f, 0.71f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.85f, 0.43f);
       glVertex2f(0.85f, 0.65f);
       glVertex2f(0.96f, 0.65f);
       glVertex2f(0.96f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING DOOR
	   glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.89f, 0.43f);
       glVertex2f(0.89f, 0.49f);
       glVertex2f(0.92f, 0.49f);
       glVertex2f(0.92f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.6f);
       glVertex2f(0.9f, 0.6f);
       glVertex2f(0.9f, 0.58f);
       glVertex2f(0.88f, 0.58f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.55f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.9f, 0.53f);
       glVertex2f(0.88f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.55f);
       glVertex2f(0.93f, 0.55f);
       glVertex2f(0.93f, 0.53f);
       glVertex2f(0.91f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.6f);
       glVertex2f(0.93f, 0.6f);
       glVertex2f(0.93f, 0.58f);
       glVertex2f(0.91f, 0.58f);
	   glEnd();
          glTranslatef(+0.0f, 0.07f, 0.0f);
	   glBegin(GL_TRIANGLES);  // 1st TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
       /////////////////////  2nd
       glScalef(0.9,0.9,0);
       glTranslatef(0.13f, 0.05f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
//////////////////////////// 3rd
             glLoadIdentity();
       glScalef(1.1,1.2,0);
       glTranslatef(+0.16f, 0.0f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////
             glLoadIdentity();
      // glScalef(0,0,0);
       glTranslatef(+0.11f, 0.06f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////////////
       glLoadIdentity();
          glScalef(0.8,0.7,0);
        glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();

          glLoadIdentity();
          glPushMatrix();
         glTranslatef(BIG_SHIP_pos,0.0f, 0.0f);
         glBegin(GL_POLYGON);            // RIGHT BELOW SHIP LOWER BODY
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.45f, -0.15f);
	glVertex2f(0.9f, -0.15f);
	glVertex2f(0.8f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);  //RIGHT BELOW SHIP LOWER RED BODY
	{
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(0.3,-0.25f);
        glVertex2f(0.25f,-0.2f);
	    glVertex2f(0.85f,-0.2f);
	    glVertex2f(0.8f,-0.25f);
	    glEnd();
	}
	      glLineWidth(0.8);
	   glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.1f);
	  glVertex2f(0.25f, -0.05f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.05f);
	  glVertex2f(0.4f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.4f, -0.05f);
	  glVertex2f(0.4f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.3f, -0.1f);
	  glVertex2f(0.3f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.35f, -0.1f);
	  glVertex2f(0.35f, -0.05f);
      glEnd();

      glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER BLUE BODY

	    glColor3f(0.0f,0.0f,0.5f);
	    glVertex2f(0.5,-0.15f);
        glVertex2f(0.5f,-0.09f);
	    glVertex2f(0.6f,-0.09f);
	    glVertex2f(0.6f,-0.15f);
	    glEnd();

	    glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER RED BODY

	    glColor3f(.8f,0.0f,0.0f);
	    glVertex2f(0.68,-0.15f);
        glVertex2f(0.68f,-0.1f);
	    glVertex2f(0.85f,-0.1f);
	    glVertex2f(0.85f,-0.15f);
	    glEnd();

	    glLineWidth(1.4);
	   glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.52f, -0.15f);
	  glVertex2f(0.52f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.55f, -0.15f);
	  glVertex2f(0.55f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.58f, -0.15f);
	  glVertex2f(0.58f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.71f, -0.15f);
	  glVertex2f(0.71f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.74f, -0.15f);
	  glVertex2f(0.74f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.78f, -0.15f);
	  glVertex2f(0.78f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.62f, -0.15f);
	  glVertex2f(0.62f, -0.1f);
      glEnd();
      glPopMatrix();

        //////////////////////////speed boat start
           glLoadIdentity();
          glScalef(0.5,0.5,0);
          glTranslatef(+0.8f, 0.3f, 0.0f);

        glPushMatrix();
       glTranslatef(SPEED_BOAT_pos,0.0f, 0.0f);
      glBegin(GL_POLYGON);            //  RIGHT SIDE SPEEDBOAT WHITE PART
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.0f);

	glEnd();

	 glBegin(GL_QUADS);          // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.02f, 0.12f);
	glVertex2f(0.4f, 0.12f);
	glVertex2f(0.4f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);   // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.12f);
    glVertex2f(0.48f, 0.04f);
	glVertex2f(0.5f, 0.05f);
     glEnd();

     glBegin(GL_QUADS);   //  SIDE SPEEDBOAT BLACK PART
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.5f, 0.05f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.0f);
	 glVertex2f(0.5f, 0.0f);
     glEnd();

      glBegin(GL_QUADS);   //RIGHT  SIDE SPEEDBOAT GLASS
      glColor3f(0.0f, 0.9f, 1.0f);
     glVertex2f(0.1f, 0.15f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.3f, 0.25f);
	 glVertex2f(0.25f, 0.15f);
     glEnd();

              glLineWidth(2.5);
	  glBegin(GL_LINES);     // RIGHT SIDE SPEEDBOAT RED PART
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glVertex2f(0.3f, 0.15f);
	  glVertex2f(0.32f, 0.18f);
      glEnd();
      glPopMatrix();
      /////////////finis speed boat
////////sea border
         glLoadIdentity();   ////////SEA BORDER
      glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();
	}
	glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.22f);
        glVertex2f(1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.22f);
	    glEnd();
	}
       glLoadIdentity();
      glLineWidth(2.5);
	  glBegin(GL_LINES);     //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.95f, -0.18f);
	  glVertex2f(-0.95f, -0.3f);
      glEnd();

     glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.89f, -0.18f);
	  glVertex2f(-0.89f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
       glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.83f, -0.18f);
	  glVertex2f(-0.83f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.76f, -0.18f);
	  glVertex2f(-0.76f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.69f, -0.18f);
	  glVertex2f(-0.69f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.62f, -0.18f);
	  glVertex2f(-0.62f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.55f, -0.18f);
	  glVertex2f(-0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.48f, -0.18f);
	  glVertex2f(-0.48f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.41f, -0.18f);
	  glVertex2f(-0.41f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.34f, -0.18f);
	  glVertex2f(-0.34f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.27f, -0.18f);
	  glVertex2f(-0.27f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.20f, -0.18f);
	  glVertex2f(-0.20f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.13f, -0.18f);
	  glVertex2f(-0.13f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.05f, -0.18f);
	  glVertex2f(-0.05f, -0.3f);
      glEnd();

      glBegin(GL_LINES);             //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.02f, -0.18f);
	  glVertex2f(0.02f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.1f, -0.18f);
	  glVertex2f(0.1f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.17f, -0.18f);
	  glVertex2f(0.17f, -0.3f);
      glEnd();

       glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.25f, -0.18f);
	  glVertex2f(0.25f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.32f, -0.18f);
	  glVertex2f(0.32f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.40f, -0.18f);
	  glVertex2f(0.40f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.47f, -0.18f);
	  glVertex2f(0.47f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.55f, -0.18f);
	  glVertex2f(0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.62f, -0.18f);
	  glVertex2f(0.62f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.70f, -0.18f);
	  glVertex2f(0.70f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.77f, -0.18f);
	  glVertex2f(0.77f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.85f, -0.18f);
	  glVertex2f(0.85f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.92f, -0.18f);
	  glVertex2f(0.92f, -0.3f);
      glEnd();



	glPointSize(4.0);

glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,snow_pos, 0.0f);

//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////


    }
////////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==1)
    {

glLoadIdentity();
glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }



 glBegin(GL_QUADS);   ////////////sky
	    glColor3f(0.1f,0.1f,0.1f);
	    glVertex2f(1.0,0.45f);
        glVertex2f(1.0f,1.0f);
	    glVertex2f(-1.0f,1.0f);
	    glVertex2f(-1.0f,0.45f);
	    glEnd();

 glBegin(GL_POLYGON); //far far far mountain
{
	//glColor3f(0.0f, 0.9f, 0.0f); //green
glColor3f(1.0f, 1.0f, 1.0f);


    glVertex2f(1.0f, 0.4f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.4f);
	glEnd();

}

glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}
glBegin(GL_POLYGON); //far far far mountain snow
{
	glColor3f(1.0f, 1.0f, 1.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}

{///////far far land
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();
}



//Ship far away palboat
    {
        glLoadIdentity();
        glTranslatef(+0.0f, 0.25f, 0.0f);
        glTranslatef(palboat_pos_fs,0,0);

        glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glEnd();

        glColor3f(0.7,0.5,0.3);
        glBegin(GL_QUADS);
        glVertex2f(-0.005,0);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.005,0.5);
        glVertex2f(0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(0.01,0.25);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.04,0.3);
        glVertex2f(0.05,0.1);
        glVertex2f(-0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0.0,-0.05);
        glVertex2f(-0.2,-0.05);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glVertex2f(0.0,-0.05);
        glEnd();

        glLoadIdentity();
    }

    glBegin(GL_POLYGON); //far mountain
{
	glColor3f(0.0f,0.4f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.54f, -0.11f);
	glVertex2f(0.44f, -0.12f);
	glVertex2f(0.4f, -0.14f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.31f, -0.08f);
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.36f, 0.06f);
	glVertex2f(0.44f, 0.06f);
	glVertex2f(0.51f, 0.2f);
	glVertex2f(0.56f, 0.2f);
	glVertex2f(0.66f, 0.29f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}


   glBegin(GL_POLYGON); //far mountain house part////////////////////////
{
	glColor3f(0.0f,0.4f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}
///////////////////////////////////ship
       glLoadIdentity();
         // glScalef(0.8,0.7,0);
       // glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos_fs,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();
//////////////////////////ship finish

    glBegin(GL_POLYGON); //front mountain
{
	glColor3f(0.0f, 0.8f, 0.0f); //green
	glVertex2f(0.12f, -1.0f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.65f, 0.12f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.8f, 0.08f);
	glVertex2f(-0.9f, 0.14f);
	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}

///////////////far mountain on far far mountain extra part
/*
    glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}

*/




   glBegin(GL_POLYGON); //far mountain house part//////////////
{
	glColor3f(0.6f, 0.4f, 0.2f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}




//////////////////////////////////////house start
 glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {2,2,1.5,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
glBegin(GL_QUADS);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.44f);
    glVertex2f(-0.79f, -0.44f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.54f, -0.84f);
    glEnd();
}
glBegin(GL_POLYGON);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.84f);
	glVertex2f(-0.54f, -0.44f);
	glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.31f, -0.84f);


    glEnd();
}
glDisable(GL_LIGHTING);
glBegin(GL_QUADS);//// near house red part
{
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.58f, -0.55f);
    glVertex2f(-0.82f, -0.44f);
    glVertex2f(-0.68f, -0.06f);
    glEnd();
}
glBegin(GL_TRIANGLES);//// near house 1
{
	glColor3f(1.0f, 0.2f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.49f, -0.33f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}


glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.33f);
	glVertex2f(-0.58f, -0.55f);
	glVertex2f(-0.57f, -0.59f);
    glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
 glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.28f, -0.6f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
{//////////////////////////////bari black
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -1.0f);
	glVertex2f(-0.54f, -0.5f);
    glEnd();
}

////////////////////////////////house finis 1
///////////////tree start
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);
    glVertex2f(0.07f, -1.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.16f, -0.2f);
    glVertex2f(0.13f, -1.0f);


    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.072f, 0.22f);
    glVertex2f(0.13f, -0.2f);

    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(0.162f, 0.22f);
    glVertex2f(0.16f, -0.2f);

    glEnd();
}
glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(0.04f, 0.1f);
    glVertex2f(-0.05f, 0.06f);
    glVertex2f(-0.14f, 0.24f);

    glVertex2f(-0.07f, 0.47f);
    glVertex2f(-0.04f, 0.72f);
    glVertex2f(0.06f, 0.8f);
    glVertex2f(0.19f, 0.74f);

    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.36f, 0.1f);
    glVertex2f(0.2f, 0.2f);

    glVertex2f(0.18f, 0.02f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.15f, 0.01f);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.1f, 0.07f);
    glEnd();
}
////////////////////////////
glBegin(GL_POLYGON); //////jhao
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.04f, -1.0f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.78f);
    glVertex2f(-0.28f, -0.62f);

    glVertex2f(-0.35f, -0.86f);
    glVertex2f(-0.41f, -0.8f);
    glVertex2f(-0.48f, -0.88f);
    glVertex2f(-0.56f, -0.7f);


    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}

glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);


     glVertex2f(-0.64f, -0.78f);
    glVertex2f(-0.67f, -0.58f);
    glVertex2f(-0.77f, -0.65f);
    glVertex2f(-0.8f, -0.5f);

    glVertex2f(-0.88f, -0.44f);
    glVertex2f(-0.92f, -0.24f);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.8f, -1.0f);

    glEnd();
}


/////////////////jhao end

glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.48f);
    glVertex2f(-0.38f, -0.4f);
    glVertex2f(-0.44f, -0.4f);
    glVertex2f(-0.44f, -0.48f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.45f, -0.5f);
    glVertex2f(-0.51f, -0.5f);
    glVertex2f(-0.51f, -0.6f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.6f);
    glVertex2f(-0.34f, -0.5f);
    glVertex2f(-0.38f, -0.5f);
    glVertex2f(-0.38f, -0.6f);
    glEnd();
}
/////////////finis windows
/////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;snow
glPointSize(4.0);

glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,snow_pos, 0.0f);

//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
    glEnd();
    glLoadIdentity();
//////////////////////////////////////////////



    }
/////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==2)
    {

glLoadIdentity();
glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }

    //////////////////////////////////////// BIRDS
      glLoadIdentity();
      glPushMatrix();
      glTranslatef(bird_pos,0.0f, 0.0f);
      glLineWidth(2.5);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.45f, 0.75f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.35f, 0.75f);
       glEnd();
/////////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.05f, 0.85f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.65f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.55f, 0.85f);
       glEnd();
///////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.05f, 0.85f);
       glEnd();
       ///////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.15f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.05f, 0.6f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.55f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.45f, 0.85f);
       glEnd();
       ////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.25f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.15f, 0.6f);
       glEnd();  // BIRD FINISHED
       glPopMatrix();


    ////////////////////////////////////////
       glLoadIdentity();
	        glBegin(GL_QUADS);
	     glColor3f(0.4f, 0.3f, 0.0f);    //SEA SHORE
         glVertex2f(-1.0f, -1.0f);
	    glVertex2f(-1.0f, -0.4f);
	    glVertex2f(1.0f, -0.4f);
	    glVertex2f(1.0f, -1.0f);
        glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    //SEA
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

         glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,sea_pos, 0.0f);
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    // UPPER SEA
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
    glEnd();
    glPopMatrix();
   ////////////////////////////////
          glLoadIdentity();
          glPushMatrix();
          glTranslatef(right_boat_pos,0.0f, 0.0f);
       glBegin(GL_QUADS);              // RIGHT BOAT
	   glColor3f(0.7f, 0.7f, 0.0f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
	   glPopMatrix();
//////////////////////////////////////  2ND BOAT
       glPushMatrix();
       glTranslatef(left_boat_pos,0.0f, 0.0f);
       glTranslatef(-1.4f, -0.2f, 0.0f);
       glBegin(GL_QUADS);              // LEFT BOAT
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
       glPopMatrix();





       	glPointSize(4.0);

glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,snow_pos, 0.0f);

//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -1.0f);
    glEnd();
//////////////////////////////////////////////
//////////////////////////////////////////////
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.2f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.4f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.8f);
    glEnd();

    glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
    glEnd();
//////////////////////////////////////////////


    }


        }
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(rainingDay)
        {

if(scene==0)
    {
      glLoadIdentity();

      glBegin(GL_QUADS);  ////////bottom road
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-1.0f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(-1.0f,-0.7f);
	    glVertex2f(-1.0f,-1.0f);
	    glEnd();
	}
	////////upper road
	glBegin(GL_QUADS);
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.65f);
	    glEnd();
	}
	////////road middle border
	glBegin(GL_QUADS);
	{
	    glColor3f(1.39f, .69f, .19f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.7f);
	    glEnd();
	}
	//////////////////////roads white strips
	glLoadIdentity();
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.86f);
        glVertex2f(-0.65f,-0.85f);
	    glVertex2f(-0.95f,-0.85f);
	    glVertex2f(-0.95f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.86f);
        glVertex2f(-0.15f,-0.85f);
	    glVertex2f(-0.45f,-0.85f);
	    glVertex2f(-0.45f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.86f);
        glVertex2f(0.35f,-0.85f);
	    glVertex2f(0.05f,-0.85f);
	    glVertex2f(0.05f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.86f);
        glVertex2f(0.85f,-0.85f);
	    glVertex2f(0.55f,-0.85f);
	    glVertex2f(0.55f,-0.86f);
	    glEnd();
	}
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.51f);
        glVertex2f(-0.65f,-0.50f);
	    glVertex2f(-0.95f,-0.50f);
	    glVertex2f(-0.95f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.51f);
        glVertex2f(-0.15f,-0.50f);
	    glVertex2f(-0.45f,-0.50f);
	    glVertex2f(-0.45f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.51f);
        glVertex2f(0.35f,-0.50f);
	    glVertex2f(0.05f,-0.50f);
	    glVertex2f(0.05f,-0.51f);
	    glEnd();
	}
       glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.51f);
        glVertex2f(0.85f,-0.50f);
	    glVertex2f(0.55f,-0.50f);
	    glVertex2f(0.55f,-0.51f);
	    glEnd();
	}
/////////////done road
////////////////////////////////////////car start
glLoadIdentity();
glPushMatrix();
glTranslatef(carposition, 0.0f,0.0f);

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.71f, -0.45f);
	glVertex2f(-0.71f, -0.38f);
	glVertex2f(-0.67f, -0.38f);
	glVertex2f(-0.64f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.45f, -0.45f);
	glVertex2f(-0.61f, -0.36f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.36f);
    glVertex2f(-0.58f, -0.45f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex2f(-0.85f, -0.48f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.71f, -0.41f);
	glVertex2f(-0.7f, -0.43f);
	glVertex2f(-0.55f, -0.43f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.41f, -0.41f);
	glVertex2f(-0.41f, -0.48f);
	glEnd();


  int i_car;
  GLfloat x_car=-0.55f; GLfloat y_car=-0.48f; GLfloat radius_car =.035f;
  int triangleAmount_car = 20;
  GLfloat twicePi_car = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car, y_car);
		for(i_car = 0; i_car <= triangleAmount_car;i_car++)
            {
			glVertex2f
			(
                x_car + (radius_car * cos(i_car * twicePi_car / triangleAmount_car)),
			    y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
			);
		    }
	    glEnd();


	    int i_car_2;
  GLfloat x_car_2=-0.7f; GLfloat y_car_2=-0.48f; GLfloat radius_car_2 =.035f;
  int triangleAmount_car_2 = 20;
  GLfloat twicePi_car_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car_2, y_car_2);
		for(i_car_2 = 0; i_car_2 <= triangleAmount_car_2;i_car_2++)
            {
			glVertex2f
			(
                x_car_2 + (radius_car_2 * cos(i_car_2 * twicePi_car_2 / triangleAmount_car_2)),
			    y_car_2 + (radius_car_2 * sin(i_car_2 * twicePi_car_2 / triangleAmount_car_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
////////////////////////////////////////car end
/////////////////truck start
glLoadIdentity();
    glPushMatrix();
    glTranslatef(truck_position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(0.43f, -0.44f);
	glVertex2f(0.5f, -0.44f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.58f, -0.5f);
	glVertex2f(0.58f, -0.6f);
	glVertex2f(0.43f, -0.6f);

	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 0.4f);
    glVertex2f(0.43f, -0.6f);
	glVertex2f(0.43f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.52f, -0.5f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.49f, -0.45f);
    glEnd();


 int i_truck;
  GLfloat x_truck=0.5f; GLfloat y_truck=-0.6f; GLfloat radius_truck =.04f;
  int triangleAmount_truck = 20;
  GLfloat twicePi_truck = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck, y_truck);
		for(i_truck = 0; i_truck <= triangleAmount_truck;i_truck++)
            {
			glVertex2f
			(
                x_truck + (radius_truck * cos(i_truck * twicePi_truck / triangleAmount_truck)),
			    y_truck + (radius_truck * sin(i_truck * twicePi_truck / triangleAmount_truck))
			);
		    }
	    glEnd();



    int i_truck_2;
  GLfloat x_truck_2=0.25f; GLfloat y_truck_2=-0.6f; GLfloat radius_truck_2 =.04f;
  int triangleAmount_truck_2 = 20;
  GLfloat twicePi_truck_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck_2, y_truck_2);
		for(i_truck_2 = 0; i_truck_2 <= triangleAmount_truck_2;i_truck_2++)
            {
			glVertex2f
			(
                x_truck_2 + (radius_truck_2 * cos(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2)),
			    y_truck_2 + (radius_truck_2 * sin(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2))
			);
		    }
	    glEnd();

	    glPopMatrix();
///////////////////truck finis

////////////////////////////////////////redcar start
glLoadIdentity();
glPushMatrix();
glTranslatef(redcar_position1,redcar_position2, 0.0f);


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.835f);
	glVertex2f(0.1f, -0.755f);
	glVertex2f(0.22f, -0.755f);
	glVertex2f(0.23f, -0.7f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.45f, -0.755f);
	glVertex2f(0.52f, -0.755f);
	glVertex2f(0.52f, -0.835f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(0.2f, -0.755f);
	glVertex2f(0.26f, -0.71f);
	glVertex2f(0.38f, -0.71f);
	glVertex2f(0.41f, -0.755f);
    glEnd();


    int i_redcar_2;
  GLfloat x_redcar_2=0.22f; GLfloat y_redcar_2=-0.84f; GLfloat radius_redcar_2 =.035f;
  int triangleAmount_redcar_2 = 20;
  GLfloat twicePi_redcar_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar_2, y_redcar_2);
		for(i_redcar_2 = 0; i_redcar_2 <= triangleAmount_redcar_2;i_redcar_2++)
            {
			glVertex2f
			(
                x_redcar_2 + (radius_redcar_2 * cos(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2)),
			    y_redcar_2 + (radius_redcar_2 * sin(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2))
			);
		    }
	    glEnd();

  int i_redcar;
  GLfloat x_redcar=0.45f; GLfloat y_redcar=-0.84f; GLfloat radius_redcar =.035f;
  int triangleAmount_redcar = 20;
  GLfloat twicePi_redcar = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar, y_redcar);
		for(i_redcar = 0; i_redcar <= triangleAmount_redcar;i_redcar++)
            {
			glVertex2f
			(
                x_redcar + (radius_redcar * cos(i_redcar * twicePi_redcar / triangleAmount_redcar)),
			    y_redcar + (radius_redcar * sin(i_redcar * twicePi_redcar / triangleAmount_redcar))
			);
		    }
	    glEnd();
glPopMatrix();

////////////////////////////////////////redcar end

/////////////////bus start
glLoadIdentity();
glPushMatrix();
glTranslatef(bus_position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68f, -0.92f);
	glVertex2f(-0.68f, -0.71f);
	glVertex2f(-0.3f, -0.71f);
	glVertex2f(-0.3f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.85f, 1.0f);
	glVertex2f(-0.59f, -0.87f);
	glVertex2f(-0.55f, -0.83f);
	glVertex2f(-0.31f, -0.83f);
	glVertex2f(-0.31f, -0.77f);
	glVertex2f(-0.59f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.9f);
	glVertex2f(-0.64f, -0.74f);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.9f);
    glEnd();

    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.77);
	glVertex2f(-0.55f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.77);
	glVertex2f(-0.5f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.45f, -0.77);
	glVertex2f(-0.45f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.77);
	glVertex2f(-0.4f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.77);
	glVertex2f(-0.35f, -0.84f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.79);
	glVertex2f(-0.61f, -0.83f);
    glEnd();
    }

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.68f, -0.9f);
	glVertex2f(-0.68f, -0.74f);
	glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.89f);
    glEnd();

    {/////////////////////////////bus stand

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.75f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.69f, -0.76f);
    glEnd();
    }

    glBegin(GL_TRIANGLES);
    {
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.69f, -0.8f);
    glEnd();
    }



 int i_bus;
  GLfloat x_bus=-0.35f; GLfloat y_bus=-0.91f; GLfloat radius_bus =.035f;
  int triangleAmount_bus = 20;
  GLfloat twicePi_bus = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus, y_bus);
		for(i_bus = 0; i_bus <= triangleAmount_bus;i_bus++)
            {
			glVertex2f
			(
                x_bus + (radius_bus * cos(i_bus * twicePi_bus / triangleAmount_bus)),
			    y_bus + (radius_bus * sin(i_bus * twicePi_bus / triangleAmount_bus))
			);
		    }
	    glEnd();



    int i_bus_2;
  GLfloat x_bus_2=-0.55f; GLfloat y_bus_2=-0.91f; GLfloat radius_bus_2 =.035f;
  int triangleAmount_bus_2 = 20;
  GLfloat twicePi_bus_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus_2, y_bus_2);
		for(i_bus_2 = 0; i_bus_2 <= triangleAmount_bus_2;i_bus_2++)
            {
			glVertex2f
			(
                x_bus_2 + (radius_bus_2 * cos(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2)),
			    y_bus_2 + (radius_bus_2 * sin(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
///////////////////bus finis


//////////////////

////////sea
         glLoadIdentity();
         glBegin(GL_QUADS);
	    glColor3f(0.0f,0.4f,1.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,0.35f);
	    glVertex2f(-1.0f,0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();

	    glBegin(GL_QUADS);     // GROUND
	    glColor3f(0.6f, 0.6f, 0.0f);
	    glVertex2f(1.0,0.35f);
        glVertex2f(1.0f,0.5f);
	    glVertex2f(-1.0f,0.5f);
	    glVertex2f(-1.0f,0.35f);
	    glEnd();
	     ///////////////////////////////////// RAIL LINE

       glLineWidth(1.4);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.37f);
	   glVertex2f(1.0f, 0.37f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.4f);
	   glVertex2f(1.0f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.95f, 0.37f);
	   glVertex2f(-0.95f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.85f, 0.37f);
	   glVertex2f(-0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.8f, 0.37f);
	   glVertex2f(-0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.75f, 0.37f);
	   glVertex2f(-0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.7f, 0.37f);
	   glVertex2f(-0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.65f, 0.37f);
	   glVertex2f(-0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.6f, 0.37f);
	   glVertex2f(-0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.55f, 0.37f);
	   glVertex2f(-0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.37f);
	   glVertex2f(-0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.45f, 0.37f);
	   glVertex2f(-0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.4f, 0.37f);
	   glVertex2f(-0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.35f, 0.37f);
	   glVertex2f(-0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.3f, 0.37f);
	   glVertex2f(-0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.25f, 0.37f);
	   glVertex2f(-0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.2f, 0.37f);
	   glVertex2f(-0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.15f, 0.37f);
	   glVertex2f(-0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.37f);
	   glVertex2f(-0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.05f, 0.37f);
	   glVertex2f(-0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.0f, 0.37f);
	   glVertex2f(0.0f, 0.4f);
       glEnd();
        glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.05f, 0.37f);
	   glVertex2f(0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.37f);
	   glVertex2f(0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.15f, 0.37f);
	   glVertex2f(0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.37f);
	   glVertex2f(0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.25f, 0.37f);
	   glVertex2f(0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.3f, 0.37f);
	   glVertex2f(0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.35f, 0.37f);
	   glVertex2f(0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.37f);
	   glVertex2f(0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.45f, 0.37f);
	   glVertex2f(0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.37f);
	   glVertex2f(0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.55f, 0.37f);
	   glVertex2f(0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.37f);
	   glVertex2f(0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.65f, 0.37f);
	   glVertex2f(0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.7f, 0.37f);
	   glVertex2f(0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.37f);
	   glVertex2f(0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.8f, 0.37f);
	   glVertex2f(0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.85f, 0.37f);
	   glVertex2f(0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.9f, 0.37f);
	   glVertex2f(0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.95f, 0.37f);
	   glVertex2f(0.95f, 0.4f);
       glEnd();
	   ///////////
	   ///////////// TRAIN STARTS
	   glPushMatrix();
       glTranslatef(train_pos,0.0f, 0.0f);
	   glBegin(GL_POLYGON);            //
	   glColor3f(0.7f, 0.7f, 0.7f); // TRAIN
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.43f);
	   glVertex2f(-0.1f, 0.43f);
	   glVertex2f(0.0f, 0.38f);
	   glVertex2f(0.0f, 0.37f);
       glEnd();

       glLineWidth(2.5);
	glBegin(GL_LINES);              // TRAIN MIDDLE BORDER
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(-0.5f, 0.43f);
    glEnd();

        glBegin(GL_QUADS);              // TRAIN FRONT BLACK WINDOW
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.43f);
	glVertex2f(-0.2f, 0.43f);
	glVertex2f(-0.2f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
    glEnd();

    glBegin(GL_POLYGON);              // TRAIN BELOW BORDER
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.9f, 0.37f);
	glVertex2f(-0.9f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
	glVertex2f(0.0f, 0.38f);
	glVertex2f(0.0f, 0.37f);
    glEnd();

    glPointSize(4.0);
	glBegin(GL_POINTS);              // TRAIN WHEEL
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.37f);
	glVertex2f(-0.45f, 0.37f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.15f, 0.37f);
	glVertex2f(-0.8f, 0.37f);
	glVertex2f(-0.75f, 0.37f);
	glVertex2f(-0.6f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
    glEnd();
////////////////////// TRAIN WHEEL DONE
///////////////////// TRAIN WINDOW
    glLineWidth(2.0);
	glBegin(GL_LINES);              //
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.85f, 0.41f);
	glVertex2f(-0.55f, 0.41f);
	glVertex2f(-0.45f, 0.41f);
	glVertex2f(-0.25f, 0.41f);
    glEnd();
    glPopMatrix();
    ////////////////// TRAIN WINDOW DONE

	   glBegin(GL_POLYGON);         //RIGHT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.45f, 0.45f);
       glVertex2f(-0.4f, 0.5f);
       glVertex2f(-0.4f, 0.55f);
       glVertex2f(-0.25f, 0.6f);
       glVertex2f(-0.35f, 0.65f);
	   glVertex2f(-0.2f, 0.8f);
	   glVertex2f(0.0f, 0.6f);
       glVertex2f(0.25f,  0.45f);
       glEnd();

	   glBegin(GL_POLYGON);       //LEFT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.95f, 0.45f);
	   glVertex2f(-0.7f, 0.6f);
       glVertex2f(-0.8f, 0.75f);
       glVertex2f(-0.6f, 0.88f);
       glVertex2f(-0.5f, 0.65f);
       glVertex2f(-0.4f, 0.58f);
	   glVertex2f(-.3f,  0.45f);
       glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING
	   glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(0.43f, 0.45f);
	   glVertex2f(0.43f, 0.8f);
	   glVertex2f(0.63f, 0.8f);
	   glVertex2f(0.63f, 0.45f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING DOOR
	   glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(0.5f, 0.45f);
	   glVertex2f(0.5f, 0.55f);
	   glVertex2f(0.55f, 0.55f);
	   glVertex2f(0.55f, 0.45f);
	   glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f, 0.75f);
	   glVertex2f(0.5f, 0.75f);
	   glVertex2f(0.5f, 0.7f);
	   glVertex2f(0.45f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f, 0.75f);
	   glVertex2f(0.6f, 0.75f);
	   glVertex2f(0.6f, 0.7f);
	   glVertex2f(0.55f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f,0.65f);
	   glVertex2f(0.5f,0.65f);
	   glVertex2f(0.5f,0.6f);
	   glVertex2f(0.45f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f,0.65f);
	   glVertex2f(0.6f,0.65f);
	   glVertex2f(0.6f,0.6f);
	   glVertex2f(0.55f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // MIDDLE BUILDING
	   glColor3f(0.0f, 0.4f, 0.4f);
       glVertex2f(0.64f, 0.45f);
	   glVertex2f(0.64f, 0.85f);
	   glVertex2f(0.85f, 0.85f);
	   glVertex2f(0.85f, 0.45f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.5f);
	  glVertex2f(0.85f, 0.5f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.55f);
	  glVertex2f(0.85f, 0.55f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.6f);
	  glVertex2f(0.85f, 0.6f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.65f);
	  glVertex2f(0.85f, 0.65f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.7f);
	  glVertex2f(0.85f, 0.7f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.75f);
	  glVertex2f(0.85f, 0.75f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.8f);
	  glVertex2f(0.85f, 0.8f);
      glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.83f, 0.65f);
       glVertex2f(0.83f, 0.68f);
       glVertex2f(0.98f, 0.68f);
       glVertex2f(0.98f, 0.65f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.85f, 0.68f);
       glVertex2f(0.85f, 0.71f);
       glVertex2f(0.96f, 0.71f);
       glVertex2f(0.96f, 0.68f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.87f, 0.71f);
       glVertex2f(0.87f, 0.74f);
       glVertex2f(0.94f, 0.74f);
       glVertex2f(0.94f, 0.71f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.85f, 0.43f);
       glVertex2f(0.85f, 0.65f);
       glVertex2f(0.96f, 0.65f);
       glVertex2f(0.96f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING DOOR
	   glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.89f, 0.43f);
       glVertex2f(0.89f, 0.49f);
       glVertex2f(0.92f, 0.49f);
       glVertex2f(0.92f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.6f);
       glVertex2f(0.9f, 0.6f);
       glVertex2f(0.9f, 0.58f);
       glVertex2f(0.88f, 0.58f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.55f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.9f, 0.53f);
       glVertex2f(0.88f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.55f);
       glVertex2f(0.93f, 0.55f);
       glVertex2f(0.93f, 0.53f);
       glVertex2f(0.91f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.6f);
       glVertex2f(0.93f, 0.6f);
       glVertex2f(0.93f, 0.58f);
       glVertex2f(0.91f, 0.58f);
	   glEnd();
          glTranslatef(+0.0f, 0.07f, 0.0f);
	   glBegin(GL_TRIANGLES);  // 1st TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
       /////////////////////  2nd
       glScalef(0.9,0.9,0);
       glTranslatef(0.13f, 0.05f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
//////////////////////////// 3rd
             glLoadIdentity();
       glScalef(1.1,1.2,0);
       glTranslatef(+0.16f, 0.0f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////
             glLoadIdentity();
      // glScalef(0,0,0);
       glTranslatef(+0.11f, 0.06f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////////////
       glLoadIdentity();
          glScalef(0.8,0.7,0);
        glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();

          glLoadIdentity();
          glPushMatrix();
         glTranslatef(BIG_SHIP_pos,0.0f, 0.0f);
         glBegin(GL_POLYGON);            // RIGHT BELOW SHIP LOWER BODY
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.45f, -0.15f);
	glVertex2f(0.9f, -0.15f);
	glVertex2f(0.8f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);  //RIGHT BELOW SHIP LOWER RED BODY
	{
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(0.3,-0.25f);
        glVertex2f(0.25f,-0.2f);
	    glVertex2f(0.85f,-0.2f);
	    glVertex2f(0.8f,-0.25f);
	    glEnd();
	}
	      glLineWidth(0.8);
	   glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.1f);
	  glVertex2f(0.25f, -0.05f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.05f);
	  glVertex2f(0.4f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.4f, -0.05f);
	  glVertex2f(0.4f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.3f, -0.1f);
	  glVertex2f(0.3f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.35f, -0.1f);
	  glVertex2f(0.35f, -0.05f);
      glEnd();

      glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER BLUE BODY

	    glColor3f(0.0f,0.0f,0.5f);
	    glVertex2f(0.5,-0.15f);
        glVertex2f(0.5f,-0.09f);
	    glVertex2f(0.6f,-0.09f);
	    glVertex2f(0.6f,-0.15f);
	    glEnd();

	    glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER RED BODY

	    glColor3f(.8f,0.0f,0.0f);
	    glVertex2f(0.68,-0.15f);
        glVertex2f(0.68f,-0.1f);
	    glVertex2f(0.85f,-0.1f);
	    glVertex2f(0.85f,-0.15f);
	    glEnd();

	    glLineWidth(1.4);
	   glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.52f, -0.15f);
	  glVertex2f(0.52f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.55f, -0.15f);
	  glVertex2f(0.55f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.58f, -0.15f);
	  glVertex2f(0.58f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.71f, -0.15f);
	  glVertex2f(0.71f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.74f, -0.15f);
	  glVertex2f(0.74f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.78f, -0.15f);
	  glVertex2f(0.78f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.62f, -0.15f);
	  glVertex2f(0.62f, -0.1f);
      glEnd();
      glPopMatrix();

        //////////////////////////speed boat start
           glLoadIdentity();
          glScalef(0.5,0.5,0);
          glTranslatef(+0.8f, 0.3f, 0.0f);

        glPushMatrix();
       glTranslatef(SPEED_BOAT_pos,0.0f, 0.0f);
      glBegin(GL_POLYGON);            //  RIGHT SIDE SPEEDBOAT WHITE PART
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.0f);

	glEnd();

	 glBegin(GL_QUADS);          // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.02f, 0.12f);
	glVertex2f(0.4f, 0.12f);
	glVertex2f(0.4f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);   // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.12f);
    glVertex2f(0.48f, 0.04f);
	glVertex2f(0.5f, 0.05f);
     glEnd();

     glBegin(GL_QUADS);   //  SIDE SPEEDBOAT BLACK PART
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.5f, 0.05f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.0f);
	 glVertex2f(0.5f, 0.0f);
     glEnd();

      glBegin(GL_QUADS);   //RIGHT  SIDE SPEEDBOAT GLASS
      glColor3f(0.0f, 0.9f, 1.0f);
     glVertex2f(0.1f, 0.15f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.3f, 0.25f);
	 glVertex2f(0.25f, 0.15f);
     glEnd();

              glLineWidth(2.5);
	  glBegin(GL_LINES);     // RIGHT SIDE SPEEDBOAT RED PART
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glVertex2f(0.3f, 0.15f);
	  glVertex2f(0.32f, 0.18f);
      glEnd();
      glPopMatrix();
      /////////////finis speed boat
////////sea border
         glLoadIdentity();   ////////SEA BORDER
      glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();
	}
	glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.22f);
        glVertex2f(1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.22f);
	    glEnd();
	}
       glLoadIdentity();
      glLineWidth(2.5);
	  glBegin(GL_LINES);     //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.95f, -0.18f);
	  glVertex2f(-0.95f, -0.3f);
      glEnd();

     glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.89f, -0.18f);
	  glVertex2f(-0.89f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
       glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.83f, -0.18f);
	  glVertex2f(-0.83f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.76f, -0.18f);
	  glVertex2f(-0.76f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.69f, -0.18f);
	  glVertex2f(-0.69f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.62f, -0.18f);
	  glVertex2f(-0.62f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.55f, -0.18f);
	  glVertex2f(-0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.48f, -0.18f);
	  glVertex2f(-0.48f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.41f, -0.18f);
	  glVertex2f(-0.41f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.34f, -0.18f);
	  glVertex2f(-0.34f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.27f, -0.18f);
	  glVertex2f(-0.27f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.20f, -0.18f);
	  glVertex2f(-0.20f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.13f, -0.18f);
	  glVertex2f(-0.13f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.05f, -0.18f);
	  glVertex2f(-0.05f, -0.3f);
      glEnd();

      glBegin(GL_LINES);             //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.02f, -0.18f);
	  glVertex2f(0.02f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.1f, -0.18f);
	  glVertex2f(0.1f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.17f, -0.18f);
	  glVertex2f(0.17f, -0.3f);
      glEnd();

       glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.25f, -0.18f);
	  glVertex2f(0.25f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.32f, -0.18f);
	  glVertex2f(0.32f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.40f, -0.18f);
	  glVertex2f(0.40f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.47f, -0.18f);
	  glVertex2f(0.47f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.55f, -0.18f);
	  glVertex2f(0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.62f, -0.18f);
	  glVertex2f(0.62f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.70f, -0.18f);
	  glVertex2f(0.70f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.77f, -0.18f);
	  glVertex2f(0.77f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.85f, -0.18f);
	  glVertex2f(0.85f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.92f, -0.18f);
	  glVertex2f(0.92f, -0.3f);
      glEnd();
      //////////////////////////////////////////////////












////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position,0.0f, 0.0f);
glColor3f(0.8f,1.0f,1.0f);
 int k;
    GLfloat a=0.87f; GLfloat b=0.77f; GLfloat c =.05f;
	int amt = 20;
	GLfloat twice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(k = 0; k <= amt;k++)
            {
			glVertex2f(
                a + (c * cos(k *  twice_Pi / amt)),
			    b + (c * sin(k * twice_Pi / amt))
			          );
            }
	glEnd();
////////////

glColor3f(0.8f,1.0f,1.0f);
 int l;
    GLfloat d=0.72f; GLfloat e=0.74f; GLfloat f =.06f;
	int amtt = 20;
	GLfloat twice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(d, e);
		for(l = 0; l <= amtt;l++)
            {
			glVertex2f(
                d + (f * cos(l *  twice_pi / amtt)),
			    e + (f * sin(l * twice_pi / amtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.8f,1.0f,1.0f);
 int ll;
    GLfloat dd=0.78f; GLfloat ee=0.79f; GLfloat ff =.08f;
	int amot = 20;
	GLfloat tpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(dd, ee);
		for(ll = 0; ll <= amot;ll++)
            {
			glVertex2f(
                dd + (ff * cos(ll *  tpi / amot)),
			    ee + (ff * sin(ll * tpi / amot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position2,0.0f, 0.0f);
glColor3f(0.8f,1.0f,1.0f);
 int wk;
    GLfloat wa=0.7f; GLfloat wb=0.77f; GLfloat wc =.05f;
	int wamt = 20;
	GLfloat wtwice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wa, wb);
		for(wk = 0; wk <= wamt;wk++)
            {
			glVertex2f(
                wa + (wc * cos(wk *  wtwice_Pi / wamt)),
			    wb + (wc * sin(wk * wtwice_Pi / wamt))
			          );
            }
	glEnd();
////////////

glColor3f(0.8f,1.0f,1.0f);
 int wl;
    GLfloat wd=0.68f; GLfloat we=0.74f; GLfloat wf =.06f;
	int wamtt = 20;
	GLfloat wtwice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wd, we);
		for(wl = 0; wl <= wamtt;wl++)
            {
			glVertex2f(
                wd + (wf * cos(wl *  wtwice_pi / wamtt)),
			    we + (wf * sin(wl * wtwice_pi / wamtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.8f,1.0f,1.0f);
 int wll;
    GLfloat wdd=0.78f; GLfloat wee=0.74f; GLfloat wff =.08f;
	int wamot = 20;
	GLfloat wtpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wdd, wee);
		for(wll = 0; wll <= wamot;wll++)
            {
			glVertex2f(
                wdd + (wff * cos(wll *  wtpi / wamot)),
			    wee + (wff * sin(wll * wtpi / wamot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

	//glPointSize(4.0);

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,rain_pos, 0.0f);

//////////////////////////////////////////
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.95f);
	glVertex2f(0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.8f);
	glVertex2f(0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.65f);
	glVertex2f(0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.35f);
	glVertex2f(0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.05f);
	glVertex2f(0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.1f);
	glVertex2f(0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.25f);
	glVertex2f(0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.4f);
	glVertex2f(0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.55f);
	glVertex2f(0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.7f);
	glVertex2f(0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.85f);
	glVertex2f(0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.95f);
	glVertex2f(0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.8f);
	glVertex2f(0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.65f);
	glVertex2f(0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.35f);
	glVertex2f(0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.05f);
	glVertex2f(0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.1f);
	glVertex2f(0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.4f);
	glVertex2f(0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.55f);
	glVertex2f(0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.7f);
	glVertex2f(0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.85f);
	glVertex2f(0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.95f);
	glVertex2f(0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.65f);
	glVertex2f(0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.05f);
	glVertex2f(0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.55f);
	glVertex2f(0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.7f);
	glVertex2f(0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.85f);
	glVertex2f(0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.95f);
	glVertex2f(0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.8f);
	glVertex2f(0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.65f);
	glVertex2f(0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.5f);
	glVertex2f(0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.05f);
	glVertex2f(0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.25f);
	glVertex2f(0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.7f);
	glVertex2f(0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.85f);
	glVertex2f(0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.95f);
	glVertex2f(0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.8f);
	glVertex2f(0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.35f);
	glVertex2f(0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.05f);
	glVertex2f(0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.25f);
	glVertex2f(0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.7f);
	glVertex2f(0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.85f);
	glVertex2f(0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.95f);
	glVertex2f(0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.8f);
	glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.65f);
	glVertex2f(0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.55f);
	glVertex2f(0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.95f);
	glVertex2f(0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.8f);
	glVertex2f(0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.65f);
	glVertex2f(0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.7f);
	glVertex2f(0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.85f);
	glVertex2f(0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.95f);
	glVertex2f(0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.55f);
	glVertex2f(0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.85f);
	glVertex2f(0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.95f);
	glVertex2f(0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.8f);
	glVertex2f(0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.65f);
	glVertex2f(0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.55f);
	glVertex2f(0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.7f);
	glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.85f);
	glVertex2f(0.15f, -0.95f);
    glEnd();////////////// 0.15 DONE
    //////// 0.05 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.95f);
	glVertex2f(0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.8f);
	glVertex2f(0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.7f);
	glVertex2f(0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.85f);
	glVertex2f(0.05f, -0.95f);
    glEnd();/////////// 0.05 DONE
    /////////////// -0.05 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.95f);
	glVertex2f(-0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(-0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(-0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.4f);
	glVertex2f(-0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(-0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.85f);
	glVertex2f(-0.05f, -0.95f);
    glEnd();////////////// -0.05 DONE
    ////////////////////

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.95f);
	glVertex2f(-0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.65f);
	glVertex2f(-0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.35f);
	glVertex2f(-0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.05f);
	glVertex2f(-0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.55f);
	glVertex2f(-0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.7f);
	glVertex2f(-0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.85f);
	glVertex2f(-0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.95f);
	glVertex2f(-0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.8f);
	glVertex2f(-0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.55f);
	glVertex2f(-0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.85f);
	glVertex2f(-0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.95f);
	glVertex2f(-0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.65f);
	glVertex2f(-0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.85f);
	glVertex2f(-0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.95f);
	glVertex2f(-0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.25f);
	glVertex2f(-0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.85f);
	glVertex2f(-0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.95f);
	glVertex2f(-0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.8f);
	glVertex2f(-0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.05f);
	glVertex2f(-0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.85f);
	glVertex2f(-0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.95f);
	glVertex2f(-0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.8f);
	glVertex2f(-0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.65f);
	glVertex2f(-0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.25f);
	glVertex2f(-0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.55f);
	glVertex2f(-0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.95f);
	glVertex2f(-0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.8f);
	glVertex2f(-0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.65f);
	glVertex2f(-0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.05f);
	glVertex2f(-0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.55f);
	glVertex2f(-0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.85f);
	glVertex2f(-0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.95f);
	glVertex2f(-0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.8f);
	glVertex2f(-0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.65f);
	glVertex2f(-0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(-0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.55f);
	glVertex2f(-0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.85f);
	glVertex2f(-0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.95f);
	glVertex2f(-0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.65f);
	glVertex2f(-0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.25f);
	glVertex2f(-0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.55f);
	glVertex2f(-0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.85f);
	glVertex2f(-0.15f, -0.95f);
    glEnd();
    glPopMatrix();





    }
////////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==1)
    {

 glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.4f); //green



    glVertex2f(1.0f, 0.4f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.4f);
	glEnd();

}
glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.2f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}
{///////far far land
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();
}



//Ship far away palboat
    {
        glLoadIdentity();
        glTranslatef(+0.0f, 0.25f, 0.0f);
        glTranslatef(palboat_pos_fs,0,0);

        glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glEnd();

        glColor3f(0.7,0.5,0.3);
        glBegin(GL_QUADS);
        glVertex2f(-0.005,0);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.005,0.5);
        glVertex2f(0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(0.01,0.25);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.04,0.3);
        glVertex2f(0.05,0.1);
        glVertex2f(-0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0.0,-0.05);
        glVertex2f(-0.2,-0.05);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glVertex2f(0.0,-0.05);
        glEnd();

        glLoadIdentity();
    }

    glBegin(GL_POLYGON); //far mountain
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.54f, -0.11f);
	glVertex2f(0.44f, -0.12f);
	glVertex2f(0.4f, -0.14f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.31f, -0.08f);
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.36f, 0.06f);
	glVertex2f(0.44f, 0.06f);
	glVertex2f(0.51f, 0.2f);
	glVertex2f(0.56f, 0.2f);
	glVertex2f(0.66f, 0.29f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}
   glBegin(GL_POLYGON); //far mountain house part
{
	glColor3f(1.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}
///////////////////////////////////ship
       glLoadIdentity();
         // glScalef(0.8,0.7,0);
       // glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos_fs,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();
//////////////////////////ship finish


    glBegin(GL_POLYGON); //front mountain
{
	glColor3f(0.0f, 0.8f, 0.0f); //green
	glVertex2f(0.12f, -1.0f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.65f, 0.12f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.8f, 0.08f);
	glVertex2f(-0.9f, 0.14f);
	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}
///////////////far mountain on far far mountain extra part

    glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}






   glBegin(GL_POLYGON); //far mountain house part
{
	glColor3f(1.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}




//////////////////////////////////////house start
glBegin(GL_QUADS);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.44f);
    glVertex2f(-0.79f, -0.44f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.54f, -0.84f);
    glEnd();
}
glBegin(GL_POLYGON);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.84f);
	glVertex2f(-0.54f, -0.44f);
	glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.31f, -0.84f);


    glEnd();
}
glBegin(GL_QUADS);//// near house red part
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.58f, -0.55f);
    glVertex2f(-0.82f, -0.44f);
    glVertex2f(-0.68f, -0.06f);
    glEnd();
}
glBegin(GL_TRIANGLES);//// near house 1
{
	glColor3f(1.0f, 0.2f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.49f, -0.33f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}


glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.33f);
	glVertex2f(-0.58f, -0.55f);
	glVertex2f(-0.57f, -0.59f);
    glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
 glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.28f, -0.6f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
{//////////////////////////////bari black
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -1.0f);
	glVertex2f(-0.54f, -0.5f);
    glEnd();
}

////////////////////////////////house finis 1
///////////////tree start
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);
    glVertex2f(0.07f, -1.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.16f, -0.2f);
    glVertex2f(0.13f, -1.0f);


    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.072f, 0.22f);
    glVertex2f(0.13f, -0.2f);

    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(0.162f, 0.22f);
    glVertex2f(0.16f, -0.2f);

    glEnd();
}
glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(0.04f, 0.1f);
    glVertex2f(-0.05f, 0.06f);
    glVertex2f(-0.14f, 0.24f);

    glVertex2f(-0.07f, 0.47f);
    glVertex2f(-0.04f, 0.72f);
    glVertex2f(0.06f, 0.8f);
    glVertex2f(0.19f, 0.74f);

    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.36f, 0.1f);
    glVertex2f(0.2f, 0.2f);

    glVertex2f(0.18f, 0.02f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.15f, 0.01f);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.1f, 0.07f);
    glEnd();
}
////////////////////////////
glBegin(GL_POLYGON); //////jhao
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.04f, -1.0f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.78f);
    glVertex2f(-0.28f, -0.62f);

    glVertex2f(-0.35f, -0.86f);
    glVertex2f(-0.41f, -0.8f);
    glVertex2f(-0.48f, -0.88f);
    glVertex2f(-0.56f, -0.7f);


    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}

glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);


     glVertex2f(-0.64f, -0.78f);
    glVertex2f(-0.67f, -0.58f);
    glVertex2f(-0.77f, -0.65f);
    glVertex2f(-0.8f, -0.5f);

    glVertex2f(-0.88f, -0.44f);
    glVertex2f(-0.92f, -0.24f);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.8f, -1.0f);

    glEnd();
}

/////////////////jhao end

glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.48f);
    glVertex2f(-0.38f, -0.4f);
    glVertex2f(-0.44f, -0.4f);
    glVertex2f(-0.44f, -0.48f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.45f, -0.5f);
    glVertex2f(-0.51f, -0.5f);
    glVertex2f(-0.51f, -0.6f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.6f);
    glVertex2f(-0.34f, -0.5f);
    glVertex2f(-0.38f, -0.5f);
    glVertex2f(-0.38f, -0.6f);
    glEnd();
}
/////////////finis windows












////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position,0.0f, 0.0f);
glColor3f(0.8f,1.0f,1.0f);
 int k;
    GLfloat a=0.87f; GLfloat b=0.77f; GLfloat c =.05f;
	int amt = 20;
	GLfloat twice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(k = 0; k <= amt;k++)
            {
			glVertex2f(
                a + (c * cos(k *  twice_Pi / amt)),
			    b + (c * sin(k * twice_Pi / amt))
			          );
            }
	glEnd();
////////////

glColor3f(0.8f,1.0f,1.0f);
 int l;
    GLfloat d=0.72f; GLfloat e=0.74f; GLfloat f =.06f;
	int amtt = 20;
	GLfloat twice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(d, e);
		for(l = 0; l <= amtt;l++)
            {
			glVertex2f(
                d + (f * cos(l *  twice_pi / amtt)),
			    e + (f * sin(l * twice_pi / amtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.8f,1.0f,1.0f);
 int ll;
    GLfloat dd=0.78f; GLfloat ee=0.79f; GLfloat ff =.08f;
	int amot = 20;
	GLfloat tpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(dd, ee);
		for(ll = 0; ll <= amot;ll++)
            {
			glVertex2f(
                dd + (ff * cos(ll *  tpi / amot)),
			    ee + (ff * sin(ll * tpi / amot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position2,0.0f, 0.0f);
glColor3f(0.8f,1.0f,1.0f);
 int wk;
    GLfloat wa=0.7f; GLfloat wb=0.77f; GLfloat wc =.05f;
	int wamt = 20;
	GLfloat wtwice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wa, wb);
		for(wk = 0; wk <= wamt;wk++)
            {
			glVertex2f(
                wa + (wc * cos(wk *  wtwice_Pi / wamt)),
			    wb + (wc * sin(wk * wtwice_Pi / wamt))
			          );
            }
	glEnd();
////////////

glColor3f(0.8f,1.0f,1.0f);
 int wl;
    GLfloat wd=0.68f; GLfloat we=0.74f; GLfloat wf =.06f;
	int wamtt = 20;
	GLfloat wtwice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wd, we);
		for(wl = 0; wl <= wamtt;wl++)
            {
			glVertex2f(
                wd + (wf * cos(wl *  wtwice_pi / wamtt)),
			    we + (wf * sin(wl * wtwice_pi / wamtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.8f,1.0f,1.0f);
 int wll;
    GLfloat wdd=0.78f; GLfloat wee=0.74f; GLfloat wff =.08f;
	int wamot = 20;
	GLfloat wtpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wdd, wee);
		for(wll = 0; wll <= wamot;wll++)
            {
			glVertex2f(
                wdd + (wff * cos(wll *  wtpi / wamot)),
			    wee + (wff * sin(wll * wtpi / wamot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

	//glPointSize(4.0);

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,rain_pos, 0.0f);

//////////////////////////////////////////
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.95f);
	glVertex2f(0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.8f);
	glVertex2f(0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.65f);
	glVertex2f(0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.35f);
	glVertex2f(0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.05f);
	glVertex2f(0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.1f);
	glVertex2f(0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.25f);
	glVertex2f(0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.4f);
	glVertex2f(0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.55f);
	glVertex2f(0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.7f);
	glVertex2f(0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.85f);
	glVertex2f(0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.95f);
	glVertex2f(0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.8f);
	glVertex2f(0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.65f);
	glVertex2f(0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.35f);
	glVertex2f(0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.05f);
	glVertex2f(0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.1f);
	glVertex2f(0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.4f);
	glVertex2f(0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.55f);
	glVertex2f(0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.7f);
	glVertex2f(0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.85f);
	glVertex2f(0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.95f);
	glVertex2f(0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.65f);
	glVertex2f(0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.05f);
	glVertex2f(0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.55f);
	glVertex2f(0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.7f);
	glVertex2f(0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.85f);
	glVertex2f(0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.95f);
	glVertex2f(0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.8f);
	glVertex2f(0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.65f);
	glVertex2f(0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.5f);
	glVertex2f(0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.05f);
	glVertex2f(0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.25f);
	glVertex2f(0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.7f);
	glVertex2f(0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.85f);
	glVertex2f(0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.95f);
	glVertex2f(0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.8f);
	glVertex2f(0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.35f);
	glVertex2f(0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.05f);
	glVertex2f(0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.25f);
	glVertex2f(0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.7f);
	glVertex2f(0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.85f);
	glVertex2f(0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.95f);
	glVertex2f(0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.8f);
	glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.65f);
	glVertex2f(0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.55f);
	glVertex2f(0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.95f);
	glVertex2f(0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.8f);
	glVertex2f(0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.65f);
	glVertex2f(0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.7f);
	glVertex2f(0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.85f);
	glVertex2f(0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.95f);
	glVertex2f(0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.55f);
	glVertex2f(0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.85f);
	glVertex2f(0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.95f);
	glVertex2f(0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.8f);
	glVertex2f(0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.65f);
	glVertex2f(0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.55f);
	glVertex2f(0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.7f);
	glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.85f);
	glVertex2f(0.15f, -0.95f);
    glEnd();////////////// 0.15 DONE
    //////// 0.05 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.95f);
	glVertex2f(0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.8f);
	glVertex2f(0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.7f);
	glVertex2f(0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.85f);
	glVertex2f(0.05f, -0.95f);
    glEnd();/////////// 0.05 DONE
    /////////////// -0.05 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.95f);
	glVertex2f(-0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(-0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(-0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.4f);
	glVertex2f(-0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(-0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.85f);
	glVertex2f(-0.05f, -0.95f);
    glEnd();////////////// -0.05 DONE
    ////////////////////

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.95f);
	glVertex2f(-0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.65f);
	glVertex2f(-0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.35f);
	glVertex2f(-0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.05f);
	glVertex2f(-0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.55f);
	glVertex2f(-0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.7f);
	glVertex2f(-0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.85f);
	glVertex2f(-0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.95f);
	glVertex2f(-0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.8f);
	glVertex2f(-0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.55f);
	glVertex2f(-0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.85f);
	glVertex2f(-0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.95f);
	glVertex2f(-0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.65f);
	glVertex2f(-0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.85f);
	glVertex2f(-0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.95f);
	glVertex2f(-0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.25f);
	glVertex2f(-0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.85f);
	glVertex2f(-0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.95f);
	glVertex2f(-0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.8f);
	glVertex2f(-0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.05f);
	glVertex2f(-0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.85f);
	glVertex2f(-0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.95f);
	glVertex2f(-0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.8f);
	glVertex2f(-0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.65f);
	glVertex2f(-0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.25f);
	glVertex2f(-0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.55f);
	glVertex2f(-0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.95f);
	glVertex2f(-0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.8f);
	glVertex2f(-0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.65f);
	glVertex2f(-0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.05f);
	glVertex2f(-0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.55f);
	glVertex2f(-0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.85f);
	glVertex2f(-0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.95f);
	glVertex2f(-0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.8f);
	glVertex2f(-0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.65f);
	glVertex2f(-0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(-0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.55f);
	glVertex2f(-0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.85f);
	glVertex2f(-0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.95f);
	glVertex2f(-0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.65f);
	glVertex2f(-0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.25f);
	glVertex2f(-0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.55f);
	glVertex2f(-0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.85f);
	glVertex2f(-0.15f, -0.95f);
    glEnd();
    glPopMatrix();




}
/////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==2)
    {


       glBegin(GL_QUADS);///////////
{
	glColor3f(0.4f, 0.8f, 1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

    ////////////////////////////////////// SUN
       glLoadIdentity();
	    int sun;
        GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.6f;
	    int triangleAmount = 200000;
        GLfloat twicePi = 2.0f * PI;
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.5f, 0.0f);
		glVertex2f(x, y);
		for(sun = 0;sun <= triangleAmount;sun++) {
			glVertex2f(
		            x + (radius * cos(sun *  twicePi / triangleAmount)),
			    y + (radius * sin(sun * twicePi / triangleAmount))
			);
		}
	    glEnd();
    //////////////////////////////////////// BIRDS
      glLoadIdentity();
      glPushMatrix();
      glTranslatef(bird_pos,0.0f, 0.0f);
      glLineWidth(2.5);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.45f, 0.75f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.35f, 0.75f);
       glEnd();
/////////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.05f, 0.85f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.65f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.55f, 0.85f);
       glEnd();
///////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.05f, 0.85f);
       glEnd();
       ///////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.15f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.05f, 0.6f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.55f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.45f, 0.85f);
       glEnd();
       ////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.25f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.15f, 0.6f);
       glEnd();  // BIRD FINISHED
       glPopMatrix();


    ////////////////////////////////////////
       glLoadIdentity();
	        glBegin(GL_QUADS);
	     glColor3f(0.8f, 0.8f, 0.0f);    //SEA SHORE
         glVertex2f(-1.0f, -1.0f);
	    glVertex2f(-1.0f, -0.4f);
	    glVertex2f(1.0f, -0.4f);
	    glVertex2f(1.0f, -1.0f);
        glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    //SEA
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

         glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,sea_pos, 0.0f);
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    // UPPER SEA
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
    glEnd();
    glPopMatrix();
   ////////////////////////////////
          glLoadIdentity();
          glPushMatrix();
          glTranslatef(right_boat_pos,0.0f, 0.0f);
       glBegin(GL_QUADS);              // RIGHT BOAT
	   glColor3f(0.7f, 0.7f, 0.0f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
	   glPopMatrix();
//////////////////////////////////////  2ND BOAT
       glPushMatrix();
       glTranslatef(left_boat_pos,0.0f, 0.0f);
       glTranslatef(-1.4f, -0.2f, 0.0f);
       glBegin(GL_QUADS);              // LEFT BOAT
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
       glPopMatrix();
       ///////////////////////////////












////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position,0.0f, 0.0f);
glColor3f(0.8f,1.0f,1.0f);
 int k;
    GLfloat a=0.87f; GLfloat b=0.77f; GLfloat c =.05f;
	int amt = 20;
	GLfloat twice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(k = 0; k <= amt;k++)
            {
			glVertex2f(
                a + (c * cos(k *  twice_Pi / amt)),
			    b + (c * sin(k * twice_Pi / amt))
			          );
            }
	glEnd();
////////////

glColor3f(0.8f,1.0f,1.0f);
 int l;
    GLfloat d=0.72f; GLfloat e=0.74f; GLfloat f =.06f;
	int amtt = 20;
	GLfloat twice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(d, e);
		for(l = 0; l <= amtt;l++)
            {
			glVertex2f(
                d + (f * cos(l *  twice_pi / amtt)),
			    e + (f * sin(l * twice_pi / amtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.8f,1.0f,1.0f);
 int ll;
    GLfloat dd=0.78f; GLfloat ee=0.79f; GLfloat ff =.08f;
	int amot = 20;
	GLfloat tpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(dd, ee);
		for(ll = 0; ll <= amot;ll++)
            {
			glVertex2f(
                dd + (ff * cos(ll *  tpi / amot)),
			    ee + (ff * sin(ll * tpi / amot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position2,0.0f, 0.0f);
glColor3f(0.8f,1.0f,1.0f);
 int wk;
    GLfloat wa=0.7f; GLfloat wb=0.77f; GLfloat wc =.05f;
	int wamt = 20;
	GLfloat wtwice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wa, wb);
		for(wk = 0; wk <= wamt;wk++)
            {
			glVertex2f(
                wa + (wc * cos(wk *  wtwice_Pi / wamt)),
			    wb + (wc * sin(wk * wtwice_Pi / wamt))
			          );
            }
	glEnd();
////////////

glColor3f(0.8f,1.0f,1.0f);
 int wl;
    GLfloat wd=0.68f; GLfloat we=0.74f; GLfloat wf =.06f;
	int wamtt = 20;
	GLfloat wtwice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wd, we);
		for(wl = 0; wl <= wamtt;wl++)
            {
			glVertex2f(
                wd + (wf * cos(wl *  wtwice_pi / wamtt)),
			    we + (wf * sin(wl * wtwice_pi / wamtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.8f,1.0f,1.0f);
 int wll;
    GLfloat wdd=0.78f; GLfloat wee=0.74f; GLfloat wff =.08f;
	int wamot = 20;
	GLfloat wtpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wdd, wee);
		for(wll = 0; wll <= wamot;wll++)
            {
			glVertex2f(
                wdd + (wff * cos(wll *  wtpi / wamot)),
			    wee + (wff * sin(wll * wtpi / wamot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

	//glPointSize(4.0);

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,rain_pos, 0.0f);

//////////////////////////////////////////
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.95f);
	glVertex2f(0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.8f);
	glVertex2f(0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.65f);
	glVertex2f(0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.35f);
	glVertex2f(0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.05f);
	glVertex2f(0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.1f);
	glVertex2f(0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.25f);
	glVertex2f(0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.4f);
	glVertex2f(0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.55f);
	glVertex2f(0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.7f);
	glVertex2f(0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.85f);
	glVertex2f(0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.95f);
	glVertex2f(0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.8f);
	glVertex2f(0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.65f);
	glVertex2f(0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.35f);
	glVertex2f(0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.05f);
	glVertex2f(0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.1f);
	glVertex2f(0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.4f);
	glVertex2f(0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.55f);
	glVertex2f(0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.7f);
	glVertex2f(0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.85f);
	glVertex2f(0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.95f);
	glVertex2f(0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.65f);
	glVertex2f(0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.05f);
	glVertex2f(0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.55f);
	glVertex2f(0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.7f);
	glVertex2f(0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.85f);
	glVertex2f(0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.95f);
	glVertex2f(0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.8f);
	glVertex2f(0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.65f);
	glVertex2f(0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.5f);
	glVertex2f(0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.05f);
	glVertex2f(0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.25f);
	glVertex2f(0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.7f);
	glVertex2f(0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.85f);
	glVertex2f(0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.95f);
	glVertex2f(0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.8f);
	glVertex2f(0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.35f);
	glVertex2f(0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.05f);
	glVertex2f(0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.25f);
	glVertex2f(0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.7f);
	glVertex2f(0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.85f);
	glVertex2f(0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.95f);
	glVertex2f(0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.8f);
	glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.65f);
	glVertex2f(0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.55f);
	glVertex2f(0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.95f);
	glVertex2f(0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.8f);
	glVertex2f(0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.65f);
	glVertex2f(0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.7f);
	glVertex2f(0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.85f);
	glVertex2f(0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.95f);
	glVertex2f(0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.55f);
	glVertex2f(0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.85f);
	glVertex2f(0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.95f);
	glVertex2f(0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.8f);
	glVertex2f(0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.65f);
	glVertex2f(0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.55f);
	glVertex2f(0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.7f);
	glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.85f);
	glVertex2f(0.15f, -0.95f);
    glEnd();////////////// 0.15 DONE
    //////// 0.05 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.95f);
	glVertex2f(0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.8f);
	glVertex2f(0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.7f);
	glVertex2f(0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.85f);
	glVertex2f(0.05f, -0.95f);
    glEnd();/////////// 0.05 DONE
    /////////////// -0.05 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.95f);
	glVertex2f(-0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(-0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(-0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.4f);
	glVertex2f(-0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(-0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.85f);
	glVertex2f(-0.05f, -0.95f);
    glEnd();////////////// -0.05 DONE
    ////////////////////

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.95f);
	glVertex2f(-0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.65f);
	glVertex2f(-0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.35f);
	glVertex2f(-0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.05f);
	glVertex2f(-0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.55f);
	glVertex2f(-0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.7f);
	glVertex2f(-0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.85f);
	glVertex2f(-0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.95f);
	glVertex2f(-0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.8f);
	glVertex2f(-0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.55f);
	glVertex2f(-0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.85f);
	glVertex2f(-0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.95f);
	glVertex2f(-0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.65f);
	glVertex2f(-0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.85f);
	glVertex2f(-0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.95f);
	glVertex2f(-0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.25f);
	glVertex2f(-0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.85f);
	glVertex2f(-0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.95f);
	glVertex2f(-0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.8f);
	glVertex2f(-0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.05f);
	glVertex2f(-0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.85f);
	glVertex2f(-0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.95f);
	glVertex2f(-0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.8f);
	glVertex2f(-0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.65f);
	glVertex2f(-0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.25f);
	glVertex2f(-0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.55f);
	glVertex2f(-0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.95f);
	glVertex2f(-0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.8f);
	glVertex2f(-0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.65f);
	glVertex2f(-0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.05f);
	glVertex2f(-0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.55f);
	glVertex2f(-0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.85f);
	glVertex2f(-0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.95f);
	glVertex2f(-0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.8f);
	glVertex2f(-0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.65f);
	glVertex2f(-0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(-0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.55f);
	glVertex2f(-0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.85f);
	glVertex2f(-0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.95f);
	glVertex2f(-0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.65f);
	glVertex2f(-0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.25f);
	glVertex2f(-0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.55f);
	glVertex2f(-0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.85f);
	glVertex2f(-0.15f, -0.95f);
    glEnd();
    glPopMatrix();




    }



        }
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(rainingNight)
        {


if(scene==0)
    {
        glLoadIdentity();
glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
     glLoadIdentity();
      glBegin(GL_QUADS);  ////////bottom road
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-1.0f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(-1.0f,-0.7f);
	    glVertex2f(-1.0f,-1.0f);
	    glEnd();
	}
	////////upper road
	glBegin(GL_QUADS);
	{
	    glColor3f(0.45f, 0.45f, 0.45f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glVertex2f(-1.0f,-0.65f);
	    glEnd();
	}
	////////road middle border
	glBegin(GL_QUADS);
	{
	    glColor3f(1.39f, .69f, .19f);
	    glVertex2f(1.0f,-0.7f);
	    glVertex2f(1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.65f);
	    glVertex2f(-1.0f,-0.7f);
	    glEnd();
	}
	//////////////////////roads white strips
	glLoadIdentity();
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.86f);
        glVertex2f(-0.65f,-0.85f);
	    glVertex2f(-0.95f,-0.85f);
	    glVertex2f(-0.95f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.86f);
        glVertex2f(-0.15f,-0.85f);
	    glVertex2f(-0.45f,-0.85f);
	    glVertex2f(-0.45f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.86f);
        glVertex2f(0.35f,-0.85f);
	    glVertex2f(0.05f,-0.85f);
	    glVertex2f(0.05f,-0.86f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.86f);
        glVertex2f(0.85f,-0.85f);
	    glVertex2f(0.55f,-0.85f);
	    glVertex2f(0.55f,-0.86f);
	    glEnd();
	}
   glBegin(GL_QUADS);
	{
        glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.65f,-0.51f);
        glVertex2f(-0.65f,-0.50f);
	    glVertex2f(-0.95f,-0.50f);
	    glVertex2f(-0.95f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(-0.15f,-0.51f);
        glVertex2f(-0.15f,-0.50f);
	    glVertex2f(-0.45f,-0.50f);
	    glVertex2f(-0.45f,-0.51f);
	    glEnd();
	}
      glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.35f,-0.51f);
        glVertex2f(0.35f,-0.50f);
	    glVertex2f(0.05f,-0.50f);
	    glVertex2f(0.05f,-0.51f);
	    glEnd();
	}
       glBegin(GL_QUADS);
	{
	    glColor3f(1.0f,1.0f,1.0f);
	    glVertex2f(0.85f,-0.51f);
        glVertex2f(0.85f,-0.50f);
	    glVertex2f(0.55f,-0.50f);
	    glVertex2f(0.55f,-0.51f);
	    glEnd();
	}
/////////////done road
////////////////////////////////////////car start
glLoadIdentity();
glPushMatrix();
glTranslatef(carposition, 0.0f,0.0f);

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.71f, -0.45f);
	glVertex2f(-0.71f, -0.38f);
	glVertex2f(-0.67f, -0.38f);
	glVertex2f(-0.64f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.45f, -0.45f);
	glVertex2f(-0.61f, -0.36f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.36f);
    glVertex2f(-0.58f, -0.45f);
	glVertex2f(-0.57f, -0.43f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.6f);
	glVertex2f(-0.85f, -0.48f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.71f, -0.41f);
	glVertex2f(-0.7f, -0.43f);
	glVertex2f(-0.55f, -0.43f);
	glVertex2f(-0.51f, -0.41f);
	glVertex2f(-0.41f, -0.41f);
	glVertex2f(-0.41f, -0.48f);
	glEnd();


  int i_car;
  GLfloat x_car=-0.55f; GLfloat y_car=-0.48f; GLfloat radius_car =.035f;
  int triangleAmount_car = 20;
  GLfloat twicePi_car = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car, y_car);
		for(i_car = 0; i_car <= triangleAmount_car;i_car++)
            {
			glVertex2f
			(
                x_car + (radius_car * cos(i_car * twicePi_car / triangleAmount_car)),
			    y_car + (radius_car * sin(i_car * twicePi_car / triangleAmount_car))
			);
		    }
	    glEnd();


	    int i_car_2;
  GLfloat x_car_2=-0.7f; GLfloat y_car_2=-0.48f; GLfloat radius_car_2 =.035f;
  int triangleAmount_car_2 = 20;
  GLfloat twicePi_car_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_car_2, y_car_2);
		for(i_car_2 = 0; i_car_2 <= triangleAmount_car_2;i_car_2++)
            {
			glVertex2f
			(
                x_car_2 + (radius_car_2 * cos(i_car_2 * twicePi_car_2 / triangleAmount_car_2)),
			    y_car_2 + (radius_car_2 * sin(i_car_2 * twicePi_car_2 / triangleAmount_car_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
////////////////////////////////////////car end
/////////////////truck start
glLoadIdentity();
    glPushMatrix();
    glTranslatef(truck_position,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(0.43f, -0.44f);
	glVertex2f(0.5f, -0.44f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.58f, -0.5f);
	glVertex2f(0.58f, -0.6f);
	glVertex2f(0.43f, -0.6f);

	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 0.4f);
    glVertex2f(0.43f, -0.6f);
	glVertex2f(0.43f, -0.4f);
	glVertex2f(0.1f, -0.4f);
	glVertex2f(0.1f, -0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.0f, 0.4f);
    glVertex2f(0.52f, -0.5f);
	glVertex2f(0.45f, -0.5f);
	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.49f, -0.45f);
    glEnd();


 int i_truck;
  GLfloat x_truck=0.5f; GLfloat y_truck=-0.6f; GLfloat radius_truck =.04f;
  int triangleAmount_truck = 20;
  GLfloat twicePi_truck = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck, y_truck);
		for(i_truck = 0; i_truck <= triangleAmount_truck;i_truck++)
            {
			glVertex2f
			(
                x_truck + (radius_truck * cos(i_truck * twicePi_truck / triangleAmount_truck)),
			    y_truck + (radius_truck * sin(i_truck * twicePi_truck / triangleAmount_truck))
			);
		    }
	    glEnd();



    int i_truck_2;
  GLfloat x_truck_2=0.25f; GLfloat y_truck_2=-0.6f; GLfloat radius_truck_2 =.04f;
  int triangleAmount_truck_2 = 20;
  GLfloat twicePi_truck_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_truck_2, y_truck_2);
		for(i_truck_2 = 0; i_truck_2 <= triangleAmount_truck_2;i_truck_2++)
            {
			glVertex2f
			(
                x_truck_2 + (radius_truck_2 * cos(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2)),
			    y_truck_2 + (radius_truck_2 * sin(i_truck_2 * twicePi_truck_2 / triangleAmount_truck_2))
			);
		    }
	    glEnd();

	    glPopMatrix();
///////////////////truck finis

////////////////////////////////////////redcar start
glLoadIdentity();
glPushMatrix();
glTranslatef(redcar_position1,redcar_position2, 0.0f);


    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.1f, -0.835f);
	glVertex2f(0.1f, -0.755f);
	glVertex2f(0.22f, -0.755f);
	glVertex2f(0.23f, -0.7f);
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.45f, -0.755f);
	glVertex2f(0.52f, -0.755f);
	glVertex2f(0.52f, -0.835f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(0.2f, -0.755f);
	glVertex2f(0.26f, -0.71f);
	glVertex2f(0.38f, -0.71f);
	glVertex2f(0.41f, -0.755f);
    glEnd();


    int i_redcar_2;
  GLfloat x_redcar_2=0.22f; GLfloat y_redcar_2=-0.84f; GLfloat radius_redcar_2 =.035f;
  int triangleAmount_redcar_2 = 20;
  GLfloat twicePi_redcar_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar_2, y_redcar_2);
		for(i_redcar_2 = 0; i_redcar_2 <= triangleAmount_redcar_2;i_redcar_2++)
            {
			glVertex2f
			(
                x_redcar_2 + (radius_redcar_2 * cos(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2)),
			    y_redcar_2 + (radius_redcar_2 * sin(i_redcar_2 * twicePi_redcar_2 / triangleAmount_redcar_2))
			);
		    }
	    glEnd();

  int i_redcar;
  GLfloat x_redcar=0.45f; GLfloat y_redcar=-0.84f; GLfloat radius_redcar =.035f;
  int triangleAmount_redcar = 20;
  GLfloat twicePi_redcar = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_redcar, y_redcar);
		for(i_redcar = 0; i_redcar <= triangleAmount_redcar;i_redcar++)
            {
			glVertex2f
			(
                x_redcar + (radius_redcar * cos(i_redcar * twicePi_redcar / triangleAmount_redcar)),
			    y_redcar + (radius_redcar * sin(i_redcar * twicePi_redcar / triangleAmount_redcar))
			);
		    }
	    glEnd();
glPopMatrix();

////////////////////////////////////////redcar end

/////////////////bus start
glLoadIdentity();
glPushMatrix();
glTranslatef(bus_position,0.0f, 0.0f);

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.68f, -0.92f);
	glVertex2f(-0.68f, -0.71f);
	glVertex2f(-0.3f, -0.71f);
	glVertex2f(-0.3f, -0.92f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.85f, 1.0f);
	glVertex2f(-0.59f, -0.87f);
	glVertex2f(-0.55f, -0.83f);
	glVertex2f(-0.31f, -0.83f);
	glVertex2f(-0.31f, -0.77f);
	glVertex2f(-0.59f, -0.77f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.4f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.9f);
	glVertex2f(-0.64f, -0.74f);
	glVertex2f(-0.6f, -0.74f);
	glVertex2f(-0.6f, -0.9f);
    glEnd();

    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.55f, -0.77);
	glVertex2f(-0.55f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.5f, -0.77);
	glVertex2f(-0.5f, -0.86f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.45f, -0.77);
	glVertex2f(-0.45f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.77);
	glVertex2f(-0.4f, -0.85f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.35f, -0.77);
	glVertex2f(-0.35f, -0.84f);
    glEnd();
    }
    {//////////////////////////////bus window
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.61f, -0.79);
	glVertex2f(-0.61f, -0.83f);
    glEnd();
    }

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.85f, 1.0f);
    glVertex2f(-0.68f, -0.9f);
	glVertex2f(-0.68f, -0.74f);
	glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.89f);
    glEnd();

    {/////////////////////////////bus stand

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.665f, -0.76f);
	glVertex2f(-0.665f, -0.75f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.69f, -0.76f);
    glEnd();
    }

    glBegin(GL_TRIANGLES);
    {
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.69f, -0.75f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.69f, -0.8f);
    glEnd();
    }



 int i_bus;
  GLfloat x_bus=-0.35f; GLfloat y_bus=-0.91f; GLfloat radius_bus =.035f;
  int triangleAmount_bus = 20;
  GLfloat twicePi_bus = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus, y_bus);
		for(i_bus = 0; i_bus <= triangleAmount_bus;i_bus++)
            {
			glVertex2f
			(
                x_bus + (radius_bus * cos(i_bus * twicePi_bus / triangleAmount_bus)),
			    y_bus + (radius_bus * sin(i_bus * twicePi_bus / triangleAmount_bus))
			);
		    }
	    glEnd();



    int i_bus_2;
  GLfloat x_bus_2=-0.55f; GLfloat y_bus_2=-0.91f; GLfloat radius_bus_2 =.035f;
  int triangleAmount_bus_2 = 20;
  GLfloat twicePi_bus_2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x_bus_2, y_bus_2);
		for(i_bus_2 = 0; i_bus_2 <= triangleAmount_bus_2;i_bus_2++)
            {
			glVertex2f
			(
                x_bus_2 + (radius_bus_2 * cos(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2)),
			    y_bus_2 + (radius_bus_2 * sin(i_bus_2 * twicePi_bus_2 / triangleAmount_bus_2))
			);
		    }
	    glEnd();
	    glPopMatrix();
///////////////////bus finis


//////////////////

////////sea
         glLoadIdentity();
         glBegin(GL_QUADS);
	    glColor3f(0.0f,0.0f,0.6f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,0.35f);
	    glVertex2f(-1.0f,0.35f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();

	    glBegin(GL_QUADS);     // GROUND
	    glColor3f(0.6f, 0.6f, 0.0f);
	    glVertex2f(1.0,0.35f);
        glVertex2f(1.0f,0.5f);
	    glVertex2f(-1.0f,0.5f);
	    glVertex2f(-1.0f,0.35f);
	    glEnd();
	     ///////////////////////////////////// RAIL LINE

       glLineWidth(1.4);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.37f);
	   glVertex2f(1.0f, 0.37f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-1.0f, 0.4f);
	   glVertex2f(1.0f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.95f, 0.37f);
	   glVertex2f(-0.95f, 0.4f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.85f, 0.37f);
	   glVertex2f(-0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.8f, 0.37f);
	   glVertex2f(-0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.75f, 0.37f);
	   glVertex2f(-0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.7f, 0.37f);
	   glVertex2f(-0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.65f, 0.37f);
	   glVertex2f(-0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.6f, 0.37f);
	   glVertex2f(-0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.55f, 0.37f);
	   glVertex2f(-0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.37f);
	   glVertex2f(-0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.45f, 0.37f);
	   glVertex2f(-0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.4f, 0.37f);
	   glVertex2f(-0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.35f, 0.37f);
	   glVertex2f(-0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.3f, 0.37f);
	   glVertex2f(-0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.25f, 0.37f);
	   glVertex2f(-0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.2f, 0.37f);
	   glVertex2f(-0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.15f, 0.37f);
	   glVertex2f(-0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.37f);
	   glVertex2f(-0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.05f, 0.37f);
	   glVertex2f(-0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.0f, 0.37f);
	   glVertex2f(0.0f, 0.4f);
       glEnd();
        glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.05f, 0.37f);
	   glVertex2f(0.05f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.37f);
	   glVertex2f(0.1f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.15f, 0.37f);
	   glVertex2f(0.15f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.37f);
	   glVertex2f(0.2f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.25f, 0.37f);
	   glVertex2f(0.25f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.3f, 0.37f);
	   glVertex2f(0.3f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.35f, 0.37f);
	   glVertex2f(0.35f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.37f);
	   glVertex2f(0.4f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.45f, 0.37f);
	   glVertex2f(0.45f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.37f);
	   glVertex2f(0.5f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.55f, 0.37f);
	   glVertex2f(0.55f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.37f);
	   glVertex2f(0.6f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.65f, 0.37f);
	   glVertex2f(0.65f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.7f, 0.37f);
	   glVertex2f(0.7f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.37f);
	   glVertex2f(0.75f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.8f, 0.37f);
	   glVertex2f(0.8f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.85f, 0.37f);
	   glVertex2f(0.85f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.9f, 0.37f);
	   glVertex2f(0.9f, 0.4f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.95f, 0.37f);
	   glVertex2f(0.95f, 0.4f);
       glEnd();
	   ///////////
	   ///////////// TRAIN STARTS
	   glPushMatrix();
       glTranslatef(train_pos,0.0f, 0.0f);
	   glBegin(GL_POLYGON);            //
	   glColor3f(0.7f, 0.7f, 0.7f); // TRAIN
	   glVertex2f(-0.9f, 0.37f);
	   glVertex2f(-0.9f, 0.43f);
	   glVertex2f(-0.1f, 0.43f);
	   glVertex2f(0.0f, 0.38f);
	   glVertex2f(0.0f, 0.37f);
       glEnd();

       glLineWidth(2.5);
	glBegin(GL_LINES);              // TRAIN MIDDLE BORDER
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(-0.5f, 0.43f);
    glEnd();

        glBegin(GL_QUADS);              // TRAIN FRONT BLACK WINDOW
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.1f, 0.43f);
	glVertex2f(-0.2f, 0.43f);
	glVertex2f(-0.2f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
    glEnd();

    glBegin(GL_POLYGON);              // TRAIN BELOW BORDER
	glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.9f, 0.37f);
	glVertex2f(-0.9f, 0.39f);
	glVertex2f(-0.02f, 0.39f);
	glVertex2f(0.0f, 0.38f);
	glVertex2f(0.0f, 0.37f);
    glEnd();

    glPointSize(4.0);
	glBegin(GL_POINTS);              // TRAIN WHEEL
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, 0.37f);
	glVertex2f(-0.45f, 0.37f);
	glVertex2f(-0.2f, 0.37f);
	glVertex2f(-0.15f, 0.37f);
	glVertex2f(-0.8f, 0.37f);
	glVertex2f(-0.75f, 0.37f);
	glVertex2f(-0.6f, 0.37f);
	glVertex2f(-0.55f, 0.37f);
    glEnd();
////////////////////// TRAIN WHEEL DONE
///////////////////// TRAIN WINDOW
    glLineWidth(2.0);
	glBegin(GL_LINES);              //
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.85f, 0.41f);
	glVertex2f(-0.55f, 0.41f);
	glVertex2f(-0.45f, 0.41f);
	glVertex2f(-0.25f, 0.41f);
    glEnd();
    glPopMatrix();
    ////////////////// TRAIN WINDOW DONE

	   glBegin(GL_POLYGON);         //RIGHT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.45f, 0.45f);
       glVertex2f(-0.4f, 0.5f);
       glVertex2f(-0.4f, 0.55f);
       glVertex2f(-0.25f, 0.6f);
       glVertex2f(-0.35f, 0.65f);
	   glVertex2f(-0.2f, 0.8f);
	   glVertex2f(0.0f, 0.6f);
       glVertex2f(0.25f,  0.45f);
       glEnd();

	   glBegin(GL_POLYGON);       //LEFT HILL
	   glColor3f(0.0f, 0.5f, 0.0f);
       glVertex2f(-0.95f, 0.45f);
	   glVertex2f(-0.7f, 0.6f);
       glVertex2f(-0.8f, 0.75f);
       glVertex2f(-0.6f, 0.88f);
       glVertex2f(-0.5f, 0.65f);
       glVertex2f(-0.4f, 0.58f);
	   glVertex2f(-.3f,  0.45f);
       glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING
	   glColor3f(0.5f, 0.5f, 0.5f);
       glVertex2f(0.43f, 0.45f);
	   glVertex2f(0.43f, 0.8f);
	   glVertex2f(0.63f, 0.8f);
	   glVertex2f(0.63f, 0.45f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING DOOR
	   glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(0.5f, 0.45f);
	   glVertex2f(0.5f, 0.55f);
	   glVertex2f(0.55f, 0.55f);
	   glVertex2f(0.55f, 0.45f);
	   glEnd();

       glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f, 0.75f);
	   glVertex2f(0.5f, 0.75f);
	   glVertex2f(0.5f, 0.7f);
	   glVertex2f(0.45f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW UPPER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f, 0.75f);
	   glVertex2f(0.6f, 0.75f);
	   glVertex2f(0.6f, 0.7f);
	   glVertex2f(0.55f, 0.7f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER LEFT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.45f,0.65f);
	   glVertex2f(0.5f,0.65f);
	   glVertex2f(0.5f,0.6f);
	   glVertex2f(0.45f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // LEFT BUILDING WINDOW LOWER RIGHT
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.55f,0.65f);
	   glVertex2f(0.6f,0.65f);
	   glVertex2f(0.6f,0.6f);
	   glVertex2f(0.55f,0.6f);
	   glEnd();

	   glBegin(GL_QUADS);              // MIDDLE BUILDING
	   glColor3f(0.0f, 0.4f, 0.4f);
       glVertex2f(0.64f, 0.45f);
	   glVertex2f(0.64f, 0.85f);
	   glVertex2f(0.85f, 0.85f);
	   glVertex2f(0.85f, 0.45f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.5f);
	  glVertex2f(0.85f, 0.5f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.55f);
	  glVertex2f(0.85f, 0.55f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.6f);
	  glVertex2f(0.85f, 0.6f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.65f);
	  glVertex2f(0.85f, 0.65f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.7f);
	  glVertex2f(0.85f, 0.7f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.75f);
	  glVertex2f(0.85f, 0.75f);
      glEnd();

      glBegin(GL_LINES);        // MIDDLE BUILDING WHITE STRIPE
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.64f, 0.8f);
	  glVertex2f(0.85f, 0.8f);
      glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.83f, 0.65f);
       glVertex2f(0.83f, 0.68f);
       glVertex2f(0.98f, 0.68f);
       glVertex2f(0.98f, 0.65f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.85f, 0.68f);
       glVertex2f(0.85f, 0.71f);
       glVertex2f(0.96f, 0.71f);
       glVertex2f(0.96f, 0.68f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING YELLOW ROOF
	   glColor3f(1.0f, 1.0f, 0.0f);
       glVertex2f(0.87f, 0.71f);
       glVertex2f(0.87f, 0.74f);
       glVertex2f(0.94f, 0.74f);
       glVertex2f(0.94f, 0.71f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.85f, 0.43f);
       glVertex2f(0.85f, 0.65f);
       glVertex2f(0.96f, 0.65f);
       glVertex2f(0.96f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING DOOR
	   glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.89f, 0.43f);
       glVertex2f(0.89f, 0.49f);
       glVertex2f(0.92f, 0.49f);
       glVertex2f(0.92f, 0.43f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.6f);
       glVertex2f(0.9f, 0.6f);
       glVertex2f(0.9f, 0.58f);
       glVertex2f(0.88f, 0.58f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.88f, 0.55f);
       glVertex2f(0.9f, 0.55f);
       glVertex2f(0.9f, 0.53f);
       glVertex2f(0.88f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.55f);
       glVertex2f(0.93f, 0.55f);
       glVertex2f(0.93f, 0.53f);
       glVertex2f(0.91f, 0.53f);
	   glEnd();

	   glBegin(GL_QUADS);              //  RIGHT BUILDING W
	   glColor3f(0.0f,0.9f,1.0f);
       glVertex2f(0.91f, 0.6f);
       glVertex2f(0.93f, 0.6f);
       glVertex2f(0.93f, 0.58f);
       glVertex2f(0.91f, 0.58f);
	   glEnd();
          glTranslatef(+0.0f, 0.07f, 0.0f);
	   glBegin(GL_TRIANGLES);  // 1st TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
       /////////////////////  2nd
       glScalef(0.9,0.9,0);
       glTranslatef(0.13f, 0.05f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
//////////////////////////// 3rd
             glLoadIdentity();
       glScalef(1.1,1.2,0);
       glTranslatef(+0.16f, 0.0f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////
             glLoadIdentity();
      // glScalef(0,0,0);
       glTranslatef(+0.11f, 0.06f, 0.0f);

       glBegin(GL_TRIANGLES);  //  TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.45f, 0.45f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.55f, 0.45f);
	   glEnd();

       glBegin(GL_TRIANGLES);   //TREE TRIANGLE
       glColor3f(0.0f, 0.7f, 0.0f);
       glVertex2f(+.46f, 0.42f);
	   glVertex2f(+0.5f,0.5f);
	   glVertex2f(+.54f, 0.42f);
	   glEnd();

	   glLineWidth(3.5);
	   glBegin(GL_LINES);              // TREE WOOD
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.5f, 0.36f);
	   glVertex2f(0.5f, 0.42f);
       glEnd();
///////////////////////////////////
       glLoadIdentity();
          glScalef(0.8,0.7,0);
        glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();

          glLoadIdentity();
          glPushMatrix();
         glTranslatef(BIG_SHIP_pos,0.0f, 0.0f);
         glBegin(GL_POLYGON);            // RIGHT BELOW SHIP LOWER BODY
	glColor3f(0.3f, 0.0f, 0.0f);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.45f, -0.15f);
	glVertex2f(0.9f, -0.15f);
	glVertex2f(0.8f, -0.25f);
	glEnd();

    glBegin(GL_QUADS);  //RIGHT BELOW SHIP LOWER RED BODY
	{
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(0.3,-0.25f);
        glVertex2f(0.25f,-0.2f);
	    glVertex2f(0.85f,-0.2f);
	    glVertex2f(0.8f,-0.25f);
	    glEnd();
	}
	      glLineWidth(0.8);
	   glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.1f);
	  glVertex2f(0.25f, -0.05f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.25f, -0.05f);
	  glVertex2f(0.4f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.4f, -0.05f);
	  glVertex2f(0.4f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.3f, -0.1f);
	  glVertex2f(0.3f, -0.05f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RELLING
	  glColor3f(1.0f, 1.0f, 1.0f);
	  glVertex2f(0.35f, -0.1f);
	  glVertex2f(0.35f, -0.05f);
      glEnd();

      glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER BLUE BODY

	    glColor3f(0.0f,0.0f,0.5f);
	    glVertex2f(0.5,-0.15f);
        glVertex2f(0.5f,-0.09f);
	    glVertex2f(0.6f,-0.09f);
	    glVertex2f(0.6f,-0.15f);
	    glEnd();

	    glBegin(GL_QUADS); // RIGHT BELOW SHIP UPPER RED BODY

	    glColor3f(.8f,0.0f,0.0f);
	    glVertex2f(0.68,-0.15f);
        glVertex2f(0.68f,-0.1f);
	    glVertex2f(0.85f,-0.1f);
	    glVertex2f(0.85f,-0.15f);
	    glEnd();

	    glLineWidth(1.4);
	   glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.52f, -0.15f);
	  glVertex2f(0.52f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.55f, -0.15f);
	  glVertex2f(0.55f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER BLUE RIGHT SHIP BODY LINES
	  glColor3f(0.5f, 0.5f, 0.5f);
	  glVertex2f(0.58f, -0.15f);
	  glVertex2f(0.58f, -0.1f);
      glEnd();

       glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.71f, -0.15f);
	  glVertex2f(0.71f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.74f, -0.15f);
	  glVertex2f(0.74f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.78f, -0.15f);
	  glVertex2f(0.78f, -0.1f);
      glEnd();

      glBegin(GL_LINES);        //LOWER RIGHT SHIP RED BODY LINES
	  glColor3f(0.6f, 0.6f, 0.6f);
	  glVertex2f(0.62f, -0.15f);
	  glVertex2f(0.62f, -0.1f);
      glEnd();
      glPopMatrix();

        //////////////////////////speed boat start
           glLoadIdentity();
          glScalef(0.5,0.5,0);
          glTranslatef(+0.8f, 0.3f, 0.0f);

        glPushMatrix();
       glTranslatef(SPEED_BOAT_pos,0.0f, 0.0f);
      glBegin(GL_POLYGON);            //  RIGHT SIDE SPEEDBOAT WHITE PART
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.0f);

	glEnd();

	 glBegin(GL_QUADS);          // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.02f, 0.12f);
	glVertex2f(0.4f, 0.12f);
	glVertex2f(0.4f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);   // RIGHT SIDE SPEEDBOAT BLACK PART
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.4f, 0.12f);
    glVertex2f(0.48f, 0.04f);
	glVertex2f(0.5f, 0.05f);
     glEnd();

     glBegin(GL_QUADS);   //  SIDE SPEEDBOAT BLACK PART
     glColor3f(0.0f, 0.0f, 0.0f);
     glVertex2f(0.5f, 0.05f);
    glVertex2f(0.48f, 0.04f);
    glVertex2f(0.48f, 0.0f);
	 glVertex2f(0.5f, 0.0f);
     glEnd();

      glBegin(GL_QUADS);   //RIGHT  SIDE SPEEDBOAT GLASS
      glColor3f(0.0f, 0.9f, 1.0f);
     glVertex2f(0.1f, 0.15f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.3f, 0.25f);
	 glVertex2f(0.25f, 0.15f);
     glEnd();

              glLineWidth(2.5);
	  glBegin(GL_LINES);     // RIGHT SIDE SPEEDBOAT RED PART
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glVertex2f(0.3f, 0.15f);
	  glVertex2f(0.32f, 0.18f);
      glEnd();
      glPopMatrix();
      /////////////finis speed boat
////////sea border
         glLoadIdentity();   ////////SEA BORDER
      glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.35f);
        glVertex2f(1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.3f);
	    glVertex2f(-1.0f,-0.35f);
	    glEnd();
	}
	glBegin(GL_QUADS);
	{
	    glColor3f(0.0f,0.0f,0.0f);
	    glVertex2f(1.0,-0.22f);
        glVertex2f(1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.2f);
	    glVertex2f(-1.0f,-0.22f);
	    glEnd();
	}
       glLoadIdentity();
      glLineWidth(2.5);
	  glBegin(GL_LINES);     //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.95f, -0.18f);
	  glVertex2f(-0.95f, -0.3f);
      glEnd();

     glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.89f, -0.18f);
	  glVertex2f(-0.89f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
       glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.83f, -0.18f);
	  glVertex2f(-0.83f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.76f, -0.18f);
	  glVertex2f(-0.76f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.69f, -0.18f);
	  glVertex2f(-0.69f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.62f, -0.18f);
	  glVertex2f(-0.62f, -0.3f);
      glEnd();

       glBegin(GL_LINES);       //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.55f, -0.18f);
	  glVertex2f(-0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.48f, -0.18f);
	  glVertex2f(-0.48f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.41f, -0.18f);
	  glVertex2f(-0.41f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.34f, -0.18f);
	  glVertex2f(-0.34f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.27f, -0.18f);
	  glVertex2f(-0.27f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.20f, -0.18f);
	  glVertex2f(-0.20f, -0.3f);
      glEnd();

       glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.13f, -0.18f);
	  glVertex2f(-0.13f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(-0.05f, -0.18f);
	  glVertex2f(-0.05f, -0.3f);
      glEnd();

      glBegin(GL_LINES);             //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.02f, -0.18f);
	  glVertex2f(0.02f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.1f, -0.18f);
	  glVertex2f(0.1f, -0.3f);
      glEnd();

      glBegin(GL_LINES);            //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.17f, -0.18f);
	  glVertex2f(0.17f, -0.3f);
      glEnd();

       glBegin(GL_LINES);        //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.25f, -0.18f);
	  glVertex2f(0.25f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.32f, -0.18f);
	  glVertex2f(0.32f, -0.3f);
      glEnd();

       glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.40f, -0.18f);
	  glVertex2f(0.40f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.47f, -0.18f);
	  glVertex2f(0.47f, -0.3f);
      glEnd();

      glBegin(GL_LINES);          //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.55f, -0.18f);
	  glVertex2f(0.55f, -0.3f);
      glEnd();

      glBegin(GL_LINES);           //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.62f, -0.18f);
	  glVertex2f(0.62f, -0.3f);
      glEnd();

      glBegin(GL_LINES);         //IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.70f, -0.18f);
	  glVertex2f(0.70f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.77f, -0.18f);
	  glVertex2f(0.77f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.85f, -0.18f);
	  glVertex2f(0.85f, -0.3f);
      glEnd();

      glBegin(GL_LINES);              // IRON GRILL
	  glColor3f(0.0f, 0.0f, 0.0f);
	  glVertex2f(0.92f, -0.18f);
	  glVertex2f(0.92f, -0.3f);
      glEnd();
///////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position,0.0f, 0.0f);
glColor3f(0.25f,0.25f,0.25f);
 int k;
    GLfloat a=0.87f; GLfloat b=0.77f; GLfloat c =.05f;
	int amt = 20;
	GLfloat twice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(k = 0; k <= amt;k++)
            {
			glVertex2f(
                a + (c * cos(k *  twice_Pi / amt)),
			    b + (c * sin(k * twice_Pi / amt))
			          );
            }
	glEnd();
////////////

glColor3f(0.25f,0.25f,0.25f);
 int l;
    GLfloat d=0.72f; GLfloat e=0.74f; GLfloat f =.06f;
	int amtt = 20;
	GLfloat twice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(d, e);
		for(l = 0; l <= amtt;l++)
            {
			glVertex2f(
                d + (f * cos(l *  twice_pi / amtt)),
			    e + (f * sin(l * twice_pi / amtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.25f,0.25f,0.25f);
 int ll;
    GLfloat dd=0.78f; GLfloat ee=0.79f; GLfloat ff =.08f;
	int amot = 20;
	GLfloat tpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(dd, ee);
		for(ll = 0; ll <= amot;ll++)
            {
			glVertex2f(
                dd + (ff * cos(ll *  tpi / amot)),
			    ee + (ff * sin(ll * tpi / amot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position2,0.0f, 0.0f);
glColor3f(0.25f,0.25f,0.25f);
 int wk;
    GLfloat wa=0.7f; GLfloat wb=0.77f; GLfloat wc =.05f;
	int wamt = 20;
	GLfloat wtwice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wa, wb);
		for(wk = 0; wk <= wamt;wk++)
            {
			glVertex2f(
                wa + (wc * cos(wk *  wtwice_Pi / wamt)),
			    wb + (wc * sin(wk * wtwice_Pi / wamt))
			          );
            }
	glEnd();
////////////

glColor3f(0.25f,0.25f,0.25f);
 int wl;
    GLfloat wd=0.68f; GLfloat we=0.74f; GLfloat wf =.06f;
	int wamtt = 20;
	GLfloat wtwice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wd, we);
		for(wl = 0; wl <= wamtt;wl++)
            {
			glVertex2f(
                wd + (wf * cos(wl *  wtwice_pi / wamtt)),
			    we + (wf * sin(wl * wtwice_pi / wamtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.25f,0.25f,0.25f);
 int wll;
    GLfloat wdd=0.78f; GLfloat wee=0.74f; GLfloat wff =.08f;
	int wamot = 20;
	GLfloat wtpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wdd, wee);
		for(wll = 0; wll <= wamot;wll++)
            {
			glVertex2f(
                wdd + (wff * cos(wll *  wtpi / wamot)),
			    wee + (wff * sin(wll * wtpi / wamot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

	//glPointSize(4.0);

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,rain_pos, 0.0f);

//////////////////////////////////////////
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.95f);
	glVertex2f(0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.8f);
	glVertex2f(0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.65f);
	glVertex2f(0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.35f);
	glVertex2f(0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.05f);
	glVertex2f(0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.1f);
	glVertex2f(0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.25f);
	glVertex2f(0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.4f);
	glVertex2f(0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.55f);
	glVertex2f(0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.7f);
	glVertex2f(0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.85f);
	glVertex2f(0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.95f);
	glVertex2f(0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.8f);
	glVertex2f(0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.65f);
	glVertex2f(0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.35f);
	glVertex2f(0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.05f);
	glVertex2f(0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.1f);
	glVertex2f(0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.4f);
	glVertex2f(0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.55f);
	glVertex2f(0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.7f);
	glVertex2f(0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.85f);
	glVertex2f(0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.95f);
	glVertex2f(0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.65f);
	glVertex2f(0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.05f);
	glVertex2f(0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.55f);
	glVertex2f(0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.7f);
	glVertex2f(0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.85f);
	glVertex2f(0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.95f);
	glVertex2f(0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.8f);
	glVertex2f(0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.65f);
	glVertex2f(0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.5f);
	glVertex2f(0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.05f);
	glVertex2f(0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.25f);
	glVertex2f(0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.7f);
	glVertex2f(0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.85f);
	glVertex2f(0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.95f);
	glVertex2f(0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.8f);
	glVertex2f(0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.35f);
	glVertex2f(0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.05f);
	glVertex2f(0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.25f);
	glVertex2f(0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.7f);
	glVertex2f(0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.85f);
	glVertex2f(0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.95f);
	glVertex2f(0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.8f);
	glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.65f);
	glVertex2f(0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.55f);
	glVertex2f(0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.95f);
	glVertex2f(0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.8f);
	glVertex2f(0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.65f);
	glVertex2f(0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.7f);
	glVertex2f(0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.85f);
	glVertex2f(0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.95f);
	glVertex2f(0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.55f);
	glVertex2f(0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.85f);
	glVertex2f(0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.95f);
	glVertex2f(0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.8f);
	glVertex2f(0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.65f);
	glVertex2f(0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.55f);
	glVertex2f(0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.7f);
	glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.85f);
	glVertex2f(0.15f, -0.95f);
    glEnd();////////////// 0.15 DONE
    //////// 0.05 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.95f);
	glVertex2f(0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.8f);
	glVertex2f(0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.7f);
	glVertex2f(0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.85f);
	glVertex2f(0.05f, -0.95f);
    glEnd();/////////// 0.05 DONE
    /////////////// -0.05 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.95f);
	glVertex2f(-0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(-0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(-0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.4f);
	glVertex2f(-0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(-0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.85f);
	glVertex2f(-0.05f, -0.95f);
    glEnd();////////////// -0.05 DONE
    ////////////////////

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.95f);
	glVertex2f(-0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.65f);
	glVertex2f(-0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.35f);
	glVertex2f(-0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.05f);
	glVertex2f(-0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.55f);
	glVertex2f(-0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.7f);
	glVertex2f(-0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.85f);
	glVertex2f(-0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.95f);
	glVertex2f(-0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.8f);
	glVertex2f(-0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.55f);
	glVertex2f(-0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.85f);
	glVertex2f(-0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.95f);
	glVertex2f(-0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.65f);
	glVertex2f(-0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.85f);
	glVertex2f(-0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.95f);
	glVertex2f(-0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.25f);
	glVertex2f(-0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.85f);
	glVertex2f(-0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.95f);
	glVertex2f(-0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.8f);
	glVertex2f(-0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.05f);
	glVertex2f(-0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.85f);
	glVertex2f(-0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.95f);
	glVertex2f(-0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.8f);
	glVertex2f(-0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.65f);
	glVertex2f(-0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.25f);
	glVertex2f(-0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.55f);
	glVertex2f(-0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.95f);
	glVertex2f(-0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.8f);
	glVertex2f(-0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.65f);
	glVertex2f(-0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.05f);
	glVertex2f(-0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.55f);
	glVertex2f(-0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.85f);
	glVertex2f(-0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.95f);
	glVertex2f(-0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.8f);
	glVertex2f(-0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.65f);
	glVertex2f(-0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(-0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.55f);
	glVertex2f(-0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.85f);
	glVertex2f(-0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.95f);
	glVertex2f(-0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.65f);
	glVertex2f(-0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.25f);
	glVertex2f(-0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.55f);
	glVertex2f(-0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.85f);
	glVertex2f(-0.15f, -0.95f);
    glEnd();
    glPopMatrix();


    }
////////////////////////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==1)
    {
glLoadIdentity();
glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
 glBegin(GL_QUADS);   ////////////sky
	    glColor3f(0.1f,0.1f,0.1f);
	    glVertex2f(1.0,0.45f);
        glVertex2f(1.0f,1.0f);
	    glVertex2f(-1.0f,1.0f);
	    glVertex2f(-1.0f,0.45f);
	    glEnd();

 glBegin(GL_POLYGON); //far far far mountain
{glColor3f(0.0f, 0.6f, 0.0f); //green



    glVertex2f(1.0f, 0.4f);

	glVertex2f(1.0f, 1.0f);
	glVertex2f(0.9f, 0.98f);
	glVertex2f(0.8f, 0.89f);
	glVertex2f(0.7f, 0.74f);
	glVertex2f(0.6f, 0.66f);
	glVertex2f(0.5f, 0.54f);
	glVertex2f(0.4f, 0.52f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(0.0f, 0.5f);

	glVertex2f(-0.1f,0.52f);
	glVertex2f(-0.2f, 0.48f);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.4f, 0.48f);
	glVertex2f(-0.5f, 0.46f);
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.7f, 0.46f);
	glVertex2f(-0.8f, 0.48f);


	glVertex2f(-1.0f, 0.4f);
	glEnd();

}

glBegin(GL_POLYGON); //far far far mountain
{
	glColor3f(0.0f, 0.4f, 0.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}
glBegin(GL_POLYGON); //far far far mountain snow
{
	glColor3f(0.0f, 0.6f, 0.0f); //green
    glVertex2f(-0.8f, 0.48f);
	glVertex2f(-0.9f, 0.7f);
	glVertex2f(-0.92f, 0.72f);
	glVertex2f(-0.95f, 0.67f);
	glVertex2f(-1.0f, 0.66f);
	glVertex2f(-1.0f, 0.4f);
	glEnd();
}

{///////far far land
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.7f, 0.4f);
	glVertex2f(1.0f, 0.4f);
	glVertex2f(-1.0f, 0.4f);
    glEnd();
}



//Ship far away palboat
    {
        glLoadIdentity();
        glTranslatef(+0.0f, 0.25f, 0.0f);
        glTranslatef(palboat_pos_fs,0,0);

        glColor3f(0.7,0.7,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glEnd();

        glColor3f(0.7,0.5,0.3);
        glBegin(GL_QUADS);
        glVertex2f(-0.005,0);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.005,0.5);
        glVertex2f(0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.7);
        glBegin(GL_POLYGON);
        glVertex2f(0.01,0.25);
        glVertex2f(-0.005,0.5);
        glVertex2f(0.04,0.3);
        glVertex2f(0.05,0.1);
        glVertex2f(-0.005,0);
        glEnd();

        glColor3f(0.9,0.9,0.9);
        glBegin(GL_POLYGON);
        glVertex2f(0.0,-0.05);
        glVertex2f(-0.2,-0.05);
        glVertex2f(-0.3,0.05);
        glVertex2f(-0.2,0);
        glVertex2f(0.0,0);
        glVertex2f(0.1,0.05);
        glVertex2f(0.0,-0.05);
        glEnd();

        glLoadIdentity();
    }

    glBegin(GL_POLYGON); //far mountain
{
	glColor3f(0.0f,0.4f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.54f, -0.11f);
	glVertex2f(0.44f, -0.12f);
	glVertex2f(0.4f, -0.14f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.31f, -0.08f);
	glVertex2f(0.32f, 0.0f);
	glVertex2f(0.36f, 0.06f);
	glVertex2f(0.44f, 0.06f);
	glVertex2f(0.51f, 0.2f);
	glVertex2f(0.56f, 0.2f);
	glVertex2f(0.66f, 0.29f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}


   glBegin(GL_POLYGON); //far mountain house part////////////////////////
{
	glColor3f(0.0f,0.4f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}
///////////////////////////////////ship
       glLoadIdentity();
         // glScalef(0.8,0.7,0);
       // glTranslatef(0.0f, 0.2f, 0.0f);
       glPushMatrix();
       glTranslatef(SMALL_SHIP_pos_fs,0.0f, 0.0f);
	glBegin(GL_POLYGON);            //LEFT BELOW SHIP LOWER BODY
	glColor3f(0.7f, 0.7f, 0.7f);
	glVertex2f(-0.9f, -0.25f);
	glVertex2f(-0.9f, -0.1f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.6f, -0.15f);
	glVertex2f(-0.53f, -0.1f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.5f, -0.25f);
	glEnd();

         glLineWidth(1.8);
	   glBegin(GL_LINES);        //LOWER LEFT SHIP BODY LINES
	  glColor3f(0.3f, 0.0f, 0.0f);
	  glVertex2f(-0.7f, -0.15f);
	  glVertex2f(-0.7f, 0.0f);
      glEnd();

      glBegin(GL_TRIANGLES);              // LOWER LEFT SHIP TRIANGLE
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.69f, -0.15f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.59f,  -0.11f);

	glEnd();

        glBegin(GL_QUADS);   //LEFT BELOW SHIP RED PART
	    glColor3f(1.0f,0.0f,0.0f);
	    glVertex2f(-0.9,-0.25f);
        glVertex2f(-0.9f,-0.20f);
	    glVertex2f(-0.5f,-0.20f);
	    glVertex2f(-0.5f,-0.25f);
	    glEnd();
        glPopMatrix();
//////////////////////////ship finish

    glBegin(GL_POLYGON); //front mountain
{
	glColor3f(0.0f, 0.8f, 0.0f); //green
	glVertex2f(0.12f, -1.0f);
	glVertex2f(0.5f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.5f, -0.1f);
	glVertex2f(-0.6f, 0.08f);
	glVertex2f(-0.65f, 0.12f);
	glVertex2f(-0.7f, 0.08f);
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.8f, 0.08f);
	glVertex2f(-0.9f, 0.14f);
	glVertex2f(-1.0f, 0.12f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();
}

///////////////far mountain on far far mountain extra part
/*
    glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, 0.08f);
	glVertex2f(0.6f, 0.00f);
	glVertex2f(0.56f, -0.02f);
	glVertex2f(0.7f, 0.28f);
	glVertex2f(0.75f, 0.38f);
	glVertex2f(0.83f, 0.32f);
	glVertex2f(1.0f, 0.62f);
    glEnd();
}

*/




   glBegin(GL_POLYGON); //far mountain house part//////////////
{
	glColor3f(0.6f, 0.4f, 0.2f); //green
	glVertex2f(1.0f, 0.1f);
	glVertex2f(0.7f, -0.01f);
    glVertex2f(1.0f, -0.01f);
    glEnd();
}




//////////////////////////////////////house start
 glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient1[] = {2,2,1.5,0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient1);//A lighting model parameter.
glBegin(GL_QUADS);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.44f);
    glVertex2f(-0.79f, -0.44f);
    glVertex2f(-0.79f, -0.84f);
    glVertex2f(-0.54f, -0.84f);
    glEnd();
}
glBegin(GL_POLYGON);//// near house white part
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.54f, -0.84f);
	glVertex2f(-0.54f, -0.44f);
	glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.31f, -0.84f);


    glEnd();
}
glDisable(GL_LIGHTING);
glBegin(GL_QUADS);//// near house red part
{
	glColor3f(0.6f, 0.0f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.58f, -0.55f);
    glVertex2f(-0.82f, -0.44f);
    glVertex2f(-0.68f, -0.06f);
    glEnd();
}
glBegin(GL_TRIANGLES);//// near house 1
{
	glColor3f(1.0f, 0.2f, 0.0f);
	glVertex2f(-0.42f, -0.18f);
	glVertex2f(-0.49f, -0.33f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}


glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.49f, -0.33f);
	glVertex2f(-0.58f, -0.55f);
	glVertex2f(-0.57f, -0.59f);
    glVertex2f(-0.48f, -0.36f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
 glBegin(GL_POLYGON); //near house brown
{
	glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-0.36f, -0.32f);
    glVertex2f(-0.31f, -0.57f);
    glVertex2f(-0.28f, -0.6f);
    glVertex2f(-0.34f, -0.28f);
    glEnd();
}
{//////////////////////////////bari black
    glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.54f, -1.0f);
	glVertex2f(-0.54f, -0.5f);
    glEnd();
}

////////////////////////////////house finis 1
///////////////tree start
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);
    glVertex2f(0.07f, -1.0f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.16f, -0.2f);
    glVertex2f(0.13f, -1.0f);


    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.07f, 0.2f);
    glVertex2f(0.072f, 0.22f);
    glVertex2f(0.13f, -0.2f);

    glEnd();
}
glBegin(GL_QUADS);
{
    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex2f(0.13f, -0.2f);
    glVertex2f(0.16f, 0.2f);
    glVertex2f(0.162f, 0.22f);
    glVertex2f(0.16f, -0.2f);

    glEnd();
}
glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(0.1f, 0.32f);
    glVertex2f(0.04f, 0.1f);
    glVertex2f(-0.05f, 0.06f);
    glVertex2f(-0.14f, 0.24f);

    glVertex2f(-0.07f, 0.47f);
    glVertex2f(-0.04f, 0.72f);
    glVertex2f(0.06f, 0.8f);
    glVertex2f(0.19f, 0.74f);

    glVertex2f(0.33f, 0.7f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.36f, 0.1f);
    glVertex2f(0.2f, 0.2f);

    glVertex2f(0.18f, 0.02f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.15f, 0.01f);
    glVertex2f(0.11f, 0.03f);
    glVertex2f(0.1f, 0.07f);
    glEnd();
}
////////////////////////////
glBegin(GL_POLYGON); //////jhao
{
	glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.04f, -1.0f);
    glVertex2f(-0.1f, -0.7f);
    glVertex2f(-0.2f, -0.78f);
    glVertex2f(-0.28f, -0.62f);

    glVertex2f(-0.35f, -0.86f);
    glVertex2f(-0.41f, -0.8f);
    glVertex2f(-0.48f, -0.88f);
    glVertex2f(-0.56f, -0.7f);


    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 0.4f, 0.0f);
    glVertex2f(-0.3f, -1.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.5f, -1.0f);

    glEnd();
}

glBegin(GL_POLYGON);
{
	glColor3f(0.0f, 0.6f, 0.0f);


     glVertex2f(-0.64f, -0.78f);
    glVertex2f(-0.67f, -0.58f);
    glVertex2f(-0.77f, -0.65f);
    glVertex2f(-0.8f, -0.5f);

    glVertex2f(-0.88f, -0.44f);
    glVertex2f(-0.92f, -0.24f);
    glVertex2f(-1.0f, -0.36f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
}

glBegin(GL_TRIANGLES); //////jhao
{
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.8f, -1.0f);

    glEnd();
}


/////////////////jhao end

glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.48f);
    glVertex2f(-0.38f, -0.4f);
    glVertex2f(-0.44f, -0.4f);
    glVertex2f(-0.44f, -0.48f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.45f, -0.6f);
    glVertex2f(-0.45f, -0.5f);
    glVertex2f(-0.51f, -0.5f);
    glVertex2f(-0.51f, -0.6f);
    glEnd();
}
glBegin(GL_QUADS);///////////windows
{
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.34f, -0.6f);
    glVertex2f(-0.34f, -0.5f);
    glVertex2f(-0.38f, -0.5f);
    glVertex2f(-0.38f, -0.6f);
    glEnd();
}
/////////////finis windows
///////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position,0.0f, 0.0f);
glColor3f(0.25f,0.25f,0.25f);
 int k;
    GLfloat a=0.87f; GLfloat b=0.77f; GLfloat c =.05f;
	int amt = 20;
	GLfloat twice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(k = 0; k <= amt;k++)
            {
			glVertex2f(
                a + (c * cos(k *  twice_Pi / amt)),
			    b + (c * sin(k * twice_Pi / amt))
			          );
            }
	glEnd();
////////////

glColor3f(0.25f,0.25f,0.25f);
 int l;
    GLfloat d=0.72f; GLfloat e=0.74f; GLfloat f =.06f;
	int amtt = 20;
	GLfloat twice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(d, e);
		for(l = 0; l <= amtt;l++)
            {
			glVertex2f(
                d + (f * cos(l *  twice_pi / amtt)),
			    e + (f * sin(l * twice_pi / amtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.25f,0.25f,0.25f);
 int ll;
    GLfloat dd=0.78f; GLfloat ee=0.79f; GLfloat ff =.08f;
	int amot = 20;
	GLfloat tpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(dd, ee);
		for(ll = 0; ll <= amot;ll++)
            {
			glVertex2f(
                dd + (ff * cos(ll *  tpi / amot)),
			    ee + (ff * sin(ll * tpi / amot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position2,0.0f, 0.0f);
glColor3f(0.25f,0.25f,0.25f);
 int wk;
    GLfloat wa=0.7f; GLfloat wb=0.77f; GLfloat wc =.05f;
	int wamt = 20;
	GLfloat wtwice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wa, wb);
		for(wk = 0; wk <= wamt;wk++)
            {
			glVertex2f(
                wa + (wc * cos(wk *  wtwice_Pi / wamt)),
			    wb + (wc * sin(wk * wtwice_Pi / wamt))
			          );
            }
	glEnd();
////////////

glColor3f(0.25f,0.25f,0.25f);
 int wl;
    GLfloat wd=0.68f; GLfloat we=0.74f; GLfloat wf =.06f;
	int wamtt = 20;
	GLfloat wtwice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wd, we);
		for(wl = 0; wl <= wamtt;wl++)
            {
			glVertex2f(
                wd + (wf * cos(wl *  wtwice_pi / wamtt)),
			    we + (wf * sin(wl * wtwice_pi / wamtt))
			          );
            }
	glEnd();
//////////////////////
glColor3f(0.25f,0.25f,0.25f);
 int wll;
    GLfloat wdd=0.78f; GLfloat wee=0.74f; GLfloat wff =.08f;
	int wamot = 20;
	GLfloat wtpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wdd, wee);
		for(wll = 0; wll <= wamot;wll++)
            {
			glVertex2f(
                wdd + (wff * cos(wll *  wtpi / wamot)),
			    wee + (wff * sin(wll * wtpi / wamot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

	//glPointSize(4.0);

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,rain_pos, 0.0f);

//////////////////////////////////////////
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.95f);
	glVertex2f(0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.8f);
	glVertex2f(0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.65f);
	glVertex2f(0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.35f);
	glVertex2f(0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.05f);
	glVertex2f(0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.1f);
	glVertex2f(0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.25f);
	glVertex2f(0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.4f);
	glVertex2f(0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.55f);
	glVertex2f(0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.7f);
	glVertex2f(0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.85f);
	glVertex2f(0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.95f);
	glVertex2f(0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.8f);
	glVertex2f(0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.65f);
	glVertex2f(0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.35f);
	glVertex2f(0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.05f);
	glVertex2f(0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.1f);
	glVertex2f(0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.4f);
	glVertex2f(0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.55f);
	glVertex2f(0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.7f);
	glVertex2f(0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.85f);
	glVertex2f(0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.95f);
	glVertex2f(0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.65f);
	glVertex2f(0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.05f);
	glVertex2f(0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.55f);
	glVertex2f(0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.7f);
	glVertex2f(0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.85f);
	glVertex2f(0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.95f);
	glVertex2f(0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.8f);
	glVertex2f(0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.65f);
	glVertex2f(0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.5f);
	glVertex2f(0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.05f);
	glVertex2f(0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.25f);
	glVertex2f(0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.7f);
	glVertex2f(0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.85f);
	glVertex2f(0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.95f);
	glVertex2f(0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.8f);
	glVertex2f(0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.35f);
	glVertex2f(0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.05f);
	glVertex2f(0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.25f);
	glVertex2f(0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.7f);
	glVertex2f(0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.85f);
	glVertex2f(0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.95f);
	glVertex2f(0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.8f);
	glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.65f);
	glVertex2f(0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.55f);
	glVertex2f(0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.95f);
	glVertex2f(0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.8f);
	glVertex2f(0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.65f);
	glVertex2f(0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.7f);
	glVertex2f(0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.85f);
	glVertex2f(0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.95f);
	glVertex2f(0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.55f);
	glVertex2f(0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.85f);
	glVertex2f(0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.95f);
	glVertex2f(0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.8f);
	glVertex2f(0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.65f);
	glVertex2f(0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.55f);
	glVertex2f(0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.7f);
	glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.85f);
	glVertex2f(0.15f, -0.95f);
    glEnd();////////////// 0.15 DONE
    //////// 0.05 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.95f);
	glVertex2f(0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.8f);
	glVertex2f(0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.7f);
	glVertex2f(0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.85f);
	glVertex2f(0.05f, -0.95f);
    glEnd();/////////// 0.05 DONE
    /////////////// -0.05 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.95f);
	glVertex2f(-0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(-0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(-0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.4f);
	glVertex2f(-0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(-0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.85f);
	glVertex2f(-0.05f, -0.95f);
    glEnd();////////////// -0.05 DONE
    ////////////////////

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.95f);
	glVertex2f(-0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.65f);
	glVertex2f(-0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.35f);
	glVertex2f(-0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.05f);
	glVertex2f(-0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.55f);
	glVertex2f(-0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.7f);
	glVertex2f(-0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.85f);
	glVertex2f(-0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.95f);
	glVertex2f(-0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.8f);
	glVertex2f(-0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.55f);
	glVertex2f(-0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.85f);
	glVertex2f(-0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.95f);
	glVertex2f(-0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.65f);
	glVertex2f(-0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.85f);
	glVertex2f(-0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.95f);
	glVertex2f(-0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.25f);
	glVertex2f(-0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.85f);
	glVertex2f(-0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.95f);
	glVertex2f(-0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.8f);
	glVertex2f(-0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.05f);
	glVertex2f(-0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.85f);
	glVertex2f(-0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.95f);
	glVertex2f(-0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.8f);
	glVertex2f(-0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.65f);
	glVertex2f(-0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.25f);
	glVertex2f(-0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.55f);
	glVertex2f(-0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.95f);
	glVertex2f(-0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.8f);
	glVertex2f(-0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.65f);
	glVertex2f(-0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.05f);
	glVertex2f(-0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.55f);
	glVertex2f(-0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.85f);
	glVertex2f(-0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.95f);
	glVertex2f(-0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.8f);
	glVertex2f(-0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.65f);
	glVertex2f(-0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(-0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.55f);
	glVertex2f(-0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.85f);
	glVertex2f(-0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.95f);
	glVertex2f(-0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.65f);
	glVertex2f(-0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.25f);
	glVertex2f(-0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.55f);
	glVertex2f(-0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.85f);
	glVertex2f(-0.15f, -0.95f);
    glEnd();
    glPopMatrix();

}
/////////////////////////////////////;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
else if(scene==2)
    {
glLoadIdentity();
glBegin(GL_QUADS);
	  {
             glColor3f(0.0f, 0.0f, 0.4f);
             glVertex2f(1.0f, -1.0f);
	   glVertex2f(1.0f, 1.0f);
	   glVertex2f(-1.0f, 1.0f);
	   glVertex2f(-1.0f, -1.0f);
	   glEnd();
              }
    //////////////////////////////////////// BIRDS
      glLoadIdentity();
      glPushMatrix();
      glTranslatef(bird_pos,0.0f, 0.0f);
      glLineWidth(2.5);
	   glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.45f, 0.75f);
       glEnd();
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.4f, 0.7f);
	   glVertex2f(0.35f, 0.75f);
       glEnd();
/////////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.1f, 0.8f);
	   glVertex2f(0.05f, 0.85f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.65f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.8f);
	   glVertex2f(0.55f, 0.85f);
       glEnd();
///////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.15f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.8f);
	   glVertex2f(-0.05f, 0.85f);
       glEnd();
       ///////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.15f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.1f, 0.55f);
	   glVertex2f(-0.05f, 0.6f);
       glEnd();
       //////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.55f, 0.85f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(-0.5f, 0.8f);
	   glVertex2f(-0.45f, 0.85f);
       glEnd();
       ////////////////////////////////
       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.25f, 0.6f);
       glEnd();

       glBegin(GL_LINES);              //
	   glColor3f(0.0f, 0.0f, 0.0f);
	   glVertex2f(0.2f, 0.55f);
	   glVertex2f(0.15f, 0.6f);
       glEnd();  // BIRD FINISHED
       glPopMatrix();


    ////////////////////////////////////////
       glLoadIdentity();
	        glBegin(GL_QUADS);
	     glColor3f(0.4f, 0.3f, 0.0f);    //SEA SHORE
         glVertex2f(-1.0f, -1.0f);
	    glVertex2f(-1.0f, -0.4f);
	    glVertex2f(1.0f, -0.4f);
	    glVertex2f(1.0f, -1.0f);
        glEnd();

        glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    //SEA
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.4f);
    glEnd();

         glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,sea_pos, 0.0f);
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.8f);    // UPPER SEA
    glVertex2f(-1.0f, 0.3f);
    glVertex2f(-1.0f, -0.4f);
	glVertex2f(1.0f, -0.4f);
	glVertex2f(1.0f, 0.3f);
    glEnd();
    glPopMatrix();
   ////////////////////////////////
          glLoadIdentity();
          glPushMatrix();
          glTranslatef(right_boat_pos,0.0f, 0.0f);
       glBegin(GL_QUADS);              // RIGHT BOAT
	   glColor3f(0.7f, 0.7f, 0.0f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
	   glPopMatrix();
//////////////////////////////////////  2ND BOAT
       glPushMatrix();
       glTranslatef(left_boat_pos,0.0f, 0.0f);
       glTranslatef(-1.4f, -0.2f, 0.0f);
       glBegin(GL_QUADS);              // LEFT BOAT
	   glColor3f(0.0f, 0.5f, 0.5f);
       glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
	   glVertex2f(0.5f, 0.1f);
	   glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.78f, 0.15f);
	   glVertex2f(0.47f, 0.15f);
       glEnd();

       glBegin(GL_LINES);              //  BOAT STRIPE
	   glColor3f(0.5f, 0.0f, 0.0f);
	   glVertex2f(0.75f, 0.1f);
	   glVertex2f(0.5f, 0.1f);
       glEnd();

	   glLineWidth(1.5);
	   glBegin(GL_LINES);              //  Vertical LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.15f);
	   glVertex2f(0.6f, 0.35f);
       glEnd();

       glBegin(GL_LINES);              // RIGHT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.18f);
	   glVertex2f(0.74f, 0.18f);
       glEnd();

       glBegin(GL_LINES);              // LEFT LINE
	   glColor3f(0.4f, 0.0f, 0.0f);
	   glVertex2f(0.6f, 0.2f);
	   glVertex2f(0.52f, 0.2f);
       glEnd();

       glBegin(GL_TRIANGLES);   //  RIGHT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.61f, .19f);
	   glVertex2f(0.61f,0.35f);
	   glVertex2f(0.74f, 0.19f);
	   glEnd();

	    glBegin(GL_TRIANGLES);   //  LEFT CURTAIN
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(0.59f, .21f);
	   glVertex2f(0.59f,0.35f);
	   glVertex2f(0.52f, 0.21f);
	   glEnd();
       glPopMatrix();
///////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position,0.0f, 0.0f);
glColor3f(0.25f,0.25f,0.25f);
 int k;
    GLfloat a=0.87f; GLfloat b=0.77f; GLfloat c =.05f;
	int amt = 20;
	GLfloat twice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b);
		for(k = 0; k <= amt;k++)
            {
			glVertex2f(
                a + (c * cos(k *  twice_Pi / amt)),
			    b + (c * sin(k * twice_Pi / amt))
			          );
            }
	glEnd();
////////////

glColor3f(0.25f,0.25f,0.25f);
 int l;
    GLfloat d=0.72f; GLfloat e=0.74f; GLfloat f =.06f;
	int amtt = 20;
	GLfloat twice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(d, e);
		for(l = 0; l <= amtt;l++)
            {
			glVertex2f(
                d + (f * cos(l *  twice_pi / amtt)),
			    e + (f * sin(l * twice_pi / amtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.25f,0.25f,0.25f);
 int ll;
    GLfloat dd=0.78f; GLfloat ee=0.79f; GLfloat ff =.08f;
	int amot = 20;
	GLfloat tpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(dd, ee);
		for(ll = 0; ll <= amot;ll++)
            {
			glVertex2f(
                dd + (ff * cos(ll *  tpi / amot)),
			    ee + (ff * sin(ll * tpi / amot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

////////////////////////cloud
 glLoadIdentity();
glPushMatrix();
glTranslatef(cloudrain_position2,0.0f, 0.0f);
glColor3f(0.25f,0.25f,0.25f);
 int wk;
    GLfloat wa=0.7f; GLfloat wb=0.77f; GLfloat wc =.05f;
	int wamt = 20;
	GLfloat wtwice_Pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wa, wb);
		for(wk = 0; wk <= wamt;wk++)
            {
			glVertex2f(
                wa + (wc * cos(wk *  wtwice_Pi / wamt)),
			    wb + (wc * sin(wk * wtwice_Pi / wamt))
			          );
            }
	glEnd();
////////////

glColor3f(0.25f,0.25f,0.25f);
 int wl;
    GLfloat wd=0.68f; GLfloat we=0.74f; GLfloat wf =.06f;
	int wamtt = 20;
	GLfloat wtwice_pi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wd, we);
		for(wl = 0; wl <= wamtt;wl++)
            {
			glVertex2f(
                wd + (wf * cos(wl *  wtwice_pi / wamtt)),
			    we + (wf * sin(wl * wtwice_pi / wamtt))
			          );
            }
	glEnd();
//////////////////////

glColor3f(0.25f,0.25f,0.25f);
 int wll;
    GLfloat wdd=0.78f; GLfloat wee=0.74f; GLfloat wff =.08f;
	int wamot = 20;
	GLfloat wtpi = 2.0f * PI;
   glBegin(GL_TRIANGLE_FAN);
		glVertex2f(wdd, wee);
		for(wll = 0; wll <= wamot;wll++)
            {
			glVertex2f(
                wdd + (wff * cos(wll *  wtpi / wamot)),
			    wee + (wff * sin(wll * wtpi / wamot))
			          );
            }
	glEnd();
	glPopMatrix();
/////////////////cloud end

	//glPointSize(4.0);

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,rain_pos, 0.0f);

//////////////////////////////////////////
	glLineWidth(1.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.95f);
	glVertex2f(0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.8f);
	glVertex2f(0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.65f);
	glVertex2f(0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.5f);
	glVertex2f(0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.35f);
	glVertex2f(0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.2f);
	glVertex2f(0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, 0.05f);
	glVertex2f(0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.1f);
	glVertex2f(0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.25f);
	glVertex2f(0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.4f);
	glVertex2f(0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.55f);
	glVertex2f(0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.7f);
	glVertex2f(0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.95f, -0.85f);
	glVertex2f(0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.95f);
	glVertex2f(0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.8f);
	glVertex2f(0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.65f);
	glVertex2f(0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.35f);
	glVertex2f(0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.2f);
	glVertex2f(0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, 0.05f);
	glVertex2f(0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.1f);
	glVertex2f(0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.25f);
	glVertex2f(0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.4f);
	glVertex2f(0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.55f);
	glVertex2f(0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.7f);
	glVertex2f(0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.85f, -0.85f);
	glVertex2f(0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.95f);
	glVertex2f(0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.65f);
	glVertex2f(0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.35f);
	glVertex2f(0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.2f);
	glVertex2f(0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, 0.05f);
	glVertex2f(0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.1f);
	glVertex2f(0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.25f);
	glVertex2f(0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.4f);
	glVertex2f(0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.55f);
	glVertex2f(0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.7f);
	glVertex2f(0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.75f, -0.85f);
	glVertex2f(0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.95f);
	glVertex2f(0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.8f);
	glVertex2f(0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.65f);
	glVertex2f(0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.5f);
	glVertex2f(0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.2f);
	glVertex2f(0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, 0.05f);
	glVertex2f(0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.1f);
	glVertex2f(0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.25f);
	glVertex2f(0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.4f);
	glVertex2f(0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.55f);
	glVertex2f(0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.7f);
	glVertex2f(0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.65f, -0.85f);
	glVertex2f(0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.95f);
	glVertex2f(0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.8f);
	glVertex2f(0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.65f);
	glVertex2f(0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.35f);
	glVertex2f(0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, 0.05f);
	glVertex2f(0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.1f);
	glVertex2f(0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.25f);
	glVertex2f(0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.4f);
	glVertex2f(0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.55f);
	glVertex2f(0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.7f);
	glVertex2f(0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.55f, -0.85f);
	glVertex2f(0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.95f);
	glVertex2f(0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.8f);
	glVertex2f(0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.65f);
	glVertex2f(0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.25f);
	glVertex2f(0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.55f);
	glVertex2f(0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.7f);
	glVertex2f(0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.85f);
	glVertex2f(0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.95f);
	glVertex2f(0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.8f);
	glVertex2f(0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.65f);
	glVertex2f(0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.1f);
	glVertex2f(0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.4f);
	glVertex2f(0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.55f);
	glVertex2f(0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.7f);
	glVertex2f(0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.85f);
	glVertex2f(0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.95f);
	glVertex2f(0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.8f);
	glVertex2f(0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.35f);
	glVertex2f(0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.2f);
	glVertex2f(0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, 0.05f);
	glVertex2f(0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.1f);
	glVertex2f(0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.4f);
	glVertex2f(0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.55f);
	glVertex2f(0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.7f);
	glVertex2f(0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.25f, -0.85f);
	glVertex2f(0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.95f);
	glVertex2f(0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.8f);
	glVertex2f(0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.65f);
	glVertex2f(0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.5f);
	glVertex2f(0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.2f);
	glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.1f);
	glVertex2f(0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.25f);
	glVertex2f(0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.55f);
	glVertex2f(0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.7f);
	glVertex2f(0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.15f, -0.85f);
	glVertex2f(0.15f, -0.95f);
    glEnd();////////////// 0.15 DONE
    //////// 0.05 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.95f);
	glVertex2f(0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.8f);
	glVertex2f(0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.65f);
	glVertex2f(0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.5f);
	glVertex2f(0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.35f);
	glVertex2f(0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.25f);
	glVertex2f(0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.4f);
	glVertex2f(0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.55f);
	glVertex2f(0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.7f);
	glVertex2f(0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.05f, -0.85f);
	glVertex2f(0.05f, -0.95f);
    glEnd();/////////// 0.05 DONE
    /////////////// -0.05 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.95f);
	glVertex2f(-0.05f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.8f);
	glVertex2f(-0.05f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.5f);
	glVertex2f(-0.05f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.35f);
	glVertex2f(-0.05f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.2f);
	glVertex2f(-0.05f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.05f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.1f);
	glVertex2f(-0.05f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(-0.05f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.4f);
	glVertex2f(-0.05f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.55f);
	glVertex2f(-0.05f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.7f);
	glVertex2f(-0.05f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.05f, -0.85f);
	glVertex2f(-0.05f, -0.95f);
    glEnd();////////////// -0.05 DONE
    ////////////////////

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.95f);
	glVertex2f(-0.95f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.8f);
	glVertex2f(-0.95f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.65f);
	glVertex2f(-0.95f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.95f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.35f);
	glVertex2f(-0.95f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.95f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, 0.05f);
	glVertex2f(-0.95f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.1f);
	glVertex2f(-0.95f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.25f);
	glVertex2f(-0.95f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.4f);
	glVertex2f(-0.95f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.55f);
	glVertex2f(-0.95f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.7f);
	glVertex2f(-0.95f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.95f, -0.85f);
	glVertex2f(-0.95f, -0.95f);
    glEnd();
///////////////////////////////////////// From 0.95 DONE

    glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.95f);
	glVertex2f(-0.85f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.8f);
	glVertex2f(-0.85f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.65f);
	glVertex2f(-0.85f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.5f);
	glVertex2f(-0.85f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.2f);
	glVertex2f(-0.85f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.85f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.1f);
	glVertex2f(-0.85f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.25f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.4f);
	glVertex2f(-0.85f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.55f);
	glVertex2f(-0.85f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.7f);
	glVertex2f(-0.85f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.85f);
	glVertex2f(-0.85f, -0.95f);
    glEnd();
   ////////////////////////////////////// FROM 0.85 DONE
   //////////////// 0.75 START
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.95f);
	glVertex2f(-0.75f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.8f);
	glVertex2f(-0.75f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.65f);
	glVertex2f(-0.75f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.75f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.1f);
	glVertex2f(-0.75f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.25f);
	glVertex2f(-0.75f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.4f);
	glVertex2f(-0.75f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.55f);
	glVertex2f(-0.75f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.7f);
	glVertex2f(-0.75f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.75f, -0.85f);
	glVertex2f(-0.75f, -0.95f);
    glEnd();
//////////////////////////// FROM 0.75 DONE
///////////////////////////// 0.65 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.95f);
	glVertex2f(-0.65f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.8f);
	glVertex2f(-0.65f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.65f);
	glVertex2f(-0.65f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.65f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.35f);
	glVertex2f(-0.65f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.2f);
	glVertex2f(-0.65f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, 0.05f);
	glVertex2f(-0.65f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.1f);
	glVertex2f(-0.65f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.25f);
	glVertex2f(-0.65f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.4f);
	glVertex2f(-0.65f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.65f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.7f);
	glVertex2f(-0.65f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.65f, -0.85f);
	glVertex2f(-0.65f, -0.95f);
    glEnd();
    ////////////////////////// FROM 0.65 DONE
    ///////////////////////// 0.55 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.95f);
	glVertex2f(-0.55f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.8f);
	glVertex2f(-0.55f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.65f);
	glVertex2f(-0.55f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.55f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.55f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, 0.05f);
	glVertex2f(-0.55f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.1f);
	glVertex2f(-0.55f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.25f);
	glVertex2f(-0.55f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.4f);
	glVertex2f(-0.55f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.55f);
	glVertex2f(-0.55f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.7f);
	glVertex2f(-0.55f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.55f, -0.85f);
	glVertex2f(-0.55f, -0.95f);
    glEnd();
    ////////////////////// FROM 0.55 DONE
    /////////////// 0.45 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.95f);
	glVertex2f(-0.45f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.8f);
	glVertex2f(-0.45f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.65f);
	glVertex2f(-0.45f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.45f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.35f);
	glVertex2f(-0.45f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.2f);
	glVertex2f(-0.45f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, 0.05f);
	glVertex2f(-0.45f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.1f);
	glVertex2f(-0.45f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.25f);
	glVertex2f(-0.45f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.4f);
	glVertex2f(-0.45f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.55f);
	glVertex2f(-0.45f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.7f);
	glVertex2f(-0.45f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.45f, -0.85f);
	glVertex2f(-0.45f, -0.95f);
    glEnd();
    //////////////////////// FROM 0.45 DONE
    //////////// 0.35 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.95f);
	glVertex2f(-0.35f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.8f);
	glVertex2f(-0.35f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.65f);
	glVertex2f(-0.35f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.35f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.35f);
	glVertex2f(-0.35f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.35f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, 0.05f);
	glVertex2f(-0.35f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.1f);
	glVertex2f(-0.35f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.35f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.4f);
	glVertex2f(-0.35f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.55f);
	glVertex2f(-0.35f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.7f);
	glVertex2f(-0.35f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.35f, -0.85f);
	glVertex2f(-0.35f, -0.95f);
    glEnd(); ///////////// 0.35 DONE
    ////////////////////// 0.25 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.95f);
	glVertex2f(-0.25f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.8f);
	glVertex2f(-0.25f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.65f);
	glVertex2f(-0.25f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.5f);
	glVertex2f(-0.25f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.35f);
	glVertex2f(-0.25f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.2f);
	glVertex2f(-0.25f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, 0.05f);
	glVertex2f(-0.25f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.1f);
	glVertex2f(-0.25f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.25f);
	glVertex2f(-0.25f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.4f);
	glVertex2f(-0.25f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.55f);
	glVertex2f(-0.25f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.7f);
	glVertex2f(-0.25f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.25f, -0.85f);
	glVertex2f(-0.25f, -0.95f);
    glEnd();///////////// 0.25 DONE
    /////////////0.15 START
     glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.95f);
	glVertex2f(-0.15f, 0.85f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.8f);
	glVertex2f(-0.15f, 0.7f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.65f);
	glVertex2f(-0.15f, 0.55f);
    glEnd();

     glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.4f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.2f);
	glVertex2f(-0.15f, 0.1f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(-0.15f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.1f);
	glVertex2f(-0.15f, -0.2f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.25f);
	glVertex2f(-0.15f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.4f);
	glVertex2f(-0.15f, -0.5f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.55f);
	glVertex2f(-0.15f, -0.65f);
    glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.7f);
	glVertex2f(-0.15f, -0.8f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.15f, -0.85f);
	glVertex2f(-0.15f, -0.95f);
    glEnd();
    glPopMatrix();

    }

        }


      glFlush();

}


////////////////

void handleKeypress(unsigned char key, int x, int y)
 {

	switch (key)
	 {

case 'd':  /////////summer day
summerDay = true;
summerNight=false;
snowDay = false;
snowNight = false;
rainingDay = false;
rainingNight = false;
sndPlaySound("summer.wav",SND_ASYNC);
break;
case 'n':  /////////summer night
summerDay = false;
summerNight=true;
snowDay = false;
snowNight = false;
rainingDay = false;
rainingNight = false;
sndPlaySound("summer.wav",SND_ASYNC);
break;
case 's':  //////////////snow day
summerDay = false;
summerNight=false;
snowDay = true;
snowNight = false;
rainingDay = false;
rainingNight = false;
sndPlaySound("snow.wav",SND_ASYNC);
break;
case 'y':  /////////////snow night
summerDay = false;
summerNight=false;
snowDay = false;
snowNight = true;
rainingDay = false;
rainingNight = false;
sndPlaySound("snow.wav",SND_ASYNC);
break;
    case 'r':  //////////////rain day
 summerDay = false;
summerNight=false;
snowDay = false;
snowNight = false;
rainingDay =true;
rainingNight = false;
sndPlaySound("rain.wav",SND_ASYNC);


break;
case 'a':    ///////////rain night
summerDay = false;
summerNight=false;
snowDay = false;
snowNight = false;
rainingDay = false;
rainingNight = true;
sndPlaySound("rain.wav",SND_ASYNC);
break;
glutPostRedisplay();


	}
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Animation");
   glutDisplayFunc(display);
   init();
     glutSpecialFunc(SpecialInput);
      glutMouseFunc(handleMouse);

      glutKeyboardFunc(handleKeypress);

      glutTimerFunc(100, carupdate, 0);
      glutTimerFunc(100,SMALL_SHIP_update,0);
      glutTimerFunc(100,BIG_SHIP_update,0);
     glutTimerFunc(100,SPEED_BOAT_update,0);
     glutTimerFunc(100,truck_update,0);
     glutTimerFunc(100,bus_update,0);
     glutTimerFunc(100,train_update,0);

     /////
     glutTimerFunc(100,SMALL_SHIP_update_fs,0);
     glutTimerFunc(100,palboat_update_fs,0);
   //////////////
   glutTimerFunc(100, sea_update, 0);
	glutTimerFunc(100,right_boat_update, 0);
	glutTimerFunc(100,left_boat_update, 0);
	glutTimerFunc(100,bird_update, 0);
	//////////////////////////////
glutTimerFunc(100,snow_update,0);
      glutTimerFunc(5000,scenarioChange,0);
      ////////////////
      glutTimerFunc(100, cloudrain_update, 0);
glutTimerFunc(100, cloudrain_update2, 0);
glutTimerFunc(100,rain_update,0);
/////////////////////////
      glutTimerFunc(5000,scenarioChange,0);
//      sound_rain();
      glutMainLoop();
      return 0;
}








