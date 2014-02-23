#include <QMainWindow>
#include <QApplication>
#include <QFont>
#include <QLCDNumber>
#include <QPushButton>
#include <QSlider>
#include <QVBoxLayout>
#include <QWidget>
#include <ui_MainWindow.h>


int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QMainWindow window;
	Ui::MainWindow window_ui;
	window_ui.setupUi(&window);
	window.show();
	return app.exec();
}

