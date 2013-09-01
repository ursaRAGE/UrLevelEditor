#include "UrAssetModel.h"
#include "UrXmlLevelInput.h"
#include "UrLevelInput.h"
#include "shared/Barrel.h"
#include "shared/Block.h"

UrAssetModel::UrAssetModel()
{
  inputLevel_ = new UrXmlLevelInput();
}


UrAssetModel::~UrAssetModel()
{
}

void UrAssetModel::LoadTestInputFile()
{
  inputLevel_->loadInputFile("levels/level1.xml");
}

QList<Block*> UrAssetModel::blocks() const
{
  return inputLevel_->blocks();
}

QList<Barrel*> UrAssetModel::barrels() const
{
  return inputLevel_->barrels();
}
