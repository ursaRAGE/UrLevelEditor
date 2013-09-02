#include "UrAssetRenderView.h"
#include "widgets/UrRenderScene.h"
#include "shared/UrAsset.h"

UrAssetRenderView::UrAssetRenderView(QWidget *parent)
    : QWidget(parent)
{
 ui.setupUi(this);
 levelRenderScene_ = new UrRenderScene();
 levelRenderScene_->setFixedSize(400,400);
 ui.wRenderScrollArea->setWidget(levelRenderScene_);
 ui.wRenderScrollArea->ensureVisible(500, 500);
 levelRenderScene_->show();
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


