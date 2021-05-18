#include <windows.h>                                                             // for MS Windows
#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>                                                        // GLUT, include glu.h and gl.h
#include <math.h>
#define PI           3.14159265358979323846

//windmil functions//
GLfloat windmil_position2 = 0.0f;
GLfloat j = 0.0f;
GLfloat windmil_speed = 0.1f;

void windmil_update2(int value) {

    if(windmil_position2 >1.0)
        windmil_position2 = -1.0f;

    windmil_position2 += windmil_speed;

	glutPostRedisplay();


	glutTimerFunc(100, windmil_update2, 0);
}

//windmil functions ends//

//Raining functions starts//
GLfloat rain_position3 = -0.10f;
GLfloat rain_speed3 = 0.1f;
GLfloat rain_position4 = -0.10f;
GLfloat rain_speed4 = 0.1f;

void rain_update3(int value) {

    if(rain_position3 <-1.0)
        rain_position3 = 1.0f;

    rain_position3 -= rain_speed3;

	glutPostRedisplay();


	glutTimerFunc(200, rain_update3, 0);
}


void rain_update4(int value) {

    if(rain_position4 <-1.0)
        rain_position4 = 1.0f;

    rain_position4 -= rain_speed4;

	glutPostRedisplay();


	glutTimerFunc(100, rain_update4, 0);
}

//Raining functions Ends//
void day();
void Idle()
{
    glutPostRedisplay();
}

void display3(int val)
{

    glutDisplayFunc(day);

}

//Animation for sun
GLfloat sun_position = 0.0f;
GLfloat sun_speed = 0.005f;
void sun_update(int value) {

    if(sun_position >2.0)
        sun_position = 2.0f;

    sun_position += sun_speed;

	glutPostRedisplay();


	glutTimerFunc(100, sun_update, 0);
}

//Animation for sun setting
GLfloat sunset_position = 0.0f;
GLfloat sunset_speed = 0.005f;
void sunset_update(int value) {
    if(sunset_position >2.0)
        sunset_position = 2.0f;
    sunset_position += sunset_speed;
	glutPostRedisplay();

	glutTimerFunc(100, sunset_update, 0);
}

//Animation for moon
GLfloat moon_position = 0.0f;
GLfloat moon_speed = 0.005f;
void moon_update(int value) {

    if(moon_position >2.0)
        moon_position = 2.0f;

    moon_position += moon_speed;

	glutPostRedisplay();


	glutTimerFunc(100, moon_update, 0);
}

//Animation for ship
GLfloat ship_position = 0.0f;
GLfloat ship_speed = 0.1f;
void ship_update(int value) {

    if(ship_position <-10.0)
        ship_position = 2.0f;

    ship_position -= ship_speed;

	glutPostRedisplay();


	glutTimerFunc(100, ship_update, 0);
}

//Animation for Train

GLfloat train_position = 0.0f;
GLfloat train_speed = 0.3f;
void train_update(int value) {

    if(train_position >20.0)
        train_position = -2.0f;

    train_position += train_speed;

	glutPostRedisplay();


	glutTimerFunc(100, train_update, 0);
}

//Animation for cars

GLfloat car1_position = 0.0f;
GLfloat car1_speed = 0.15f;
void car1_update(int value) {

    if(car1_position >10.0)
        car1_position = -2.0f;

    car1_position += car1_speed;

	glutPostRedisplay();


	glutTimerFunc(100, car1_update, 0);
}

GLfloat car2_position = 0.0f;
GLfloat car2_speed = 0.17f;
void car2_update(int value) {

    if(car2_position <-10.0)
        car2_position = 2.0f;

    car2_position -= car2_speed;

	glutPostRedisplay();


	glutTimerFunc(100, car2_update, 0);
}

//Animation for cloud
GLfloat cloud_position = 0.0f;
GLfloat cloud_speed = 0.05f;
void cloud_update(int value) {

    if(cloud_position >3.0)
        cloud_position = -3.0f;

    cloud_position += cloud_speed;

	glutPostRedisplay();


	glutTimerFunc(100, cloud_update, 0);
}


void night() {
	glClearColor(0.62f, 0.49f, 0.25f, 1.0f);                              // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);




    //Axis Define & screen dividing - will be deleted after project completion


    /*//axis define..
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, 0.0f);   //x axis
	glVertex2f(2.0f, 0.0f);                                 // Hidden 1
	glVertex2f(0.0f, 2.0f);    //y axis
	glVertex2f(0.0f, -2.0f);
	glEnd();*/

	// Screen dividing end...

	glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub(0,0,255);       // Blue Line
	glVertex2f(-2.0f, 1.17f);  // y axis
	glVertex2f(2.0f, 1.17f);
	glEnd();

	/*glBegin(GL_LINES);
	glColor3ub(0,0,0);           // Black Line
	glVertex2f(-2.0f, -1.0f);    // y axis                  // Hidden 2
	glVertex2f(2.0f, -1.0f);
	glEnd();*/

    //River line..
    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0,0,255);         // Blue
	glVertex2f(-2.0f, 0.5f);     // y axis
	glVertex2f(2.0f, 0.5f);
	glEnd();

    //River part arrives...//
	glBegin(GL_QUADS);           // River 1
	glColor3ub(	37,109,123);    // Blue
	glVertex2f(2.0f, 1.17f);     // 4 edge
	glVertex2f(-2.0f, 1.17f);    // 3 edge
	glVertex2f(-2.0f, 0.5f);     // 2 edge
	glVertex2f(2.0f, 0.5f);      // 1 edge
    glEnd();

    glBegin(GL_QUADS);           // River 2
	glColor3ub(37,109,123);    // Blue
	glVertex2f(-2.0f, -1.05f);   // 4 edge
	glVertex2f(-2.0f, -2.0f);    // 3 edge
	glVertex2f(2.0f, -2.0f);     // 2 edge
	glVertex2f(2.0f, -1.05f);    // 1 edge
    glEnd();


    // River ends...

    // Sky part arrives...

    glBegin(GL_QUADS);           // Sky
	glColor3ub(0,0,0);    // Black
	glVertex2f(-2.0f, 1.17f);    // 4 edge
	glVertex2f(-2.0f, 2.0f);     // 3 edge
	glVertex2f(2.0f, 2.0f);      // 2 edge
	glVertex2f(2.0f, 1.17f);     // 1 edge
    glEnd();

    // Sky ends...

	//moon
	int i;

    GLfloat x=-3.5f;  GLfloat y=0.0f;  GLfloat radius =.20f;                         //Sun
    int triangleAmount = 20;

	                                                                           //GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glPushMatrix();
	glTranslatef(moon_position,moon_position, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 200);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	//sun setting position Ends//



    // Hill part arrives...

    glBegin(GL_QUADS);             // hill 0
	glColor3ub(47,117,81);       // green
	glVertex2f(-2.15f, 1.65f);     // 2 edge
	glVertex2f(-2.45f, 1.17f);     // 1 edge
	glVertex2f(-1.55f, 1.17f);     // 4 edge
	glVertex2f(-1.85f, 1.68f);     // 3 edge
    glEnd();


    glBegin(GL_QUADS);            // hill 1
	glColor3ub(47,117,81);      // green
	glVertex2f(-1.37f, 1.65f);    // 2 edge
	glVertex2f(-1.75f, 1.17f);    // 1 edge
	glVertex2f(-0.8f, 1.17f);     // 4 edge
	glVertex2f(-1.17f, 1.68f);    // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 2
	glColor3ub(47,117,81);       // green
	glVertex2f(-0.5f, 1.65f);      // 2 edge
	glVertex2f(-1.0f, 1.17f);      // 1 edge
	glVertex2f(0.1f, 1.17f);       // 4 edge
	glVertex2f(-0.3f, 1.67f);      // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 3
	glColor3ub(47,117,81);       // green
	glVertex2f(0.1f, 1.66f);       // 2 edge
	glVertex2f(-0.2f, 1.17f);      // 1 edge
	glVertex2f(0.7f, 1.17f);       // 4 edge
	glVertex2f(0.3f, 1.68f);       // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 4
	glColor3ub(47,117,81);       // green
	glVertex2f(0.7f, 1.69f);       // 2 edge
	glVertex2f(0.45f, 1.17f);      // 1 edge
	glVertex2f(1.3f, 1.17f);       // 4 edge
	glVertex2f(1.0f, 1.68f);       // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 5
	glColor3ub(47,117,81);       // green
	glVertex2f(1.4f, 1.69f);       // 2 edge
	glVertex2f(1.1f, 1.17f);       // 1 edge
	glVertex2f(2.2f, 1.17f);       // 4 edge
	glVertex2f(1.75f, 1.68f);      // 3 edge
    glEnd();

    // Hill part ends...

     // Boat part arrives...
    glPushMatrix();
    glTranslatef(ship_position,0.0f, 0.0f);
    glBegin(GL_QUADS);             // ship
	glColor3ub(78,78,76);
	glVertex2f(0.8f, 0.65f);
	glVertex2f(0.5f, 0.8f);
	glVertex2f(2.2f, 0.8f);
	glVertex2f(2.2f, 0.65f);
	glEnd();

	glBegin(GL_QUADS);             // ship 1st deck
	glColor3ub(146,134,134);
	glVertex2f(0.8f, 0.95f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(2.0f, 0.8f);
	glVertex2f(2.0f, 0.95f);
	glEnd();

	glBegin(GL_QUADS);             // ship 2nd deck
	glColor3ub(137,124,111);
	glVertex2f(1.1f, 1.1f);
	glVertex2f(1.0f, 0.95f);
	glVertex2f(2.0f, 0.95f);
	glVertex2f(2.0f, 1.1f);
	glEnd();

	glBegin(GL_QUADS);             // 1st chim
	glColor3ub(0,65,80);
	glVertex2f(1.2f, 1.3f);
	glVertex2f(1.2f, 1.1f);
	glVertex2f(1.3f, 1.1f);
	glVertex2f(1.3f, 1.3f);
	glEnd();

	glBegin(GL_QUADS);             // 2nd chim
	glColor3ub(0,65,80);
	glVertex2f(1.5f, 1.3f);
	glVertex2f(1.5f, 1.1f);
	glVertex2f(1.6f, 1.1f);
	glVertex2f(1.6f, 1.3f);
	glEnd();

	glBegin(GL_QUADS);             // 3rd chim
	glColor3ub(0,65,80);
	glVertex2f(1.8f, 1.3f);
	glVertex2f(1.8f, 1.1f);
	glVertex2f(1.9f, 1.1f);
	glVertex2f(1.9f, 1.3f);
	glEnd();


    glBegin(GL_QUADS);             // window1
	glColor3ub(255,255,0);
	glVertex2f(1.2f, 1.06f);
	glVertex2f(1.2f, 0.98f);
	glVertex2f(1.3f, 0.98f);
	glVertex2f(1.3f, 1.06f);
	glEnd();

	glBegin(GL_QUADS);             // window2
	glColor3ub(255,255,0);
	glVertex2f(1.5f, 1.06f);
	glVertex2f(1.5f, 0.98f);
	glVertex2f(1.6f, 0.98f);
	glVertex2f(1.6f, 1.06f);
	glEnd();

	glBegin(GL_QUADS);             // window1
	glColor3ub(255,255,0);
	glVertex2f(1.8f, 1.06f);
	glVertex2f(1.8f, 0.98f);
	glVertex2f(1.9f, 0.98f);
	glVertex2f(1.9f, 1.06f);
	glEnd();
    glPopMatrix();



    // Boat part ends...

     // Building part arrives...

    glBegin(GL_QUADS);           // building area's base
	glColor3ub(69,69,69);     // grey
	glVertex2f(-2.0f, 0.5f);     // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);     // 2 edge
	glVertex2f(2.0f, 0.5f);     // 1 edge
    glEnd();


    // Building part arrives...

    glBegin(GL_QUADS);           // building area's base
	glColor3ub(69,69,69);     // grey
	glVertex2f(-2.0f, 0.5f);     // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);     // 2 edge
	glVertex2f(2.0f, 0.5f);     // 1 edge
    glEnd();


    //building 1
    glBegin(GL_QUADS);
	glColor3ub(110, 79, 156);//mid
	glVertex2f(-1.8f, 1.2f);
	glVertex2f(-1.8f, 0.0f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.2f, 1.2f);
    glEnd();

    glBegin(GL_QUADS);//side
	glColor3ub(98, 74, 133);
	glVertex2f(-1.2f, 1.2f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.05f, 0.15f);
	glVertex2f(-1.05f, 1.35f);
    glEnd();

    glBegin(GL_QUADS);//roof
	glColor3ub(110, 79, 156);
	glVertex2f(-1.65f, 1.35f);
	glVertex2f(-1.8f, 1.2f);
	glVertex2f(-1.2f, 1.2f);
	glVertex2f(-1.05f, 1.35f);
    glEnd();

    glBegin(GL_QUADS);//Door
	glColor3ub(48, 45, 51);
	glVertex2f(-1.6f, 0.3f);
	glVertex2f(-1.6f, 0.0f);
	glVertex2f(-1.4f, 0.0f);
	glVertex2f(-1.4f, 0.3f);
    glEnd();

    //window
    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-1.7f, 0.6f);
	glVertex2f(-1.7f, 0.5f);
	glVertex2f(-1.6f, 0.5f);
	glVertex2f(-1.6f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-1.7f, 0.8f);
	glVertex2f(-1.7f, 0.7f);
	glVertex2f(-1.6f, 0.7f);
	glVertex2f(-1.6f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-1.7f, 0.9f);
	glVertex2f(-1.7f, 1.0f);
	glVertex2f(-1.6f, 1.0f);
	glVertex2f(-1.6f, 0.9f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-1.4f, 0.6f);
	glVertex2f(-1.4f, 0.5f);
	glVertex2f(-1.3f, 0.5f);
	glVertex2f(-1.3f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-1.4f, 0.8f);
	glVertex2f(-1.4f, 0.7f);
	glVertex2f(-1.3f, 0.7f);
	glVertex2f(-1.3f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-1.4f, 0.9f);
	glVertex2f(-1.4f, 1.0f);
	glVertex2f(-1.3f, 1.0f);
	glVertex2f(-1.3f, 0.9f);
    glEnd();

    //building 2

    glBegin(GL_QUADS);//mid
	glColor3ub(255,69,0);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);//side
	glColor3ub(227, 69, 0);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof
	glColor3ub(160,160,160);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.7f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof
	glColor3ub(145,145,145);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.1f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);//door
	glColor3ub(99, 99, 33);
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.2f);
    glEnd();

    //windows

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-0.6f, 0.35f);
	glVertex2f(-0.6f, 0.25f);
	glVertex2f(-0.5f, 0.25f);
	glVertex2f(-0.5f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.5f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-0.3f, 0.35f);
	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.4f, 0.25f);
	glVertex2f(-0.4f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.4f, 0.5f);
    glEnd();

    // Building part ends...

    // Road part arrives...

    glBegin(GL_QUADS);           // Road (consider clock wise from top right most)
	glColor3ub(0, 0, 0);     // #99cc00
	glVertex2f(-2.0f, -0.80f);    // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);      // 2 edge
	glVertex2f(2.0f, -0.80f);     // 1 edge
    glEnd();

    //lamp post start
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.75f, 0.0f);
	glVertex2f(-1.75f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.6f, 0.4f);
	glVertex2f(-1.6f, 0.35f);
	glVertex2f(-1.75f, 0.35f);
	glVertex2f(-1.75f, 0.4f);
	glEnd();

	//light
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2f(-1.67f, 0.375f);
	glVertex2f(-1.55f, -0.35f);
	glVertex2f(-1.8f, -0.35f);
	glEnd();

	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.35f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.4f);
	glEnd();

	//light
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2f(0.07f, 0.375f);
	glVertex2f(-0.10f, -0.35f);
	glVertex2f(0.22f, -0.35f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.75f, 0.0f);
	glVertex2f(1.75f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1.75f, 0.4f);
	glVertex2f(1.75f, 0.35f);
	glVertex2f(1.9f, 0.35f);
	glVertex2f(1.9f, 0.4f);
	glEnd();

	//light
	glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2f(1.83f, 0.375f);
	glVertex2f(1.65f, -0.35f);
	glVertex2f(1.95f, -0.35f);
	glEnd();

    //lamp post end

    //Middle lines between road Start
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-2.0f, -0.30f);
	glVertex2f(-1.75f, -0.30f);
	glEnd();


    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.5f, -0.30f);
	glVertex2f(-1.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.30f);
	glVertex2f(-0.75f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.30f);
	glVertex2f(-0.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, -0.30f);
	glVertex2f(0.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.5f, -0.30f);
	glVertex2f(1.75f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.25f, -0.30f);
	glVertex2f(1.0f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.5f, -0.30f);
	glVertex2f(0.75f, -0.30f);
	glEnd();

    //Middle lines between road end

    // Road part ends...


    //Train Track Starts..

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, -0.85f); //x axis
	glVertex2f(2.0f, -0.85f);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(2.0f, -1.02f);
	glEnd();

	//Train pillars from left//

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

    glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

    //Train Track Ends...

    // Vehicle part arrives...

    //car1 begings
    glPushMatrix();
    glTranslatef(car1_position,0.0f, 0.0f);
    glBegin(GL_QUADS);//car down
    glColor3ub(166,44,43);
    glVertex2f(-1.15, -0.1);
    glVertex2f(-1.15, -0.2);
    glVertex2f(-0.65, -0.2);
    glVertex2f(-0.65, -0.1);
    glEnd();

    glBegin(GL_QUADS);//car up
    glColor3ub(166,44,43);
    glVertex2f(-1.09, 0.01);
    glVertex2f(-1.13, -0.1);
    glVertex2f(-0.72, -0.1);
    glVertex2f(-0.82, 0.01);
    glEnd();

    glBegin(GL_QUADS);//car window l
    glColor3ub(168,204,215);
    glVertex2f(-1.07, -0.02);
    glVertex2f(-1.11, -0.12);
    glVertex2f(-0.96, -0.12);
    glVertex2f(-0.96, -0.02);
    glEnd();

    glBegin(GL_QUADS);//car window r
    glColor3ub(168,204,215);
    glVertex2f(-0.94, -0.02);
    glVertex2f(-0.94, -0.12);
    glVertex2f(-0.74, -0.12);
    glVertex2f(-0.84, -0.02);
    glEnd();

    // wheel L
    GLfloat a=-1.09;  GLfloat b=-0.2f;  GLfloat r =.04f;
    triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim L
    a=-1.09; b=-0.2f; r =.03f;
    triangleAmount = 6;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// wheel R
    a=-0.74; b=-0.2f;r =.04f;
    triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim R
    a=-0.74; b=-0.2f; r =.03f;
    triangleAmount = 6;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //car1 ends

    //car2 begings
    glPushMatrix();
    glTranslatef(car2_position,0.0f, 0.0f);
    glBegin(GL_QUADS);//car down
    glColor3ub(0,47,148);
    glVertex2f(0.65, -0.4);
    glVertex2f(0.65, -0.5);
    glVertex2f(1.15, -0.5);
    glVertex2f(1.15, -0.4);
    glEnd();

    glBegin(GL_QUADS);//car up
    glColor3ub(0,47,148);
    glVertex2f(1.09, -0.31);
    glVertex2f(1.13, -0.4);
    glVertex2f(0.72, -0.4);
    glVertex2f(0.82, -0.31);
    glEnd();

    glBegin(GL_QUADS);//car window l
    glColor3ub(168,204,215);
    glVertex2f(1.07, -0.32);
    glVertex2f(1.11, -0.42);
    glVertex2f(0.96, -0.42);
    glVertex2f(0.96, -0.32);
    glEnd();

    glBegin(GL_QUADS);//car window r
    glColor3ub(168,204,215);
    glVertex2f(0.94, -0.32);
    glVertex2f(0.94, -0.42);
    glVertex2f(0.74, -0.42);
    glVertex2f(0.84, -0.32);
    glEnd();

    // wheel L
   a=1.09; b=-0.5f; r =.04f;
    triangleAmount = 20;
	                                                                     //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim L
    a=1.09; b=-0.5f; r =.03f;
    triangleAmount = 6;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// wheel R
    a=0.74; b=-0.5f;r =.04f;
    triangleAmount = 20;
	                                                                            //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim R
    a=0.74; b=-0.5f; r =.03f;
    triangleAmount = 6;
	                                                                            //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //car2 ends

    // Vehicle part ends...
    //tress start
    glBegin(GL_QUADS);           // Train side green background
	glColor3ub(4,215,4);     // grey
	glVertex2f(-2.0f, -0.82f);    // 4 edge
	glVertex2f(-2.0f, -0.6f);   // 3 edge
	glVertex2f(2.0f, -0.6f);   // 2 edge
	glVertex2f(2.0f, -0.82f);    // 1 edge
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub(100,100,100);     // grey
	glVertex2f(-2.0f, -0.62f);
	glVertex2f(2.0f, -0.62f);
    glEnd();

    //tree 1
    glBegin(GL_QUADS);//bark
	glColor3ub(105,100,0);
	glVertex2f(-0.9f, -0.35f);
	glVertex2f(-0.9f, -0.75f);
	glVertex2f(-0.85f, -0.75f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();
    x=-0.975f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.775f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.875f; y=-0.35f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //tree 1 end...
    //tree 2
    glBegin(GL_QUADS);//bark
	glColor3ub(105,100,0);
	glVertex2f(0.9f, -0.35f);
	glVertex2f(0.9f, -0.75f);
	glVertex2f(0.85f, -0.75f);
	glVertex2f(0.85f, -0.35f);
    glEnd();
    x=0.975f; y=-0.45f; radius =.09f;

    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=0.775f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=0.875f; y=-0.35f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //tree 2 end...

    //tress end

    //train part start
    //Train Body from left//
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();


     //Train Body from left - middle//
    glTranslatef(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();


       //Train Body left -3rd//
    glTranslatef(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

    //Train Engine//
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 200);
    glVertex2f(-0.10, -0.90);
    glVertex2f(0.20, -0.90);
    glVertex2f(0.25, -0.85);
    glVertex2f(0.25, -0.75);
    glVertex2f(0.20, -0.65);
    glVertex2f(-0.10, -0.65);
    glVertex2f(-0.10, -0.90);
    glEnd();

    glPopMatrix();

    //Train wheel Starts//

     x=-1.10f;  y=-0.95f;  radius =0.06f;                                             // Base
    triangleAmount = 20;                                                  //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

     //Wheel from left-1
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 51, 0);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 //Wheel from left-2
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-3
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 //Wheel from left-4
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-5
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-6
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-7
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-8
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

     //Train wheel Ends//

     // Train ends...

     //Bridge Code Starts...

     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.05);
     glVertex2f(-2.0, -1.35);
     glVertex2f(2.0, -1.35);
     glVertex2f(2.0, -1.05);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();

     glTranslatef(1.45,0,0);
     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();

     glTranslatef(1.45,0,0);
     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();



     glLoadIdentity();
     gluOrtho2D(-2, 2,-2, 2);

     //Rain body starts//
	   //raining open
	glPushMatrix();//////raining1
  glTranslatef(0,rain_position4, 0.0f);
   glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.8,1);//1st row
      glVertex2f(-.8,.9);

      glVertex2f(-.8,.7);
      glVertex2f(-.8,.6);

      glVertex2f(-.8,.4);
      glVertex2f(-.8,.3);

      glVertex2f(-.8,.2);
      glVertex2f(-.8,.1);

      glVertex2f(-.8,.0);
      glVertex2f(-.8,-.1);

      glVertex2f(-.8,-.2);
      glVertex2f(-.8,-.3);

      glVertex2f(-.8,-.4);
      glVertex2f(-.8,-.5);

      glVertex2f(-.8,-.6);
      glVertex2f(-.8,-.7);



      glVertex2f(-0.4,1);//3rd row
      glVertex2f(-.4,.9);

      glVertex2f(-.4,.7);
      glVertex2f(-.4,.6);

      glVertex2f(-.4,.4);
      glVertex2f(-.4,.3);

      glVertex2f(-.4,.2);
      glVertex2f(-.4,.1);

      glVertex2f(-.4,.0);
      glVertex2f(-.4,-.1);

    glVertex2f(-.4,-.2);
      glVertex2f(-.4,-.3);

      glVertex2f(-.4,-.4);
      glVertex2f(-.4,-.5);

      glVertex2f(-.4,-.6);
      glVertex2f(-.4,-.7);

      glVertex2f(-.4,-.8);
      glVertex2f(-.4,-.9);


        glVertex2f(0,1);//5th row
      glVertex2f(0,.9);

      glVertex2f(0,.7);
      glVertex2f(0,.6);

      glVertex2f(0,.4);
      glVertex2f(0,.3);

      glVertex2f(0,.2);
      glVertex2f(0,.1);

      glVertex2f(0,.0);
      glVertex2f(0,-.1);

      glVertex2f(0,-.2);
      glVertex2f(0,-.3);

      glVertex2f(0,-.4);
      glVertex2f(0,-.5);

      glVertex2f(0,-.6);
      glVertex2f(0,-.7);

      glVertex2f(0,-.8);
      glVertex2f(0,-.9);




       glVertex2f(0.4,1);//3rd row
      glVertex2f(.4,.9);

      glVertex2f(.4,.7);
      glVertex2f(.4,.6);

      glVertex2f(.4,.4);
      glVertex2f(.4,.3);

      glVertex2f(.4,.2);
      glVertex2f(.4,.1);

      glVertex2f(.4,.0);
      glVertex2f(.4,-.1);

    glVertex2f(.4,-.2);
      glVertex2f(.4,-.3);

      glVertex2f(.4,-.4);
      glVertex2f(.4,-.5);

      glVertex2f(.4,-.6);
      glVertex2f(.4,-.7);

      glVertex2f(.4,-.8);
      glVertex2f(.4,-.9);

  glEnd();
  glPopMatrix();

  //copy rain starts//
  glPushMatrix();//////raining1
  glTranslatef(0,rain_position4, 0.0f);
    glTranslatef(2,2,0);
   glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.8,1);//1st row
      glVertex2f(-.8,.9);

      glVertex2f(-.8,.7);
      glVertex2f(-.8,.6);

      glVertex2f(-.8,.4);
      glVertex2f(-.8,.3);

      glVertex2f(-.8,.2);
      glVertex2f(-.8,.1);

      glVertex2f(-.8,.0);
      glVertex2f(-.8,-.1);

      glVertex2f(-.8,-.2);
      glVertex2f(-.8,-.3);

      glVertex2f(-.8,-.4);
      glVertex2f(-.8,-.5);

      glVertex2f(-.8,-.6);
      glVertex2f(-.8,-.7);



      glVertex2f(-0.4,1);//3rd row
      glVertex2f(-.4,.9);

      glVertex2f(-.4,.7);
      glVertex2f(-.4,.6);

      glVertex2f(-.4,.4);
      glVertex2f(-.4,.3);

      glVertex2f(-.4,.2);
      glVertex2f(-.4,.1);

      glVertex2f(-.4,.0);
      glVertex2f(-.4,-.1);

    glVertex2f(-.4,-.2);
      glVertex2f(-.4,-.3);

      glVertex2f(-.4,-.4);
      glVertex2f(-.4,-.5);

      glVertex2f(-.4,-.6);
      glVertex2f(-.4,-.7);

      glVertex2f(-.4,-.8);
      glVertex2f(-.4,-.9);


        glVertex2f(0,1);//5th row
      glVertex2f(0,.9);

      glVertex2f(0,.7);
      glVertex2f(0,.6);

      glVertex2f(0,.4);
      glVertex2f(0,.3);

      glVertex2f(0,.2);
      glVertex2f(0,.1);

      glVertex2f(0,.0);
      glVertex2f(0,-.1);

      glVertex2f(0,-.2);
      glVertex2f(0,-.3);

      glVertex2f(0,-.4);
      glVertex2f(0,-.5);

      glVertex2f(0,-.6);
      glVertex2f(0,-.7);

      glVertex2f(0,-.8);
      glVertex2f(0,-.9);




       glVertex2f(0.4,1);//3rd row
      glVertex2f(.4,.9);

      glVertex2f(.4,.7);
      glVertex2f(.4,.6);

      glVertex2f(.4,.4);
      glVertex2f(.4,.3);

      glVertex2f(.4,.2);
      glVertex2f(.4,.1);

      glVertex2f(.4,.0);
      glVertex2f(.4,-.1);

    glVertex2f(.4,-.2);
      glVertex2f(.4,-.3);

      glVertex2f(.4,-.4);
      glVertex2f(.4,-.5);

      glVertex2f(.4,-.6);
      glVertex2f(.4,-.7);

      glVertex2f(.4,-.8);
      glVertex2f(.4,-.9);

  glEnd();
  //copy rain stops//

glPopMatrix();


        glPushMatrix();
        glTranslatef(0,rain_position3, 0.0f);
        glBegin(GL_LINES);


      //2nd row


      glVertex2f(-.6,.7);
      glVertex2f(-.6,.6);

      glVertex2f(-.6,.4);
      glVertex2f(-.6,.3);

      glVertex2f(-.6,.2);
      glVertex2f(-.6,.1);

      glVertex2f(-.6,.0);
      glVertex2f(-.6,-.1);

    glVertex2f(-.6,-.2);
      glVertex2f(-.6,-.3);

      glVertex2f(-.6,-.4);
      glVertex2f(-.6,-.5);

      glVertex2f(-.6,-.6);
      glVertex2f(-.6,-.7);

      glVertex2f(-.6,-.8);
      glVertex2f(-.6,-.9);

       glVertex2f(-0.2,1);//4th row
      glVertex2f(-.2,.9);

      glVertex2f(-.2,.7);
      glVertex2f(-.2,.6);

      glVertex2f(-.2,.4);
      glVertex2f(-.2,.3);

      glVertex2f(-.2,.2);
      glVertex2f(-.2,.1);

      glVertex2f(-.2,.0);
      glVertex2f(-.2,-.1);

    glVertex2f(-.2,-.2);
      glVertex2f(-.2,-.3);

      glVertex2f(-.2,-.4);
      glVertex2f(-.2,-.5);

      glVertex2f(-.2,-.6);
      glVertex2f(-.2,-.7);

      glVertex2f(-.2,-.8);
      glVertex2f(-.2,-.9);


///////////////////////////////

      glVertex2f(0.2,1);//6th row
      glVertex2f(0.2,.9);

      glVertex2f(0.2,.7);
      glVertex2f(0.2,.6);

      glVertex2f(0.2,.4);
      glVertex2f(0.2,.3);

      glVertex2f(0.2,.2);
      glVertex2f(0.2,.1);

      glVertex2f(0.2,.0);
      glVertex2f(0.2,-.1);

      glVertex2f(0.2,-.2);
      glVertex2f(0.2,-.3);

      glVertex2f(0.2,-.4);
      glVertex2f(0.2,-.5);

      glVertex2f(0.2,-.6);
      glVertex2f(0.2,-.7);

      glVertex2f(0.2,-.8);
      glVertex2f(0.2,-.9);

      glVertex2f(0.8,1);//7st row
      glVertex2f(.8,.9);

      glVertex2f(.8,.7);
      glVertex2f(.8,.6);

      glVertex2f(.8,.4);
      glVertex2f(.8,.3);

      glVertex2f(.8,.2);
      glVertex2f(.8,.1);

      glVertex2f(.8,.0);
      glVertex2f(.8,-.1);

    glVertex2f(.8,-.2);
      glVertex2f(.8,-.3);

      glVertex2f(.8,-.4);
      glVertex2f(.8,-.5);

      glVertex2f(.8,-.6);
      glVertex2f(.8,-.7);

      //8thnd row


      glVertex2f(.6,.7);
      glVertex2f(.6,.6);

      glVertex2f(.6,.4);
      glVertex2f(.6,.3);

      glVertex2f(.6,.2);
      glVertex2f(.6,.1);

      glVertex2f(.6,.0);
      glVertex2f(.6,-.1);

    glVertex2f(.6,-.2);
      glVertex2f(.6,-.3);

      glVertex2f(.6,-.4);
      glVertex2f(.6,-.5);

      glVertex2f(.6,-.6);
      glVertex2f(.6,-.7);

      glVertex2f(.6,-.8);
      glVertex2f(.6,-.9);


   glEnd();

    glPopMatrix();

    //negative side copy rains starts//

    glPushMatrix();
        glTranslatef(0,rain_position3, 0.0f);
        glTranslatef(2,2,0);
        glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);


      //2nd row


      glVertex2f(-.6,.7);
      glVertex2f(-.6,.6);

      glVertex2f(-.6,.4);
      glVertex2f(-.6,.3);

      glVertex2f(-.6,.2);
      glVertex2f(-.6,.1);

      glVertex2f(-.6,.0);
      glVertex2f(-.6,-.1);

    glVertex2f(-.6,-.2);
      glVertex2f(-.6,-.3);

      glVertex2f(-.6,-.4);
      glVertex2f(-.6,-.5);

      glVertex2f(-.6,-.6);
      glVertex2f(-.6,-.7);

      glVertex2f(-.6,-.8);
      glVertex2f(-.6,-.9);

       glVertex2f(-0.2,1);//4th row
      glVertex2f(-.2,.9);

      glVertex2f(-.2,.7);
      glVertex2f(-.2,.6);

      glVertex2f(-.2,.4);
      glVertex2f(-.2,.3);

      glVertex2f(-.2,.2);
      glVertex2f(-.2,.1);

      glVertex2f(-.2,.0);
      glVertex2f(-.2,-.1);

    glVertex2f(-.2,-.2);
      glVertex2f(-.2,-.3);

      glVertex2f(-.2,-.4);
      glVertex2f(-.2,-.5);

      glVertex2f(-.2,-.6);
      glVertex2f(-.2,-.7);

      glVertex2f(-.2,-.8);
      glVertex2f(-.2,-.9);



//////////////////////////////

      glVertex2f(0.2,1);//6th row
      glVertex2f(0.2,.9);

      glVertex2f(0.2,.7);
      glVertex2f(0.2,.6);

      glVertex2f(0.2,.4);
      glVertex2f(0.2,.3);

      glVertex2f(0.2,.2);
      glVertex2f(0.2,.1);

      glVertex2f(0.2,.0);
      glVertex2f(0.2,-.1);

      glVertex2f(0.2,-.2);
      glVertex2f(0.2,-.3);

      glVertex2f(0.2,-.4);
      glVertex2f(0.2,-.5);

      glVertex2f(0.2,-.6);
      glVertex2f(0.2,-.7);

      glVertex2f(0.2,-.8);
      glVertex2f(0.2,-.9);

      glVertex2f(0.8,1);//7st row
      glVertex2f(.8,.9);

      glVertex2f(.8,.7);
      glVertex2f(.8,.6);

      glVertex2f(.8,.4);
      glVertex2f(.8,.3);

      glVertex2f(.8,.2);
      glVertex2f(.8,.1);

      glVertex2f(.8,.0);
      glVertex2f(.8,-.1);

    glVertex2f(.8,-.2);
      glVertex2f(.8,-.3);

      glVertex2f(.8,-.4);
      glVertex2f(.8,-.5);

      glVertex2f(.8,-.6);
      glVertex2f(.8,-.7);

      //8thnd row


      glVertex2f(.6,.7);
      glVertex2f(.6,.6);

      glVertex2f(.6,.4);
      glVertex2f(.6,.3);

      glVertex2f(.6,.2);
      glVertex2f(.6,.1);

      glVertex2f(.6,.0);
      glVertex2f(.6,-.1);

    glVertex2f(.6,-.2);
      glVertex2f(.6,-.3);

      glVertex2f(.6,-.4);
      glVertex2f(.6,-.5);

      glVertex2f(.6,-.6);
      glVertex2f(.6,-.7);

      glVertex2f(.6,-.8);
      glVertex2f(.6,-.9);


   glEnd();

glPopMatrix();

    //negative side copy rains stops//


	//raining close//
	//Rain body Ends//

	//Windmil part starts//

	//Winmill Codes Starts

     //windmil stand
    glLineWidth(15);
    glTranslatef(.8, .4, 0);
     glBegin(GL_LINES);
     glColor3ub(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(0.00f, 0.4f);

    glEnd();

	//Rotating Part Starts//
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(0.0f, 0.4f,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis

	//blades//
    glBegin(GL_TRIANGLES);
  glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.01f);
    glVertex2f(0.5f, -0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.06f, 0.05f);
    glVertex2f(-0.1f, 0.7f);

    glEnd();

     glBegin(GL_TRIANGLES);
      glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.05f);
    glVertex2f(-0.6f, -0.3f);

    glEnd();

    glPopMatrix();


    j+=0.1f;

     //Stand Circle//

    int k;

	 x=0.0f;  y=.4f; radius =.1f;
    triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0.0f, 0.0f, 0.0f);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	 gluOrtho2D(-2, 2,-2, 2);


     //Windmill Codes Ends

	//Windmil part ends//


     //Bridge Code Ends//
     glutTimerFunc(15000,display3,0);

	glFlush();  // Render now
}

void display2(int val) {

 glutDisplayFunc(night);

}



void evening() {
	glClearColor(0.62f, 0.49f, 0.25f, 1.0f);                              // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);


    //Axis Define & screen dividing - will be deleted after project completion


    /*//axis define..
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, 0.0f);   //x axis
	glVertex2f(2.0f, 0.0f);                                 // Hidden 1
	glVertex2f(0.0f, 2.0f);    //y axis
	glVertex2f(0.0f, -2.0f);
	glEnd();*/

	// Screen dividing end...

	glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub(0,0,255);       // Blue Line
	glVertex2f(-2.0f, 1.17f);  // y axis
	glVertex2f(2.0f, 1.17f);
	glEnd();

	/*glBegin(GL_LINES);
	glColor3ub(0,0,0);           // Black Line
	glVertex2f(-2.0f, -1.0f);    // y axis                  // Hidden 2
	glVertex2f(2.0f, -1.0f);
	glEnd();*/

    //River line..
    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0,0,255);         // Blue
	glVertex2f(-2.0f, 0.5f);     // y axis
	glVertex2f(2.0f, 0.5f);
	glEnd();

    //River part arrives...//
	glBegin(GL_QUADS);           // River 1
	glColor3ub(	0, 166, 237);    // Blue
	glVertex2f(2.0f, 1.17f);     // 4 edge
	glVertex2f(-2.0f, 1.17f);    // 3 edge
	glVertex2f(-2.0f, 0.5f);     // 2 edge
	glVertex2f(2.0f, 0.5f);      // 1 edge
    glEnd();

    glBegin(GL_QUADS);           // River 2
	glColor3ub(0, 166, 237);    // Blue
	glVertex2f(-2.0f, -1.05f);   // 4 edge
	glVertex2f(-2.0f, -2.0f);    // 3 edge
	glVertex2f(2.0f, -2.0f);     // 2 edge
	glVertex2f(2.0f, -1.05f);    // 1 edge
    glEnd();


    // River ends...

    // Sky part arrives...

    glBegin(GL_QUADS);           // Sky
	glColor3ub(255,198,112);    // Blue
	glVertex2f(-2.0f, 1.17f);    // 4 edge
	glVertex2f(-2.0f, 2.0f);     // 3 edge
	glVertex2f(2.0f, 2.0f);      // 2 edge
	glVertex2f(2.0f, 1.17f);     // 1 edge
    glEnd();

    // Sky ends...

	//sun setting position starts//
	int i;
  GLfloat x=0.7f;  GLfloat y=2.8f;  GLfloat radius =.20f;                         //Sun
    int triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glPushMatrix();
	glTranslatef(sunset_position,-sunset_position, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 50, 65);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	//sun setting position Ends//



    // Hill part arrives...

    glBegin(GL_QUADS);             // hill 0
	glColor3ub(47,117,81);       // green
	glVertex2f(-2.15f, 1.65f);     // 2 edge
	glVertex2f(-2.45f, 1.17f);     // 1 edge
	glVertex2f(-1.55f, 1.17f);     // 4 edge
	glVertex2f(-1.85f, 1.68f);     // 3 edge
    glEnd();


    glBegin(GL_QUADS);            // hill 1
	glColor3ub(47,117,81);      // green
	glVertex2f(-1.37f, 1.65f);    // 2 edge
	glVertex2f(-1.75f, 1.17f);    // 1 edge
	glVertex2f(-0.8f, 1.17f);     // 4 edge
	glVertex2f(-1.17f, 1.68f);    // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 2
	glColor3ub(47,117,81);       // green
	glVertex2f(-0.5f, 1.65f);      // 2 edge
	glVertex2f(-1.0f, 1.17f);      // 1 edge
	glVertex2f(0.1f, 1.17f);       // 4 edge
	glVertex2f(-0.3f, 1.67f);      // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 3
	glColor3ub(47,117,81);       // green
	glVertex2f(0.1f, 1.66f);       // 2 edge
	glVertex2f(-0.2f, 1.17f);      // 1 edge
	glVertex2f(0.7f, 1.17f);       // 4 edge
	glVertex2f(0.3f, 1.68f);       // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 4
	glColor3ub(47,117,81);       // green
	glVertex2f(0.7f, 1.69f);       // 2 edge
	glVertex2f(0.45f, 1.17f);      // 1 edge
	glVertex2f(1.3f, 1.17f);       // 4 edge
	glVertex2f(1.0f, 1.68f);       // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 5
	glColor3ub(47,117,81);       // green
	glVertex2f(1.4f, 1.69f);       // 2 edge
	glVertex2f(1.1f, 1.17f);       // 1 edge
	glVertex2f(2.2f, 1.17f);       // 4 edge
	glVertex2f(1.75f, 1.68f);      // 3 edge
    glEnd();

    // Hill part ends...

     // Boat part arrives...
    glPushMatrix();
    glTranslatef(ship_position,0.0f, 0.0f);
    glBegin(GL_QUADS);             // ship
	glColor3ub(78,78,76);
	glVertex2f(0.8f, 0.65f);
	glVertex2f(0.5f, 0.8f);
	glVertex2f(2.2f, 0.8f);
	glVertex2f(2.2f, 0.65f);
	glEnd();

	glBegin(GL_QUADS);             // ship 1st deck
	glColor3ub(146,134,134);
	glVertex2f(0.8f, 0.95f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(2.0f, 0.8f);
	glVertex2f(2.0f, 0.95f);
	glEnd();

	glBegin(GL_QUADS);             // ship 2nd deck
	glColor3ub(137,124,111);
	glVertex2f(1.1f, 1.1f);
	glVertex2f(1.0f, 0.95f);
	glVertex2f(2.0f, 0.95f);
	glVertex2f(2.0f, 1.1f);
	glEnd();

	glBegin(GL_QUADS);             // 1st chim
	glColor3ub(0,65,80);
	glVertex2f(1.2f, 1.3f);
	glVertex2f(1.2f, 1.1f);
	glVertex2f(1.3f, 1.1f);
	glVertex2f(1.3f, 1.3f);
	glEnd();

	glBegin(GL_QUADS);             // 2nd chim
	glColor3ub(0,65,80);
	glVertex2f(1.5f, 1.3f);
	glVertex2f(1.5f, 1.1f);
	glVertex2f(1.6f, 1.1f);
	glVertex2f(1.6f, 1.3f);
	glEnd();

	glBegin(GL_QUADS);             // 3rd chim
	glColor3ub(0,65,80);
	glVertex2f(1.8f, 1.3f);
	glVertex2f(1.8f, 1.1f);
	glVertex2f(1.9f, 1.1f);
	glVertex2f(1.9f, 1.3f);
	glEnd();


    glBegin(GL_QUADS);             // window1
	glColor3ub(168,204,215);
	glVertex2f(1.2f, 1.06f);
	glVertex2f(1.2f, 0.98f);
	glVertex2f(1.3f, 0.98f);
	glVertex2f(1.3f, 1.06f);
	glEnd();

	glBegin(GL_QUADS);             // window2
	glColor3ub(168,204,215);
	glVertex2f(1.5f, 1.06f);
	glVertex2f(1.5f, 0.98f);
	glVertex2f(1.6f, 0.98f);
	glVertex2f(1.6f, 1.06f);
	glEnd();

	glBegin(GL_QUADS);             // window1
	glColor3ub(168,204,215);
	glVertex2f(1.8f, 1.06f);
	glVertex2f(1.8f, 0.98f);
	glVertex2f(1.9f, 0.98f);
	glVertex2f(1.9f, 1.06f);
	glEnd();
    glPopMatrix();



    // Boat part ends...

     // Building part arrives...

    glBegin(GL_QUADS);           // building area's base
	glColor3ub(69,69,69);     // grey
	glVertex2f(-2.0f, 0.5f);     // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);     // 2 edge
	glVertex2f(2.0f, 0.5f);     // 1 edge
    glEnd();

    glBegin(GL_QUADS);           // building area's base
	glColor3ub(69,69,69);     // grey
	glVertex2f(-2.0f, 0.5f);     // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);     // 2 edge
	glVertex2f(2.0f, 0.5f);     // 1 edge
    glEnd();

    //building 1
    glBegin(GL_QUADS);
	glColor3ub(110, 79, 156);//mid
	glVertex2f(-1.8f, 1.2f);
	glVertex2f(-1.8f, 0.0f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.2f, 1.2f);
    glEnd();

    glBegin(GL_QUADS);//side
	glColor3ub(98, 74, 133);
	glVertex2f(-1.2f, 1.2f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.05f, 0.15f);
	glVertex2f(-1.05f, 1.35f);
    glEnd();

    glBegin(GL_QUADS);//roof
	glColor3ub(110, 79, 156);
	glVertex2f(-1.65f, 1.35f);
	glVertex2f(-1.8f, 1.2f);
	glVertex2f(-1.2f, 1.2f);
	glVertex2f(-1.05f, 1.35f);
    glEnd();

    glBegin(GL_QUADS);//Door
	glColor3ub(48, 45, 51);
	glVertex2f(-1.6f, 0.3f);
	glVertex2f(-1.6f, 0.0f);
	glVertex2f(-1.4f, 0.0f);
	glVertex2f(-1.4f, 0.3f);
    glEnd();

    //window
    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.7f, 0.6f);
	glVertex2f(-1.7f, 0.5f);
	glVertex2f(-1.6f, 0.5f);
	glVertex2f(-1.6f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.7f, 0.8f);
	glVertex2f(-1.7f, 0.7f);
	glVertex2f(-1.6f, 0.7f);
	glVertex2f(-1.6f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.7f, 0.9f);
	glVertex2f(-1.7f, 1.0f);
	glVertex2f(-1.6f, 1.0f);
	glVertex2f(-1.6f, 0.9f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.4f, 0.6f);
	glVertex2f(-1.4f, 0.5f);
	glVertex2f(-1.3f, 0.5f);
	glVertex2f(-1.3f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.4f, 0.8f);
	glVertex2f(-1.4f, 0.7f);
	glVertex2f(-1.3f, 0.7f);
	glVertex2f(-1.3f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.4f, 0.9f);
	glVertex2f(-1.4f, 1.0f);
	glVertex2f(-1.3f, 1.0f);
	glVertex2f(-1.3f, 0.9f);
    glEnd();

    //building 2

    glBegin(GL_QUADS);//mid
	glColor3ub(255,69,0);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);//side
	glColor3ub(255,69,0);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof
	glColor3ub(160,160,160);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.7f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof
	glColor3ub(145,145,145);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.1f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);//door
	glColor3ub(99, 99, 33);
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.2f);
    glEnd();

    //windows

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.6f, 0.35f);
	glVertex2f(-0.6f, 0.25f);
	glVertex2f(-0.5f, 0.25f);
	glVertex2f(-0.5f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.5f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.3f, 0.35f);
	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.4f, 0.25f);
	glVertex2f(-0.4f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.4f, 0.5f);
    glEnd();

    // Building part ends...

    // Road part arrives...

    glBegin(GL_QUADS);           // Road (consider clock wise from top right most)
	glColor3ub(0, 0, 0);     // #99cc00
	glVertex2f(-2.0f, -0.80f);    // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);      // 2 edge
	glVertex2f(2.0f, -0.80f);     // 1 edge
    glEnd();

    //lamp post start
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.75f, 0.0f);
	glVertex2f(-1.75f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.6f, 0.4f);
	glVertex2f(-1.6f, 0.35f);
	glVertex2f(-1.75f, 0.35f);
	glVertex2f(-1.75f, 0.4f);
	glEnd();

	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.35f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.4f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.75f, 0.0f);
	glVertex2f(1.75f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1.75f, 0.4f);
	glVertex2f(1.75f, 0.35f);
	glVertex2f(1.9f, 0.35f);
	glVertex2f(1.9f, 0.4f);
	glEnd();

    //lamp post end

    //Middle lines between road Start
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-2.0f, -0.30f);
	glVertex2f(-1.75f, -0.30f);
	glEnd();


    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.5f, -0.30f);
	glVertex2f(-1.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.30f);
	glVertex2f(-0.75f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.30f);
	glVertex2f(-0.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, -0.30f);
	glVertex2f(0.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.5f, -0.30f);
	glVertex2f(1.75f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.25f, -0.30f);
	glVertex2f(1.0f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.5f, -0.30f);
	glVertex2f(0.75f, -0.30f);
	glEnd();

    //Middle lines between road end

    // Road part ends...


    //Train Track Starts..

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, -0.85f); //x axis
	glVertex2f(2.0f, -0.85f);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(2.0f, -1.02f);
	glEnd();

	//Train pillars from left//

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

    glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

    //Train Track Ends...

    // Vehicle part arrives...

    //car1 begings
    glPushMatrix();
    glTranslatef(car1_position,0.0f, 0.0f);
    glBegin(GL_QUADS);//car down
    glColor3ub(166,44,43);
    glVertex2f(-1.15, -0.1);
    glVertex2f(-1.15, -0.2);
    glVertex2f(-0.65, -0.2);
    glVertex2f(-0.65, -0.1);
    glEnd();

    glBegin(GL_QUADS);//car up
    glColor3ub(166,44,43);
    glVertex2f(-1.09, 0.01);
    glVertex2f(-1.13, -0.1);
    glVertex2f(-0.72, -0.1);
    glVertex2f(-0.82, 0.01);
    glEnd();

    glBegin(GL_QUADS);//car window l
    glColor3ub(168,204,215);
    glVertex2f(-1.07, -0.02);
    glVertex2f(-1.11, -0.12);
    glVertex2f(-0.96, -0.12);
    glVertex2f(-0.96, -0.02);
    glEnd();

    glBegin(GL_QUADS);//car window r
    glColor3ub(168,204,215);
    glVertex2f(-0.94, -0.02);
    glVertex2f(-0.94, -0.12);
    glVertex2f(-0.74, -0.12);
    glVertex2f(-0.84, -0.02);
    glEnd();

    // wheel L
    GLfloat a=-1.09;  GLfloat b=-0.2f;  GLfloat r =.04f;
    triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim L
    a=-1.09; b=-0.2f; r =.03f;
    triangleAmount = 6;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// wheel R
    a=-0.74; b=-0.2f;r =.04f;
    triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim R
    a=-0.74; b=-0.2f; r =.03f;
    triangleAmount = 6;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //car1 ends

    //car2 begings
    glPushMatrix();
    glTranslatef(car2_position,0.0f, 0.0f);
    glBegin(GL_QUADS);//car down
    glColor3ub(0,47,148);
    glVertex2f(0.65, -0.4);
    glVertex2f(0.65, -0.5);
    glVertex2f(1.15, -0.5);
    glVertex2f(1.15, -0.4);
    glEnd();

    glBegin(GL_QUADS);//car up
    glColor3ub(0,47,148);
    glVertex2f(1.09, -0.31);
    glVertex2f(1.13, -0.4);
    glVertex2f(0.72, -0.4);
    glVertex2f(0.82, -0.31);
    glEnd();

    glBegin(GL_QUADS);//car window l
    glColor3ub(168,204,215);
    glVertex2f(1.07, -0.32);
    glVertex2f(1.11, -0.42);
    glVertex2f(0.96, -0.42);
    glVertex2f(0.96, -0.32);
    glEnd();

    glBegin(GL_QUADS);//car window r
    glColor3ub(168,204,215);
    glVertex2f(0.94, -0.32);
    glVertex2f(0.94, -0.42);
    glVertex2f(0.74, -0.42);
    glVertex2f(0.84, -0.32);
    glEnd();

    // wheel L
   a=1.09; b=-0.5f; r =.04f;
    triangleAmount = 20;
	                                                                     //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim L
    a=1.09; b=-0.5f; r =.03f;
    triangleAmount = 6;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// wheel R
    a=0.74; b=-0.5f;r =.04f;
    triangleAmount = 20;
	                                                                            //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim R
    a=0.74; b=-0.5f; r =.03f;
    triangleAmount = 6;
	                                                                            //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //car2 ends

    // Vehicle part ends...
    //tress start
    glBegin(GL_QUADS);           // Train side green background
	glColor3ub(4,215,4);     // grey
	glVertex2f(-2.0f, -0.82f);    // 4 edge
	glVertex2f(-2.0f, -0.6f);   // 3 edge
	glVertex2f(2.0f, -0.6f);   // 2 edge
	glVertex2f(2.0f, -0.82f);    // 1 edge
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub(100,100,100);     // grey
	glVertex2f(-2.0f, -0.62f);
	glVertex2f(2.0f, -0.62f);
    glEnd();

    //tree 1
    glBegin(GL_QUADS);//bark
	glColor3ub(105,100,0);
	glVertex2f(-0.9f, -0.35f);
	glVertex2f(-0.9f, -0.75f);
	glVertex2f(-0.85f, -0.75f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();
    x=-0.975f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.775f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.875f; y=-0.35f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //tree 1 end...
    //tree 2
    glBegin(GL_QUADS);//bark
	glColor3ub(105,100,0);
	glVertex2f(0.9f, -0.35f);
	glVertex2f(0.9f, -0.75f);
	glVertex2f(0.85f, -0.75f);
	glVertex2f(0.85f, -0.35f);
    glEnd();
    x=0.975f; y=-0.45f; radius =.09f;

    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=0.775f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=0.875f; y=-0.35f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //tree 2 end...

    //tress end

    //train part start
    //Train Body from left//
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();


     //Train Body from left - middle//
    glTranslatef(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();


       //Train Body left -3rd//
    glTranslatef(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

    //Train Engine//
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 200);
    glVertex2f(-0.10, -0.90);
    glVertex2f(0.20, -0.90);
    glVertex2f(0.25, -0.85);
    glVertex2f(0.25, -0.75);
    glVertex2f(0.20, -0.65);
    glVertex2f(-0.10, -0.65);
    glVertex2f(-0.10, -0.90);
    glEnd();

    glPopMatrix();

    //Train wheel Starts//

     x=-1.10f;  y=-0.95f;  radius =0.06f;                                             // Base
    triangleAmount = 20;                                                  //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

     //Wheel from left-1
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 51, 0);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 //Wheel from left-2
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-3
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 //Wheel from left-4
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-5
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-6
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-7
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-8
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

     //Train wheel Ends//

     // Train ends...

     //Bridge Code Starts...

     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.05);
     glVertex2f(-2.0, -1.35);
     glVertex2f(2.0, -1.35);
     glVertex2f(2.0, -1.05);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();

     glTranslatef(1.45,0,0);
     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();

     glTranslatef(1.45,0,0);
     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();



     glLoadIdentity();
     gluOrtho2D(-2, 2,-2, 2);

     //Windmil parts starts//

     //Winmill Codes Starts

     //windmil stand
    glLineWidth(15);
    glTranslatef(.8, .4, 0);
     glBegin(GL_LINES);
     glColor3ub(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(0.00f, 0.4f);

    glEnd();

	//Rotating Part Starts//
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(0.0f, 0.4f,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis

	//blades//
    glBegin(GL_TRIANGLES);
  glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.01f);
    glVertex2f(0.5f, -0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.06f, 0.05f);
    glVertex2f(-0.1f, 0.7f);

    glEnd();

     glBegin(GL_TRIANGLES);
      glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.05f);
    glVertex2f(-0.6f, -0.3f);

    glEnd();

    glPopMatrix();


    j+=0.1f;

     //Stand Circle//

    int k;

	 x=0.0f;  y=.4f; radius =.1f;
    triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0.0f, 0.0f, 0.0f);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	 gluOrtho2D(-2, 2,-2, 2);


     //Windmill Codes Ends

     //Windmil parts ends//


     //Bridge Code Ends//

    glutTimerFunc(15000,display2,0);
	glFlush();  // Render now
}


void display(int val)
{

    glutDisplayFunc(evening);

}



void day() {
	glClearColor(0.62f, 0.49f, 0.25f, 1.0f);                              // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);


    //Axis Define & screen dividing - will be deleted after project completion


    /*//axis define..
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, 0.0f);   //x axis
	glVertex2f(2.0f, 0.0f);                                 // Hidden 1
	glVertex2f(0.0f, 2.0f);    //y axis
	glVertex2f(0.0f, -2.0f);
	glEnd();*/

	// Screen dividing end...

	glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub(0,0,255);       // Blue Line
	glVertex2f(-2.0f, 1.17f);  // y axis
	glVertex2f(2.0f, 1.17f);
	glEnd();

	/*glBegin(GL_LINES);
	glColor3ub(0,0,0);           // Black Line
	glVertex2f(-2.0f, -1.0f);    // y axis                  // Hidden 2
	glVertex2f(2.0f, -1.0f);
	glEnd();*/

    //River line..
    glLineWidth(1);
	glBegin(GL_LINES);
	glColor3ub(0,0,255);         // Blue
	glVertex2f(-2.0f, 0.5f);     // y axis
	glVertex2f(2.0f, 0.5f);
	glEnd();

    //River part arrives...//
	glBegin(GL_QUADS);           // River 1
	glColor3ub(	0, 166, 237);    // Blue
	glVertex2f(2.0f, 1.17f);     // 4 edge
	glVertex2f(-2.0f, 1.17f);    // 3 edge
	glVertex2f(-2.0f, 0.5f);     // 2 edge
	glVertex2f(2.0f, 0.5f);      // 1 edge
    glEnd();

    glBegin(GL_QUADS);           // River 2
	glColor3ub(0, 166, 237);    // Blue
	glVertex2f(-2.0f, -1.05f);   // 4 edge
	glVertex2f(-2.0f, -2.0f);    // 3 edge
	glVertex2f(2.0f, -2.0f);     // 2 edge
	glVertex2f(2.0f, -1.05f);    // 1 edge
    glEnd();


    // River ends...

    // Sky part arrives...

    glBegin(GL_QUADS);           // Sky
	glColor3ub(94,169,255);    // Blue
	glVertex2f(-2.0f, 1.17f);    // 4 edge
	glVertex2f(-2.0f, 2.0f);     // 3 edge
	glVertex2f(2.0f, 2.0f);      // 2 edge
	glVertex2f(2.0f, 1.17f);     // 1 edge
    glEnd();

    // Sky ends...

	// Sun + cloud part arrives...

    int i;

    GLfloat x=-2.0f;  GLfloat y=1.5f;  GLfloat radius =.20f;                         //Sun
    int triangleAmount = 20;

	                                                                           //GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glPushMatrix();
	glTranslatef(sun_position,sun_position, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 212, 64);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	x=-1.47f;  y=1.77f;  radius =.08f;                                             //Cloud 1
    glPushMatrix();
    glTranslatef(cloud_position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-1.35f;  y=1.77f;  radius =.10f;                                             //Cloud 1

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x=-1.23f;  y=1.77f;  radius =.08f;                                             //Cloud 2

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.62f;  y=1.77f;  radius =.08f;                                             //Cloud 2

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.5f;  y=1.77f;  radius =.10f;                                             //Cloud 2

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-0.38f;  y=1.77f;  radius =.08f;                                             //Cloud 2

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    x=-1.23f;  y=1.77f;  radius =.08f;                                             //Cloud 2

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=0.62f;  y=1.77f;  radius =.08f;                                             //Cloud 3

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=0.5f;  y=1.77f;  radius =.10f;                                             //Cloud 3

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=0.38f;  y=1.77f;  radius =.08f;                                             //Cloud 3

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	x=1.47f;  y=1.77f;  radius =.08f;                                             //Cloud 4

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=1.35f;  y=1.77f;  radius =.10f;                                             //Cloud 4

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=1.23f;  y=1.77f;  radius =.08f;                                             //Cloud 4

    glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f,1.0f,1.0f);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();

	// Sun + cloud part ends...



    // Hill part arrives...

    glBegin(GL_QUADS);             // hill 0
	glColor3ub(47,117,81);       // green
	glVertex2f(-2.15f, 1.65f);     // 2 edge
	glVertex2f(-2.45f, 1.17f);     // 1 edge
	glVertex2f(-1.55f, 1.17f);     // 4 edge
	glVertex2f(-1.85f, 1.68f);     // 3 edge
    glEnd();


    glBegin(GL_QUADS);            // hill 1
	glColor3ub(47,117,81);      // green
	glVertex2f(-1.37f, 1.65f);    // 2 edge
	glVertex2f(-1.75f, 1.17f);    // 1 edge
	glVertex2f(-0.8f, 1.17f);     // 4 edge
	glVertex2f(-1.17f, 1.68f);    // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 2
	glColor3ub(47,117,81);       // green
	glVertex2f(-0.5f, 1.65f);      // 2 edge
	glVertex2f(-1.0f, 1.17f);      // 1 edge
	glVertex2f(0.1f, 1.17f);       // 4 edge
	glVertex2f(-0.3f, 1.67f);      // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 3
	glColor3ub(47,117,81);       // green
	glVertex2f(0.1f, 1.66f);       // 2 edge
	glVertex2f(-0.2f, 1.17f);      // 1 edge
	glVertex2f(0.7f, 1.17f);       // 4 edge
	glVertex2f(0.3f, 1.68f);       // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 4
	glColor3ub(47,117,81);       // green
	glVertex2f(0.7f, 1.69f);       // 2 edge
	glVertex2f(0.45f, 1.17f);      // 1 edge
	glVertex2f(1.3f, 1.17f);       // 4 edge
	glVertex2f(1.0f, 1.68f);       // 3 edge
    glEnd();

    glBegin(GL_QUADS);             // hill 5
	glColor3ub(47,117,81);       // green
	glVertex2f(1.4f, 1.69f);       // 2 edge
	glVertex2f(1.1f, 1.17f);       // 1 edge
	glVertex2f(2.2f, 1.17f);       // 4 edge
	glVertex2f(1.75f, 1.68f);      // 3 edge
    glEnd();

    // Hill part ends...

     // Boat part arrives...
    glPushMatrix();
    glTranslatef(ship_position,0.0f, 0.0f);
    glBegin(GL_QUADS);             // ship
	glColor3ub(78,78,76);
	glVertex2f(0.8f, 0.65f);
	glVertex2f(0.5f, 0.8f);
	glVertex2f(2.2f, 0.8f);
	glVertex2f(2.2f, 0.65f);
	glEnd();

	glBegin(GL_QUADS);             // ship 1st deck
	glColor3ub(146,134,134);
	glVertex2f(0.8f, 0.95f);
	glVertex2f(0.8f, 0.8f);
	glVertex2f(2.0f, 0.8f);
	glVertex2f(2.0f, 0.95f);
	glEnd();

	glBegin(GL_QUADS);             // ship 2nd deck
	glColor3ub(137,124,111);
	glVertex2f(1.1f, 1.1f);
	glVertex2f(1.0f, 0.95f);
	glVertex2f(2.0f, 0.95f);
	glVertex2f(2.0f, 1.1f);
	glEnd();

	glBegin(GL_QUADS);             // 1st chim
	glColor3ub(0,65,80);
	glVertex2f(1.2f, 1.3f);
	glVertex2f(1.2f, 1.1f);
	glVertex2f(1.3f, 1.1f);
	glVertex2f(1.3f, 1.3f);
	glEnd();

	glBegin(GL_QUADS);             // 2nd chim
	glColor3ub(0,65,80);
	glVertex2f(1.5f, 1.3f);
	glVertex2f(1.5f, 1.1f);
	glVertex2f(1.6f, 1.1f);
	glVertex2f(1.6f, 1.3f);
	glEnd();

	glBegin(GL_QUADS);             // 3rd chim
	glColor3ub(0,65,80);
	glVertex2f(1.8f, 1.3f);
	glVertex2f(1.8f, 1.1f);
	glVertex2f(1.9f, 1.1f);
	glVertex2f(1.9f, 1.3f);
	glEnd();


    glBegin(GL_QUADS);             // window1
	glColor3ub(168,204,215);
	glVertex2f(1.2f, 1.06f);
	glVertex2f(1.2f, 0.98f);
	glVertex2f(1.3f, 0.98f);
	glVertex2f(1.3f, 1.06f);
	glEnd();

	glBegin(GL_QUADS);             // window2
	glColor3ub(168,204,215);
	glVertex2f(1.5f, 1.06f);
	glVertex2f(1.5f, 0.98f);
	glVertex2f(1.6f, 0.98f);
	glVertex2f(1.6f, 1.06f);
	glEnd();

	glBegin(GL_QUADS);             // window1
	glColor3ub(168,204,215);
	glVertex2f(1.8f, 1.06f);
	glVertex2f(1.8f, 0.98f);
	glVertex2f(1.9f, 0.98f);
	glVertex2f(1.9f, 1.06f);
	glEnd();
    glPopMatrix();



    // Boat part ends...

     // Building part arrives...

    glBegin(GL_QUADS);           // building area's base
	glColor3ub(69,69,69);     // grey
	glVertex2f(-2.0f, 0.5f);     // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);     // 2 edge
	glVertex2f(2.0f, 0.5f);     // 1 edge
    glEnd();

    glBegin(GL_QUADS);           // building area's base
	glColor3ub(69,69,69);     // grey
	glVertex2f(-2.0f, 0.5f);     // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);     // 2 edge
	glVertex2f(2.0f, 0.5f);     // 1 edge
    glEnd();

    //building 1
    glBegin(GL_QUADS);
	glColor3ub(110, 79, 156);//mid
	glVertex2f(-1.8f, 1.2f);
	glVertex2f(-1.8f, 0.0f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.2f, 1.2f);
    glEnd();

    glBegin(GL_QUADS);//side
	glColor3ub(98, 74, 133);
	glVertex2f(-1.2f, 1.2f);
	glVertex2f(-1.2f, 0.0f);
	glVertex2f(-1.05f, 0.15f);
	glVertex2f(-1.05f, 1.35f);
    glEnd();

    glBegin(GL_QUADS);//roof
	glColor3ub(110, 79, 156);
	glVertex2f(-1.65f, 1.35f);
	glVertex2f(-1.8f, 1.2f);
	glVertex2f(-1.2f, 1.2f);
	glVertex2f(-1.05f, 1.35f);
    glEnd();

    glBegin(GL_QUADS);//Door
	glColor3ub(48, 45, 51);
	glVertex2f(-1.6f, 0.3f);
	glVertex2f(-1.6f, 0.0f);
	glVertex2f(-1.4f, 0.0f);
	glVertex2f(-1.4f, 0.3f);
    glEnd();

    //window
    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.7f, 0.6f);
	glVertex2f(-1.7f, 0.5f);
	glVertex2f(-1.6f, 0.5f);
	glVertex2f(-1.6f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.7f, 0.8f);
	glVertex2f(-1.7f, 0.7f);
	glVertex2f(-1.6f, 0.7f);
	glVertex2f(-1.6f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.7f, 0.9f);
	glVertex2f(-1.7f, 1.0f);
	glVertex2f(-1.6f, 1.0f);
	glVertex2f(-1.6f, 0.9f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.4f, 0.6f);
	glVertex2f(-1.4f, 0.5f);
	glVertex2f(-1.3f, 0.5f);
	glVertex2f(-1.3f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.4f, 0.8f);
	glVertex2f(-1.4f, 0.7f);
	glVertex2f(-1.3f, 0.7f);
	glVertex2f(-1.3f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-1.4f, 0.9f);
	glVertex2f(-1.4f, 1.0f);
	glVertex2f(-1.3f, 1.0f);
	glVertex2f(-1.3f, 0.9f);
    glEnd();

    //building 2

    glBegin(GL_QUADS);//mid
	glColor3ub(255,69,0);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);//side
	glColor3ub(255,69,0);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, 0.7f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof
	glColor3ub(160,160,160);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.7f, 0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);//roof
	glColor3ub(145,145,145);
	glVertex2f(-0.45f, 0.9f);
	glVertex2f(-0.2f, 0.6f);
	glVertex2f(-0.1f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);//door
	glColor3ub(99, 99, 33);
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.5f, 0.2f);
    glEnd();

    //windows

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.6f, 0.35f);
	glVertex2f(-0.6f, 0.25f);
	glVertex2f(-0.5f, 0.25f);
	glVertex2f(-0.5f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.5f, 0.5f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.3f, 0.35f);
	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.4f, 0.25f);
	glVertex2f(-0.4f, 0.35f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(168,204,215);
	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.4f, 0.5f);
    glEnd();

    // Building part ends...

    // Road part arrives...

    glBegin(GL_QUADS);           // Road (consider clock wise from top right most)
	glColor3ub(0, 0, 0);     // #99cc00
	glVertex2f(-2.0f, -0.80f);    // 4 edge
	glVertex2f(-2.0f, 0.0f);     // 3 edge
	glVertex2f(2.0f, 0.0f);      // 2 edge
	glVertex2f(2.0f, -0.80f);     // 1 edge
    glEnd();

    //lamp post start
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.75f, 0.0f);
	glVertex2f(-1.75f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-1.6f, 0.4f);
	glVertex2f(-1.6f, 0.35f);
	glVertex2f(-1.75f, 0.35f);
	glVertex2f(-1.75f, 0.4f);
	glEnd();

	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.35f);
	glVertex2f(0.15f, 0.35f);
	glVertex2f(0.15f, 0.4f);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.75f, 0.0f);
	glVertex2f(1.75f, 0.4f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1.75f, 0.4f);
	glVertex2f(1.75f, 0.35f);
	glVertex2f(1.9f, 0.35f);
	glVertex2f(1.9f, 0.4f);
	glEnd();

    //lamp post end

    //Middle lines between road Start
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-2.0f, -0.30f);
	glVertex2f(-1.75f, -0.30f);
	glEnd();


    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.5f, -0.30f);
	glVertex2f(-1.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-1.0f, -0.30f);
	glVertex2f(-0.75f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.5f, -0.30f);
	glVertex2f(-0.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.0f, -0.30f);
	glVertex2f(0.25f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.5f, -0.30f);
	glVertex2f(1.75f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.25f, -0.30f);
	glVertex2f(1.0f, -0.30f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.5f, -0.30f);
	glVertex2f(0.75f, -0.30f);
	glEnd();

    //Middle lines between road end

    // Road part ends...


    //Train Track Starts..

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, -0.85f); //x axis
	glVertex2f(2.0f, -0.85f);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(2.0f, -1.02f);
	glEnd();

	//Train pillars from left//

	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

    glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

     glTranslatef(0.20, 0.0, 0.0);
    glBegin(GL_LINES);
	glVertex2f(-2.0f, -1.02f); //x axis
	glVertex2f(-1.80f, -0.85f);
    glEnd();

    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

    //Train Track Ends...

    // Vehicle part arrives...

    //car1 begings
    glPushMatrix();
    glTranslatef(car1_position,0.0f, 0.0f);
    glBegin(GL_QUADS);//car down
    glColor3ub(166,44,43);
    glVertex2f(-1.15, -0.1);
    glVertex2f(-1.15, -0.2);
    glVertex2f(-0.65, -0.2);
    glVertex2f(-0.65, -0.1);
    glEnd();

    glBegin(GL_QUADS);//car up
    glColor3ub(166,44,43);
    glVertex2f(-1.09, 0.01);
    glVertex2f(-1.13, -0.1);
    glVertex2f(-0.72, -0.1);
    glVertex2f(-0.82, 0.01);
    glEnd();

    glBegin(GL_QUADS);//car window l
    glColor3ub(168,204,215);
    glVertex2f(-1.07, -0.02);
    glVertex2f(-1.11, -0.12);
    glVertex2f(-0.96, -0.12);
    glVertex2f(-0.96, -0.02);
    glEnd();

    glBegin(GL_QUADS);//car window r
    glColor3ub(168,204,215);
    glVertex2f(-0.94, -0.02);
    glVertex2f(-0.94, -0.12);
    glVertex2f(-0.74, -0.12);
    glVertex2f(-0.84, -0.02);
    glEnd();

    // wheel L
    GLfloat a=-1.09;  GLfloat b=-0.2f;  GLfloat r =.04f;
    triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim L
    a=-1.09; b=-0.2f; r =.03f;
    triangleAmount = 6;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// wheel R
    a=-0.74; b=-0.2f;r =.04f;
    triangleAmount = 20;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim R
    a=-0.74; b=-0.2f; r =.03f;
    triangleAmount = 6;
	                                                                           //GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //car1 ends

    //car2 begings
    glPushMatrix();
    glTranslatef(car2_position,0.0f, 0.0f);
    glBegin(GL_QUADS);//car down
    glColor3ub(0,47,148);
    glVertex2f(0.65, -0.4);
    glVertex2f(0.65, -0.5);
    glVertex2f(1.15, -0.5);
    glVertex2f(1.15, -0.4);
    glEnd();

    glBegin(GL_QUADS);//car up
    glColor3ub(0,47,148);
    glVertex2f(1.09, -0.31);
    glVertex2f(1.13, -0.4);
    glVertex2f(0.72, -0.4);
    glVertex2f(0.82, -0.31);
    glEnd();

    glBegin(GL_QUADS);//car window l
    glColor3ub(168,204,215);
    glVertex2f(1.07, -0.32);
    glVertex2f(1.11, -0.42);
    glVertex2f(0.96, -0.42);
    glVertex2f(0.96, -0.32);
    glEnd();

    glBegin(GL_QUADS);//car window r
    glColor3ub(168,204,215);
    glVertex2f(0.94, -0.32);
    glVertex2f(0.94, -0.42);
    glVertex2f(0.74, -0.42);
    glVertex2f(0.84, -0.32);
    glEnd();

    // wheel L
   a=1.09; b=-0.5f; r =.04f;
    triangleAmount = 20;
	                                                                     //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim L
    a=1.09; b=-0.5f; r =.03f;
    triangleAmount = 6;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// wheel R
    a=0.74; b=-0.5f;r =.04f;
    triangleAmount = 20;
	                                                                            //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(128,128,128 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	// rim R
    a=0.74; b=-0.5f; r =.03f;
    triangleAmount = 6;
	                                                                            //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255 );
		glVertex2f(a,b);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (r * cos(i *  twicePi / triangleAmount)),
			    b + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //car2 ends

    // Vehicle part ends...
    //tress start
    glBegin(GL_QUADS);           // Train side green background
	glColor3ub(4,215,4);     // grey
	glVertex2f(-2.0f, -0.82f);    // 4 edge
	glVertex2f(-2.0f, -0.6f);   // 3 edge
	glVertex2f(2.0f, -0.6f);   // 2 edge
	glVertex2f(2.0f, -0.82f);    // 1 edge
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
	glColor3ub(100,100,100);     // grey
	glVertex2f(-2.0f, -0.62f);
	glVertex2f(2.0f, -0.62f);
    glEnd();

    //tree 1
    glBegin(GL_QUADS);//bark
	glColor3ub(105,100,0);
	glVertex2f(-0.9f, -0.35f);
	glVertex2f(-0.9f, -0.75f);
	glVertex2f(-0.85f, -0.75f);
	glVertex2f(-0.85f, -0.35f);
    glEnd();
    x=-0.975f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.775f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=-0.875f; y=-0.35f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //tree 1 end...
    //tree 2
    glBegin(GL_QUADS);//bark
	glColor3ub(105,100,0);
	glVertex2f(0.9f, -0.35f);
	glVertex2f(0.9f, -0.75f);
	glVertex2f(0.85f, -0.75f);
	glVertex2f(0.85f, -0.35f);
    glEnd();
    x=0.975f; y=-0.45f; radius =.09f;

    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=0.775f; y=-0.45f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	x=0.875f; y=-0.35f; radius =.09f;
    triangleAmount = 20;
	                                                                           //radius
	twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(47,117,81);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    //tree 2 end...

    //tress end

    //train part start
    //Train Body from left//
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();


     //Train Body from left - middle//
    glTranslatef(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();


       //Train Body left -3rd//
    glTranslatef(0.35, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 255);
    glVertex2f(-1.15, -0.90);
    glVertex2f(-0.85, -0.90);
    glVertex2f(-0.85, -0.75);
    glVertex2f(-0.90, -0.70);
    glVertex2f(-1.10, -0.70);
    glVertex2f(-1.15, -0.75);
    glVertex2f(-1.15, -0.90);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

    //Train Engine//
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_POLYGON);
    glColor3ub(15, 15, 200);
    glVertex2f(-0.10, -0.90);
    glVertex2f(0.20, -0.90);
    glVertex2f(0.25, -0.85);
    glVertex2f(0.25, -0.75);
    glVertex2f(0.20, -0.65);
    glVertex2f(-0.10, -0.65);
    glVertex2f(-0.10, -0.90);
    glEnd();

    glPopMatrix();

    //Train wheel Starts//

     x=-1.10f;  y=-0.95f;  radius =0.06f;                                             // Base
    triangleAmount = 20;                                                  //GLfloat radius = 0.8f; //radius
    twicePi = 2.0f * PI;

     //Wheel from left-1
    glPushMatrix();
    glTranslatef(train_position,0.0f, 0.0f);
    glScalef(2, 1, 0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 51, 0);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 //Wheel from left-2
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-3
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	 //Wheel from left-4
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-5
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-6
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-7
     glTranslatef(0.19, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 //Wheel from left-8
     glTranslatef(0.17, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);                                                         // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glPopMatrix();
    glLoadIdentity();
    gluOrtho2D(-2, 2,-2, 2);

     //Train wheel Ends//

     // Train ends...

     //Bridge Code Starts...

     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.05);
     glVertex2f(-2.0, -1.35);
     glVertex2f(2.0, -1.35);
     glVertex2f(2.0, -1.05);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();

     glTranslatef(1.45,0,0);
     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();

     glTranslatef(1.45,0,0);
     glBegin(GL_QUADS);
     glColor3ub(50,50,50);
     glVertex2f(-2.0, -1.30);
     glVertex2f(-1.70, -1.80);
     glVertex2f(-1.40, -1.80);
     glVertex2f(-1.0, -1.30);
     glEnd();



     glLoadIdentity();
     gluOrtho2D(-2, 2,-2, 2);


     //Bridge Code Ends//

      //Winmill Codes Starts

     //windmil stand
    glLineWidth(15);
    glTranslatef(.8, .4, 0);
     glBegin(GL_LINES);
     glColor3ub(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(0.00f, 0.4f);

    glEnd();

	//Rotating Part Starts//
    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(0.0f, 0.4f,0);
    glRotatef(j,0,0.0,0.1);//i=how many degree you want to rotate around an axis

	//blades//
    glBegin(GL_TRIANGLES);
  glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.1f, 0.01f);
    glVertex2f(0.5f, -0.3f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(-0.06f, 0.05f);
    glVertex2f(-0.1f, 0.7f);

    glEnd();

     glBegin(GL_TRIANGLES);
      glColor3ub(255.0f, 255.0f, 255.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 0.05f);
    glVertex2f(-0.6f, -0.3f);

    glEnd();

    glPopMatrix();


    j+=0.1f;

     //Stand Circle//

    int k;

	 x=0.0f;  y=.4f; radius =.1f;
    triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	 glColor3ub(0.0f, 0.0f, 0.0f);
		glVertex2f(x, y); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x + (radius * cos(k *  twicePi / triangleAmount)),
			    y + (radius * sin(k * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();
	 gluOrtho2D(-2, 2,-2, 2);


     //Windmill Codes Ends

    glutTimerFunc(15000,display,0);

	glFlush();  // Render now
}


void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
        train_speed += 0.1f;
        break;
    case 's':
        train_speed -= 0.1f;
        break;
    case 'b':
        train_speed = 0.0f;
        break;
    case 'd':
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;
    case 'e':
        glutDisplayFunc(evening);
        glutPostRedisplay();
        break;
    case 'n':
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;

        glutPostRedisplay();
    }

}

void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("day_only.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                           // Initialize GLUT
	glutCreateWindow("Day Laps");                    // Create a window with the given title
    gluOrtho2D(-2, 2,-2, 2);                         //(left, right, top, bottom)
	glutInitWindowSize(1920, 1080);                  // Set the window's initial width & height
	glutDisplayFunc(day);                            // Register display callback handler for window re-paint
	glutTimerFunc(100, ship_update, 0);              //for ship
	glutTimerFunc(100, car1_update, 0);              //for car 1
	glutTimerFunc(100, car2_update, 0);              //for car 2
	glutTimerFunc(100, train_update, 0);             //for train
	glutTimerFunc(100, cloud_update, 0);             //for cloud
	glutTimerFunc(100, sun_update, 0);               //for sun
	glutTimerFunc(100, sunset_update, 0);            //for sun set
	glutTimerFunc(100, moon_update, 0);              //for moon
    glutTimerFunc(100, rain_update3, 0);               //rain
    glutTimerFunc(100, rain_update4, 0);
    glutTimerFunc(100, windmil_update2, 0);
	 glutKeyboardFunc(handleKeypress);
	 glutIdleFunc(Idle);
	 sound ();
	glutMainLoop();                                  // Enter the event-processing loop
	return 0;
}

