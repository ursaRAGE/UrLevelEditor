#include "UrAssetModel.h"
#include "UrXmlLevelInput.h"
#include "UrLevelInput.h"
#include "shared/Barrel.h"
#include "shared/Block.h"
#include "shared/Meepo.h"

UrAssetModel::UrAssetModel()
{
  inputLevel_ = new UrXmlLevelInput();
}


UrAssetModel::~UrAssetModel()
{
}

void UrAssetModel::LoadTestInputFile()
{
  inputLevel_->loadInputFile("levels/demolevel.xml");
}

QList<Block*> UrAssetModel::blocks() const
{
  return inputLevel_->blocks();
}

QList<Barrel*> UrAssetModel::barrels() const
{
  return inputLevel_->barrels();
}

Meepo* UrAssetModel::meepo() const
{
  return inputLevel_->meepo();
}
