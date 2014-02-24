/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "openGLWidget.h"
#include "toolbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAddUnfreeParticle;
    QAction *actionAddFreeParticleSource;
    QAction *actionReset;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    OpenGLWidget *openglWidget;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuOption;
    QStatusBar *statusbar;
    Toolbar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(616, 492);
        actionAddUnfreeParticle = new QAction(MainWindow);
        actionAddUnfreeParticle->setObjectName(QString::fromUtf8("actionAddUnfreeParticle"));
        actionAddUnfreeParticle->setCheckable(true);
        actionAddUnfreeParticle->setChecked(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/resources/AddUnfree.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddUnfreeParticle->setIcon(icon);
        actionAddFreeParticleSource = new QAction(MainWindow);
        actionAddFreeParticleSource->setObjectName(QString::fromUtf8("actionAddFreeParticleSource"));
        actionAddFreeParticleSource->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/resources/AddSource.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddFreeParticleSource->setIcon(icon1);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/resources/Reset.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(100, 100));
        frame->setBaseSize(QSize(300, 300));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        openglWidget = new OpenGLWidget(frame);
        openglWidget->setObjectName(QString::fromUtf8("openglWidget"));
        openglWidget->setCursor(QCursor(Qt::CrossCursor));
        openglWidget->setMouseTracking(true);

        verticalLayout->addWidget(openglWidget);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setMaximumSize(QSize(250, 16777215));
        frame_2->setBaseSize(QSize(5, 0));
        frame_2->setLayoutDirection(Qt::LeftToRight);
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(60);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout_3->addWidget(horizontalSlider);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);
        spinBox->setValue(60);

        verticalLayout_3->addWidget(spinBox);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        doubleSpinBox = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(0.01);
        doubleSpinBox->setMaximum(20);
        doubleSpinBox->setSingleStep(0.1);
        doubleSpinBox->setValue(0.1);

        horizontalLayout_3->addWidget(doubleSpinBox);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalSlider_2 = new QSlider(groupBox_3);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(10000);
        horizontalSlider_2->setSingleStep(100);
        horizontalSlider_2->setValue(1000);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_2);

        spinBox_2 = new QSpinBox(groupBox_3);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(10000);
        spinBox_2->setSingleStep(100);
        spinBox_2->setValue(100);

        verticalLayout_4->addWidget(spinBox_2);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        splitter->addWidget(frame_2);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 616, 19));
        menuOption = new QMenu(menubar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new Toolbar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuOption->menuAction());
        toolBar->addAction(actionAddUnfreeParticle);
        toolBar->addAction(actionAddFreeParticleSource);
        toolBar->addSeparator();
        toolBar->addAction(actionReset);

        retranslateUi(MainWindow);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), openglWidget, SLOT(setFPS(int)));
        QObject::connect(toolBar, SIGNAL(actionTriggered(QAction*)), toolBar, SLOT(actionTriggeredSlot(QAction*)));
        QObject::connect(toolBar, SIGNAL(toolSelected(Tool)), openglWidget, SLOT(setSelectedTool(Tool)));
        QObject::connect(doubleSpinBox, SIGNAL(valueChanged(double)), openglWidget, SLOT(setParticleSourceIntensity(double)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), openglWidget, SLOT(setFreeParticlesToAdd(int)));
        QObject::connect(pushButton, SIGNAL(pressed()), openglWidget, SLOT(addFreeParticles()));
        QObject::connect(toolBar, SIGNAL(reset()), openglWidget, SLOT(reset()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAddUnfreeParticle->setText(QApplication::translate("MainWindow", "AddUnfreeParticle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddUnfreeParticle->setToolTip(QApplication::translate("MainWindow", "Click to add an unfree particle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddFreeParticleSource->setText(QApplication::translate("MainWindow", "Add free particle source", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddFreeParticleSource->setToolTip(QApplication::translate("MainWindow", "Click to add an free particle source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionReset->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("MainWindow", "Clear screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        openglWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "FPS", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Particle source intensity", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Particles/iteration", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Add random particles", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        menuOption->setTitle(QApplication::translate("MainWindow", "Option", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
