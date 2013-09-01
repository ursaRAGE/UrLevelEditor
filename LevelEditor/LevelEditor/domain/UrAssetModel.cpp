#include "UrAssetModel.h"
#include "UrXmlLevelInput.h"
#include "UrLevelInput.h"

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
