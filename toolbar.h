#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>
#include <QActionGroup>
#include <list>

typedef enum{
	ADD_UNFREE_PARTICLE,
	ADD_FREE_PARTICLE_SOURCE
} Tool;

/* This class reimplements some methods of QToolBar allowing the use of
 * QtDesigner. The actions added to this toolbar will be part of the same
 * QActionGroup, until a separator be introduced.
 */
class Toolbar : public QToolBar{
	Q_OBJECT

	private:
		std::list<QActionGroup*> actionGroups;
		QActionGroup* currentGroup;
		int actionCount;

	public:
		Toolbar(QWidget* parent = 0);
		virtual ~Toolbar();

		virtual void addAction(QAction* action);
		virtual QAction* addSeparator();

	private:
		void newActionGroup();

	public slots:
		void actionTriggeredSlot(QAction* action);

	signals:
		void toolSelected(Tool tool);
		void reset();
};

#endif
