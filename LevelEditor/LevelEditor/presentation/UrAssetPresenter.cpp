#include "UrAssetPresenter.h"

#include "domain/UrAssetModel.h"
#include "view/UrAssetRenderView.h"
#include "shared/UrAsset.h"
#include "shared/Block.h"
#include "shared/Barrel.h"
#include "shared/Meepo.h"
#include "shared/Level.h"
#include <QList>

UrAssetPresenter::UrAssetPresenter(UrAssetModel* model, UrAssetRenderView* view, QObject *parent)
 : QObject(parent)
 , view_(view)
 , model_(model)
{
  connect( model_, SIGNAL(levelChanged()), this, SLOT(reloadLevel()) );
}

UrAssetPresenter::~UrAssetPresenter()
{
}

void UrAssetPresenter::reloadLevel()
{
  view_->clear();

  QList<Block*> loadBlocks = model_->blocks();
  for( int index = 0; index < loadBlocks.size(); index++)
  {
    UrAsset* asset = loadBlocks[index];
    view_->addAssetToLevel(asset);
  }

  QList<Barrel*> loadBarrels = model_->barrels();
  for( int index = 0; index < loadBarrels.size(); index++)
  {
    UrAsset* asset = loadBarrels[index];
    view_->addAssetToLevel(asset);
  }

  view_->addAssetToLevel(model_->meepo());

  Level* level = model_->level();

  //Calculating the size of square
  const unsigned int factorOfSquare = 58;

  const int levelWidth = level->Column * factorOfSquare;
  const int levelHeight = level->Row * factorOfSquare;
  view_->setLevelSize( levelWidth,levelHeight );
}
