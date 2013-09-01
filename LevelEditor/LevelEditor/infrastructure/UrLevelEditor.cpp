// ursaRage
#include "UrLevelEditor.h"
#include "view/UrLevelEditorMainWindow.h"
#include "view/UrRenderScene.h"
#include "domain/UrAssetModel.h"

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
  assetModel_ = new UrAssetModel();
  assetModel_->LoadTestInputFile();
}

void UrLevelEditor::constructView()
{
  mainWindow_ = new UrLevelEditorMainWindow();
  levelRenderScene_ = new UrRenderScene();
  mainWindow_->setCentralWidget(levelRenderScene_);
  mainWindow_->show();
}

void UrLevelEditor::constructPresentation()
{

}
