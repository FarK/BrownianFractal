#ifndef OPENGL_WIDGET_H
#define OPENGL_WIDGET_H

#include <QtOpenGL>
#include "fractal.h"

class OpenGLWidget : public QGLWidget{
	Q_OBJECT

	private:
		Fractal* fractal;
		int fps;
		int mspf;
		QElapsedTimer timer;

	public:
		OpenGLWidget(QWidget* parent = 0);
		~OpenGLWidget();

	protected:
		virtual void initializeGL();
		virtual void resizeGL(int w, int h);
		virtual void paintGL();

		void mousePressEvent(QMouseEvent* e);

		void timerEvent(QTimerEvent* event);

	public slots:
		void setFPS(int fps);
};

#endif
