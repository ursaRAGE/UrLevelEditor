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
  static const char* MEEPO_START_COLUMN_ATTR;
  static const char* MEEPO_START_ROW_ATTR;

};

#endif // MEEPO_H
