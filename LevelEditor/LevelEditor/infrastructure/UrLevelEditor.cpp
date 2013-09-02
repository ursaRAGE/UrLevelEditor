// ursaRage
#include "UrLevelEditor.h"
#include "view/UrLevelEditorMainWindow.h"
#include "domain/UrAssetModel.h"
#include "presentation/UrAssetPresenter.h"
#include "view\UrAssetRenderView.h"
#include "view/UrAssetPropertiesView.h"


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
  delete assetPresenter_;
  delete assetModel_;
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
  assetRenderView_ = new UrAssetRenderView();
  mainWindow_->setCentralWidget(assetRenderView_);
  mainWindow_->show();

  assetPropertiesView_ = new UrAssetPropertiesView(mainWindow_->assetToolBar());
}

void UrLevelEditor::constructPresentation()
{
  assetPresenter_ = new UrAssetPresenter(assetModel_, assetRenderView_);
}
