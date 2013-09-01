#include "UrAssetPresenter.h"

#include "domain/UrAssetModel.h"
#include "view/UrRenderScene.h"
#include "shared/UrAsset.h"
#include "shared/Block.h"
#include "shared/Barrel.h"
#include <QList>

UrAssetPresenter::UrAssetPresenter(UrAssetModel* model, UrRenderScene* view, QObject *parent)
 : model_(model)
 , view_(view)
 , QObject(parent)
{
  reloadAllAssets();
}

UrAssetPresenter::~UrAssetPresenter()
{
}

void UrAssetPresenter::reloadAllAssets()
{
  view_->clear();

  QList<Block*> loadBlocks = model_->blocks();
  for( int index = 0; index < loadBlocks.size(); index++)
  {
    UrAsset* asset = loadBlocks[index];
    view_->addAsset(asset);
  }

  QList<Barrel*> loadBarrels = model_->barrels();
  for( int index = 0; index < loadBarrels.size(); index++)
  {
    UrAsset* asset = loadBarrels[index];
    view_->addAsset(asset);
  }

}
