######################################################################
# Automatically generated by qmake (2.01a) Mon Oct 28 23:37:35 2013
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .

RESOURCES = resources.qrc

QT += opengl

QMAKE_CXXFLAGS += -std=c++0x\
		  -O0\
		  -ggdb

# Input
FORMS +=	MainWindow.ui

SOURCES +=	main.cpp\
		openGLWidget.cpp\
		fractal.cpp\
		world.cpp\
		physicalLaws.cpp\
		freeParticles.cpp\
		unfreeParticles.cpp\
		particle.cpp\
		random.cpp\
		vector.cpp\
		particleSource.cpp\
		toolbar.cpp

HEADERS +=	openGLWidget.h\
		fractal.h\
		world.h\
		physicalLaws.h\
		freeParticles.h\
		unfreeParticles.h\
		particle.h\
		random.h\
		vector.h\
		particleSource.h\
		toolbar.h
