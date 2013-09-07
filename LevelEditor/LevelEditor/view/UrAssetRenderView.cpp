#include "UrAssetRenderView.h"
#include "widgets/UrRenderScene.h"
#include "shared/UrAsset.h"
#include "widgets/UrAssetPropertiesWidget.h"
#include <QToolBar>

UrAssetRenderView::UrAssetRenderView(QToolBar* toolbar, QWidget *parent)
    : QWidget(parent)
{
 ui.setupUi(this);
 levelRenderScene_ = new UrRenderScene();
 levelRenderScene_->setFixedSize(400,400);
 ui.wRenderScrollArea->setWidget(levelRenderScene_);
 ui.wRenderScrollArea->ensureVisible(500, 500);
 levelRenderScene_->show();

 connect( levelRenderScene_, SIGNAL(assetClicked(int)), this, SIGNAL(assetClicked(int)));
 propertiesWidget_ = new UrAssetPropertiesWidget(toolbar);
}

UrAssetRenderView::~UrAssetRenderView()
{
}

UrRenderScene* UrAssetRenderView::renderSceneWidget() const
{
  return levelRenderScene_;
}

void UrAssetRenderView::addAssetToLevel( UrAsset* asset )
{
  levelRenderScene_->addAsset(asset);
}

void UrAssetRenderView::clear()
{
  levelRenderScene_->clear();
}

void UrAssetRenderView::setLevelSize( const int widthPixels, const int heightPixels )
{
  levelRenderScene_->setFixedSize(widthPixels, heightPixels);
}

