#include "openGLWidget.h"
#include <QElapsedTimer>

OpenGLWidget::OpenGLWidget(QWidget* parent) :
	QGLWidget(parent),
	fps(60),
	mspf(1000/60),
	selectedTool(ADD_UNFREE_PARTICLE),
	particleSourceIntensity(0.2),
	freeParticlesToAdd(100)
{
	startTimer(0);
	timer.start();
}

void OpenGLWidget::initializeGL(){
	//Create fractal object with current widget size.
	//We need to do this here because in constructor, width() and height()
	//not have been correctly setted
	fractal = new Fractal(width(), height());

	//Set the clear color to black
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	//Disable depth test because we work in 2d
	glDisable(GL_DEPTH_TEST);

	//Adjust viewport and projection to widget size
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0,0,width(), height());
	glOrtho(0.0, width(), 0.0, height(), 0.0, 100);
}
OpenGLWidget::~OpenGLWidget(){
	delete fractal;
}

void OpenGLWidget::resizeGL(int w, int h){
	fractal->resize(w,h);

	//Recalculate viewport and projection
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0,0,width(), height());
	glOrtho(0.0, width(), 0.0, height(), 0.0, 100);
}

void OpenGLWidget::paintGL(){
	glClear(GL_COLOR_BUFFER_BIT);

	//Print freeParticles
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_POINTS);
	for(Particle p : fractal->freeParticles)
		glVertex2i(p.position.x, p.position.y);
	glEnd();

	//Print unfreeParticles
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POINTS);
	for(Particle p : fractal->unfreeParticles)
		glVertex2i(p.position.x, p.position.y);
	glEnd();

	glFlush();
}

void OpenGLWidget::treatMouseEvent(QMouseEvent* e){
	switch(selectedTool){
		case ADD_UNFREE_PARTICLE:
			fractal->unfreeParticles.addParticle(Particle(e->x(), height()-e->y()));
		break;

		case ADD_FREE_PARTICLE_SOURCE:
			fractal->addFreeParticleSource(e->x(), height()-e->y(), particleSourceIntensity);
			printf("add source\n");
		break;

		default:
		break;
	}
}

void OpenGLWidget::mousePressEvent(QMouseEvent* e){
	treatMouseEvent(e);
}

void OpenGLWidget::mouseMoveEvent(QMouseEvent* e){
	//The event somtimes contains an invalid position. We discart those
	//events.
	if(e->x() < width() && e->y() < height() && e->x() >= 0 && e->y() >= 0){
		//Only treat event if mouse button if pressed
		if(e->buttons() & Qt::LeftButton){
			treatMouseEvent(e);
		}
	}
}

void OpenGLWidget::timerEvent(QTimerEvent* event){
	//Adjust simulation velocity.
	//We simulate until the next frame must be painted
	if(timer.elapsed() >= mspf){
		updateGL();
		timer.restart();
	}
	fractal->iterate();
}

void OpenGLWidget::setFPS(int fps){
	this->fps = fps;
	this->mspf = 1000/fps;
}

void OpenGLWidget::setSelectedTool(Tool tool){
	selectedTool = tool;
}

void OpenGLWidget::setParticleSourceIntensity(double particlesPerIteration){
	particleSourceIntensity = particlesPerIteration;
}

void OpenGLWidget::setFreeParticlesToAdd(int number){
	freeParticlesToAdd = number;
}

void OpenGLWidget::addFreeParticles(){
	fractal->freeParticles.addRandomParticles(freeParticlesToAdd);
}

void OpenGLWidget::reset(){
	fractal->reset();
}
