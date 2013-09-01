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

  void Unmarshall( QDomElement& blockElement );

private:
  QImage image_;
  static const char* BLOCK_COLUMN_ATTR;
  static const char* BLOCK_ROW_ATTR;
};

#endif // BLOCK_H
