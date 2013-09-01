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

  void Unmarshall( const QDomElement& levelElement );

public: // Members
  unsigned int Row;
  unsigned int Column;

private: 
  QImage image_;
};

#endif // BARREL_H
