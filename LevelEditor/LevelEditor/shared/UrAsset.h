#ifndef UR_ASSET_H
#define UR_ASSET_H

#include <QImage>

class UrAsset
{
public:
  UrAsset();
  virtual ~UrAsset();
  virtual QImage image() const = 0;

public: // Members
  int X;
  int Y;
};

#endif //UR_ASSET_H

