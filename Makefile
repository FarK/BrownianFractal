#############################################################################
# Makefile for building: BrownianFractal
# Generated by qmake (2.01a) (Qt 4.8.4) on: Sun Feb 23 11:36:02 2014
# Project:  BrownianFractal.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -o Makefile BrownianFractal.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -std=c++0x -O0 -ggdb -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib64/qt4/mkspecs/linux-g++ -I. -I/usr/include/QtCore -I/usr/include/QtGui -I/usr/include/QtOpenGL -I/usr/include -I. -I/usr/X11R6/include -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-z,relro
LIBS          = $(SUBLIBS)  -L/usr/lib64 -L/usr/X11R6/lib -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = 
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		openGLWidget.cpp \
		fractal.cpp \
		world.cpp \
		physicalLaws.cpp \
		freeParticles.cpp \
		unfreeParticles.cpp \
		particle.cpp \
		random.cpp \
		vector.cpp moc_openGLWidget.cpp
OBJECTS       = main.o \
		openGLWidget.o \
		fractal.o \
		world.o \
		physicalLaws.o \
		freeParticles.o \
		unfreeParticles.o \
		particle.o \
		random.o \
		vector.o \
		moc_openGLWidget.o
DIST          = /usr/lib64/qt4/mkspecs/common/unix.conf \
		/usr/lib64/qt4/mkspecs/common/linux.conf \
		/usr/lib64/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt4/mkspecs/common/g++-base.conf \
		/usr/lib64/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt4/mkspecs/qconfig.pri \
		/usr/lib64/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt4/mkspecs/features/qt_config.prf \
		/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt4/mkspecs/features/default_pre.prf \
		/usr/lib64/qt4/mkspecs/features/release.prf \
		/usr/lib64/qt4/mkspecs/features/default_post.prf \
		/usr/lib64/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib64/qt4/mkspecs/features/warn_on.prf \
		/usr/lib64/qt4/mkspecs/features/qt.prf \
		/usr/lib64/qt4/mkspecs/features/unix/opengl.prf \
		/usr/lib64/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib64/qt4/mkspecs/features/moc.prf \
		/usr/lib64/qt4/mkspecs/features/resources.prf \
		/usr/lib64/qt4/mkspecs/features/uic.prf \
		/usr/lib64/qt4/mkspecs/features/yacc.prf \
		/usr/lib64/qt4/mkspecs/features/lex.prf \
		/usr/lib64/qt4/mkspecs/features/include_source_dir.prf \
		BrownianFractal.pro
QMAKE_TARGET  = BrownianFractal
DESTDIR       = 
TARGET        = BrownianFractal

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_MainWindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: BrownianFractal.pro  /usr/lib64/qt4/mkspecs/linux-g++/qmake.conf /usr/lib64/qt4/mkspecs/common/unix.conf \
		/usr/lib64/qt4/mkspecs/common/linux.conf \
		/usr/lib64/qt4/mkspecs/common/gcc-base.conf \
		/usr/lib64/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/lib64/qt4/mkspecs/common/g++-base.conf \
		/usr/lib64/qt4/mkspecs/common/g++-unix.conf \
		/usr/lib64/qt4/mkspecs/qconfig.pri \
		/usr/lib64/qt4/mkspecs/features/qt_functions.prf \
		/usr/lib64/qt4/mkspecs/features/qt_config.prf \
		/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/lib64/qt4/mkspecs/features/default_pre.prf \
		/usr/lib64/qt4/mkspecs/features/release.prf \
		/usr/lib64/qt4/mkspecs/features/default_post.prf \
		/usr/lib64/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/lib64/qt4/mkspecs/features/warn_on.prf \
		/usr/lib64/qt4/mkspecs/features/qt.prf \
		/usr/lib64/qt4/mkspecs/features/unix/opengl.prf \
		/usr/lib64/qt4/mkspecs/features/unix/thread.prf \
		/usr/lib64/qt4/mkspecs/features/moc.prf \
		/usr/lib64/qt4/mkspecs/features/resources.prf \
		/usr/lib64/qt4/mkspecs/features/uic.prf \
		/usr/lib64/qt4/mkspecs/features/yacc.prf \
		/usr/lib64/qt4/mkspecs/features/lex.prf \
		/usr/lib64/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib64/libQtOpenGL.prl \
		/usr/lib64/libQtGui.prl \
		/usr/lib64/libQtCore.prl
	$(QMAKE) -o Makefile BrownianFractal.pro
/usr/lib64/qt4/mkspecs/common/unix.conf:
/usr/lib64/qt4/mkspecs/common/linux.conf:
/usr/lib64/qt4/mkspecs/common/gcc-base.conf:
/usr/lib64/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/lib64/qt4/mkspecs/common/g++-base.conf:
/usr/lib64/qt4/mkspecs/common/g++-unix.conf:
/usr/lib64/qt4/mkspecs/qconfig.pri:
/usr/lib64/qt4/mkspecs/features/qt_functions.prf:
/usr/lib64/qt4/mkspecs/features/qt_config.prf:
/usr/lib64/qt4/mkspecs/features/exclusive_builds.prf:
/usr/lib64/qt4/mkspecs/features/default_pre.prf:
/usr/lib64/qt4/mkspecs/features/release.prf:
/usr/lib64/qt4/mkspecs/features/default_post.prf:
/usr/lib64/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/lib64/qt4/mkspecs/features/warn_on.prf:
/usr/lib64/qt4/mkspecs/features/qt.prf:
/usr/lib64/qt4/mkspecs/features/unix/opengl.prf:
/usr/lib64/qt4/mkspecs/features/unix/thread.prf:
/usr/lib64/qt4/mkspecs/features/moc.prf:
/usr/lib64/qt4/mkspecs/features/resources.prf:
/usr/lib64/qt4/mkspecs/features/uic.prf:
/usr/lib64/qt4/mkspecs/features/yacc.prf:
/usr/lib64/qt4/mkspecs/features/lex.prf:
/usr/lib64/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib64/libQtOpenGL.prl:
/usr/lib64/libQtGui.prl:
/usr/lib64/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile BrownianFractal.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/BrownianFractal1.0.0 || $(MKDIR) .tmp/BrownianFractal1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/BrownianFractal1.0.0/ && $(COPY_FILE) --parents openGLWidget.h fractal.h world.h physicalLaws.h freeParticles.h unfreeParticles.h particle.h random.h vector.h .tmp/BrownianFractal1.0.0/ && $(COPY_FILE) --parents main.cpp openGLWidget.cpp fractal.cpp world.cpp physicalLaws.cpp freeParticles.cpp unfreeParticles.cpp particle.cpp random.cpp vector.cpp .tmp/BrownianFractal1.0.0/ && $(COPY_FILE) --parents MainWindow.ui .tmp/BrownianFractal1.0.0/ && (cd `dirname .tmp/BrownianFractal1.0.0` && $(TAR) BrownianFractal1.0.0.tar BrownianFractal1.0.0 && $(COMPRESS) BrownianFractal1.0.0.tar) && $(MOVE) `dirname .tmp/BrownianFractal1.0.0`/BrownianFractal1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/BrownianFractal1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_openGLWidget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_openGLWidget.cpp
moc_openGLWidget.cpp: fractal.h \
		world.h \
		vector.h \
		freeParticles.h \
		particle.h \
		random.h \
		unfreeParticles.h \
		physicalLaws.h \
		openGLWidget.h
	/usr/lib64/qt4/bin/moc $(DEFINES) $(INCPATH) openGLWidget.h -o moc_openGLWidget.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_MainWindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_MainWindow.h
ui_MainWindow.h: MainWindow.ui \
		openGLWidget.h \
		fractal.h \
		world.h \
		vector.h \
		freeParticles.h \
		particle.h \
		random.h \
		unfreeParticles.h \
		physicalLaws.h
	/usr/lib64/qt4/bin/uic MainWindow.ui -o ui_MainWindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp ui_MainWindow.h \
		openGLWidget.h \
		fractal.h \
		world.h \
		vector.h \
		freeParticles.h \
		particle.h \
		random.h \
		unfreeParticles.h \
		physicalLaws.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

openGLWidget.o: openGLWidget.cpp openGLWidget.h \
		fractal.h \
		world.h \
		vector.h \
		freeParticles.h \
		particle.h \
		random.h \
		unfreeParticles.h \
		physicalLaws.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o openGLWidget.o openGLWidget.cpp

fractal.o: fractal.cpp fractal.h \
		world.h \
		vector.h \
		freeParticles.h \
		particle.h \
		random.h \
		unfreeParticles.h \
		physicalLaws.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fractal.o fractal.cpp

world.o: world.cpp world.h \
		vector.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o world.o world.cpp

physicalLaws.o: physicalLaws.cpp physicalLaws.h \
		world.h \
		vector.h \
		random.h \
		particle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o physicalLaws.o physicalLaws.cpp

freeParticles.o: freeParticles.cpp freeParticles.h \
		world.h \
		vector.h \
		particle.h \
		random.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o freeParticles.o freeParticles.cpp

unfreeParticles.o: unfreeParticles.cpp unfreeParticles.h \
		world.h \
		vector.h \
		particle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o unfreeParticles.o unfreeParticles.cpp

particle.o: particle.cpp particle.h \
		vector.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o particle.o particle.cpp

random.o: random.cpp random.h \
		vector.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o random.o random.cpp

vector.o: vector.cpp vector.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o vector.o vector.cpp

moc_openGLWidget.o: moc_openGLWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_openGLWidget.o moc_openGLWidget.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
