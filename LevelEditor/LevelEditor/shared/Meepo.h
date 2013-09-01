#ifndef MEEPO_H
#define MEEPO_H

#include "UrAsset.h"
#include <QDomElement>

class Meepo : public UrAsset
{
public:
  Meepo();
  virtual ~Meepo();

  virtual QImage image() const;

  void setRow(const int row );
  void setColumn( const int column );

  void Unmarshall( QDomElement& meepoElement );

public: // Members
  unsigned int StartRow;
  unsigned int StartColumn;

private:
  QImage meepoImage_;
};

#endif // MEEPO_H
