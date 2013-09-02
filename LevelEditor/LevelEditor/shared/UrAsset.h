#ifndef UR_ASSET_H
#define UR_ASSET_H

#include <QImage>

class UrAsset
{
public:
  UrAsset();
  virtual ~UrAsset();
  virtual QImage image() const = 0;

  void setRow( const unsigned int row );
  void setColumn( const unsigned int column );

public: // Members
  unsigned int X;
  unsigned int Y;

public:
  unsigned int Row;
  unsigned int Column;
};

#endif //UR_ASSET_H

