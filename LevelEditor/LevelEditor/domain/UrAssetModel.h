#ifndef URSA_ASSET_MODEL_H
#define URSA_ASSET_MODEL_H

class UrLevelInput;

class UrAssetModel
{
public:
  UrAssetModel();
  ~UrAssetModel();

  void LoadTestInputFile();

private:
  UrLevelInput* inputLevel_;
};

#endif // URSA_ASSET_MODEL_H
