#include "UrAssetRenderView.h"
#include "UrRenderScene.h"

UrAssetRenderView::UrAssetRenderView(QWidget *parent)
    : QWidget(parent)
{
 ui.setupUi(this);
 levelRenderScene_ = new UrRenderScene();
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


