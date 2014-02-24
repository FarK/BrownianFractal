#ifndef OPENGL_WIDGET_H
#define OPENGL_WIDGET_H

#include <QtOpenGL>
#include "fractal.h"
#include "toolbar.h"

class OpenGLWidget : public QGLWidget{
	Q_OBJECT

	private:
		Fractal* fractal;
		int fps;
		int mspf;
		QElapsedTimer timer;

		Tool selectedTool;
		double particleSourceIntensity;	// particles/iteration
		int freeParticlesToAdd;

	public:
		OpenGLWidget(QWidget* parent = 0);
		~OpenGLWidget();

	protected:
		virtual void initializeGL();
		virtual void resizeGL(int w, int h);
		virtual void paintGL();

	private:
		void treatMouseEvent(QMouseEvent* e);
		void mousePressEvent(QMouseEvent* e);
		void mouseMoveEvent(QMouseEvent* e);
		void timerEvent(QTimerEvent* event);

	public slots:
		void setFPS(int fps);
		void setSelectedTool(Tool tool);
		void setParticleSourceIntensity(double particlesPerIteration);
		void setFreeParticlesToAdd(int number);
		void addFreeParticles();
		void reset();
};

#endif
