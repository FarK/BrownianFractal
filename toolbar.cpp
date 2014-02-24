#include "toolbar.h"

Toolbar::Toolbar(QWidget* parent) :
	QToolBar(parent),
	actionCount(0)
{
	newActionGroup();
}

Toolbar::~Toolbar(){
	//TODO: Free actionsGroups mem
	//std::list<QActionGroup*>::iterator it = actionGroups.begin();
	//while(it != actionGroups.end())
	//	delete *it;
}

void Toolbar::addAction(QAction* action){
	action->setObjectName(QString::number(actionCount++));
	QToolBar::addAction(action);
	currentGroup->addAction(action);
}

QAction* Toolbar::addSeparator(){
	newActionGroup();
	return QToolBar::addSeparator();
}

void Toolbar::newActionGroup(){
	QActionGroup* ag = new QActionGroup(this);
	ag->setExclusive(true);
	actionGroups.push_back(ag);
	currentGroup = ag;
}

void Toolbar::actionTriggeredSlot(QAction* action){
	switch(action->objectName().toInt()){
		case 0:
			emit toolSelected(ADD_UNFREE_PARTICLE);
		break;

		case 1:
			emit toolSelected(ADD_FREE_PARTICLE_SOURCE);
		break;

		case 2:
			emit reset();
		break;
	}
}
