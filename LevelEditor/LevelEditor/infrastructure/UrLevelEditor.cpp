// ursaRage
#include "UrLevelEditor.h"
#include "view/UrLevelEditorMainWindow.h"

UrLevelEditor::UrLevelEditor(QObject *parent)
 : QObject(parent)
{
  constructInfrastructure();
  constructDomain();
  constructView();
  constructPresentation();
}

UrLevelEditor::~UrLevelEditor()
{
  delete mainWindow_;
}

void UrLevelEditor::constructInfrastructure()
{

}

void UrLevelEditor::constructDomain()
{

}

void UrLevelEditor::constructView()
{
  mainWindow_ = new UrLevelEditorMainWindow();
  mainWindow_->show();
}

void UrLevelEditor::constructPresentation()
{

}
