#ifndef BLOCK_H
#define BLOCK_H

#include "UrAsset.h"
#include <QDomElement>
class Level;

class Block : public UrAsset
{
public:
  explicit Block(int id);
  virtual ~Block();

  virtual QImage image() const;

  void Unmarshall( QDomElement& blockElement, Level* level );

private:
  QImage image_;
  static const char* BLOCK_COLUMN_ATTR;
  static const char* BLOCK_ROW_ATTR;
};

#endif // BLOCK_H
