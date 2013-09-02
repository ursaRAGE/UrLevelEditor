#ifndef MEEPO_H
#define MEEPO_H

#include "UrAsset.h"
#include <QDomElement>

class Meepo : public UrAsset
{
public:
  explicit Meepo( int id );
  virtual ~Meepo();

  virtual QImage image() const;

  void Unmarshall( QDomElement& meepoElement );

private:
  QImage meepoImage_;
  static const char* MEEPO_START_COLUMN_ATTR;
  static const char* MEEPO_START_ROW_ATTR;

};

#endif // MEEPO_H
