#include "UrLevelEditorMainWindow.h"
#include <QToolBar>
#include <QFileDialog>
#include <QObject>
#include <QMessageBox>

UrLevelEditorMainWindow::UrLevelEditorMainWindow(QWidget *parent, Qt::WFlags flags)
    : QMainWindow(parent, flags)
{
 ui.setupUi(this);
 assetToolBar_ = new QToolBar("Properties");
 this->addToolBar(Qt::RightToolBarArea, assetToolBar_);

 QObject::connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(onNewAction()));
 QObject::connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(onOpenAction()));
 QObject::connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(onSaveAction()));
 QObject::connect(ui.actionSaveAs, SIGNAL(triggered()), this, SLOT(onSaveAsAction()));
}

UrLevelEditorMainWindow::~UrLevelEditorMainWindow()
{

}

void UrLevelEditorMainWindow::onNewAction()
{
  /*QMessageBox onNewActionMsgBox;
  onNewActionMsgBox.setInformativeText("Would you like to save?");
  onNewActionMsgBox.setText("The file has been modified.");
  onNewActionMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
  onNewActionMsgBox.setDefaultButton(QMessageBox::No);
  int retOnNewAction = onNewActionMsgBox.exec();*/

  int retOnNewAction = QMessageBox::warning(this, tr("My Application"), tr("The file has been modified.\n Do you want to save your changes?"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
  switch (retOnNewAction)
  {
    case QMessageBox::Yes:
      onSaveAsAction();
      break;
    case QMessageBox::No:
      break;
  }

  emit newPressed();
}

void UrLevelEditorMainWindow::onOpenAction()
{
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files(*.*)"));
  if( fileName.isNull() )
  {
    return;
  }
  emit openPressed(fileName);
}

void UrLevelEditorMainWindow::onSaveAction()
{
  emit savePressed();
}

void UrLevelEditorMainWindow::onSaveAsAction()
{
  QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Images(*.png *.xmp *.jpg);;Text files(*.txt);;XML files(*.xml)"));
  if (fileName.isNull())
  {
    return;
  }
  else
  {
    QFile file(fileName);
    if (file.exists())
    {
      /*QMessageBox onSaveActionMsgBox;
      onSaveActionMsgBox.setText("The file has been modified.");
      onSaveActionMsgBox.setInformativeText("Same file name already exists. Do you want to overwrite?");
      onSaveActionMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
      onSaveActionMsgBox.setDefaultButton(QMessageBox::No);
      int retOnSaveAsAction = onSaveActionMsgBox.exec();*/

      int retOnSaveAsAction = QMessageBox::warning(this, tr("My Application"), tr("The file has been modified.\n Do you want to save your changes?"), QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
      switch (retOnSaveAsAction)
      {
        case QMessageBox::Yes:
          emit saveAsPressed(fileName);
          break;
        case QMessageBox::No:
          return;
          break;
      }
    }
    else
      emit saveAsPressed(fileName);
  }

}



QToolBar* UrLevelEditorMainWindow::assetToolBar()
{
  return assetToolBar_;
}
