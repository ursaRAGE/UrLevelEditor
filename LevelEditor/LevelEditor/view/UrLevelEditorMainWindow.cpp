#include "UrLevelEditorMainWindow.h"
#include <QToolBar>
#include <QFileDialog>
#include <QObject>

UrLevelEditorMainWindow::UrLevelEditorMainWindow(QWidget *parent, Qt::WFlags flags)
    : QMainWindow(parent, flags)
{
 ui.setupUi(this);
 assetToolBar_ = new QToolBar("Properties");
 this->addToolBar(Qt::RightToolBarArea, assetToolBar_);

 QObject::connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(openSelected()));
}

UrLevelEditorMainWindow::~UrLevelEditorMainWindow()
{

}

void UrLevelEditorMainWindow::openSelected()
{
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files(*.*)"));
}

QToolBar* UrLevelEditorMainWindow::assetToolBar()
{
  return assetToolBar_;
}
