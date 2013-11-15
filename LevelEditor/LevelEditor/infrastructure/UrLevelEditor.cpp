// ursaRage
#include "domain/UrAssetModel.h"
#include "presentation/UrAssetPresenter.h"
#include "view/UrAssetRenderView.h"
#include "view/UrLevelEditorMainWindow.h"
#include "UrLevelEditor.h"


UrLevelEditor::UrLevelEditor(QObject *parent)
 : QObject(parent)
{
  constructInfrastructure();
  constructDomain();
  constructView();
  constructPresentation();

  connect( mainWindow_, SIGNAL(newPressed()), assetModel_, SLOT(newLevel()) );
  connect( mainWindow_, SIGNAL(openPressed(const QString&)), assetModel_, SLOT(loadInputFile(const QString&)) );
  connect( mainWindow_, SIGNAL(savePressed()), assetModel_, SLOT() );
  connect( mainWindow_, SIGNAL(saveAsPressed(const QString&)), assetModel_, SLOT(save(const QString&)) );
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
}

void UrLevelEditor::constructView()
{
  mainWindow_ = new UrLevelEditorMainWindow();
  assetRenderView_ = new UrAssetRenderView(mainWindow_->assetToolBar());
  mainWindow_->setCentralWidget(assetRenderView_);
  mainWindow_->show();
}

void UrLevelEditor::constructPresentation()
{
  assetPresenter_ = new UrAssetPresenter(assetModel_, assetRenderView_);
}
