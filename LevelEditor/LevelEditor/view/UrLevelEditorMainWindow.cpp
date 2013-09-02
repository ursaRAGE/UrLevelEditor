#include "UrLevelEditorMainWindow.h"
#include <QToolBar>
UrLevelEditorMainWindow::UrLevelEditorMainWindow(QWidget *parent, Qt::WFlags flags)
    : QMainWindow(parent, flags)
{
 ui.setupUi(this);
 assetToolBar_ = new QToolBar("Properties");
 this->addToolBar(Qt::RightToolBarArea, assetToolBar_);
}

UrLevelEditorMainWindow::~UrLevelEditorMainWindow()
{

}

QToolBar* UrLevelEditorMainWindow::assetToolBar()
{
  return assetToolBar_;
}
