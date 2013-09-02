#ifndef UR_ASSET_H
#define UR_ASSET_H

#include <QImage>

class UrAsset
{
public:
  explicit UrAsset(int id);
  virtual ~UrAsset();
  virtual QImage image() const = 0;

  void setRow( const unsigned int row );
  void setColumn( const unsigned int column );

  bool isPointTouching(const QPoint& point );

  int id() const;

public: // Members
  unsigned int X;
  unsigned int Y;

public:
  unsigned int Row;
  unsigned int Column;

private:
  unsigned int unqueId_;
};

#endif //UR_ASSET_H

