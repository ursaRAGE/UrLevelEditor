#ifndef URSA_ASSET_MODEL_H
#define URSA_ASSET_MODEL_H

#include <QList>
class UrLevelInput;
class Block;
class Barrel;

class UrAssetModel
{
public:
  UrAssetModel();
  ~UrAssetModel();

  void LoadTestInputFile();

  QList<Block*> blocks() const;
  QList<Barrel*> barrels() const;

private:
  UrLevelInput* inputLevel_;
};

#endif // URSA_ASSET_MODEL_H
