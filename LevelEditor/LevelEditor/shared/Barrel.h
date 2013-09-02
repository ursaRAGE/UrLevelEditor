#ifndef BARREL_H
#define BARREL_H

// Qt
#include <QImage>
#include <QDomElement>

// ursaRage
#include "UrAsset.h"

class Barrel : public UrAsset
{
public:
  Barrel();
  virtual ~Barrel();

  virtual QImage image() const;

  void setRow(const int row );
  void setColumn( const int column );

  void Unmarshall( QDomElement& barrelElement );

public: // Members

  unsigned float Speed;
  unsigned float StartingAngle;
  unsigned float RotationAngle;
  unsigned float Delay;
  bool Auto;

private: 
  QImage image_;
  static const char* BARREL_COLUMN_ATTR;
  static const char* BARREL_ROW_ATTR;
  static const char* BARREL_SPEED_ATTR;
  static const char* BARREL_STARTING_ANGLE_ATTR;
  static const char* BARREL_ROTATION_ANGLE_ATTR;
  static const char* BARREL_DELAY_ATTR;
  static const char* BARREL_AUTO_ATTR;
};

#endif // BARREL_H
