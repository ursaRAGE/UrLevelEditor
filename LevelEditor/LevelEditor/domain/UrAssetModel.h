#ifndef URSA_ASSET_MODEL_H
#define URSA_ASSET_MODEL_H

#include <QList>
class UrLevelInput;
class Block;
class Barrel;
class Meepo;

class UrAssetModel
{
public:
  UrAssetModel();
  ~UrAssetModel();

  void LoadTestInputFile();

  QList<Block*> blocks() const;
  QList<Barrel*> barrels() const;

  Meepo* meepo() const;

private:
  UrLevelInput* inputLevel_;
};

#endif // URSA_ASSET_MODEL_H
