#ifndef BLOCK_H
#define BLOCK_H

#include "UrAsset.h"
#include <QDomElement>

class Block : public UrAsset
{
public:
  Block();
  virtual ~Block();

  virtual QImage image() const;

  void setRow(const int row );
  void setColumn( const int column );

  void Unmarshall( QDomElement& blockElement );

public: // Members
  unsigned int Row;
  unsigned int Column;

private:
  QImage image_;
  static const char* BLOCK_COLUMN_ATTR;
  static const char* BLOCK_ROW_ATTR;
};

#endif // BLOCK_H
