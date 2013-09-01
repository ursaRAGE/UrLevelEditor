#ifndef BLOCK_H
#define BLOCK_H

#include "UrAsset.h"

class Block : public UrAsset
{
public:
  Block();
  virtual ~Block();

  virtual QImage image() const;

  void setRow(const int row );
  void setColumn( const int column );

public: // Members
  unsigned int Row;
  unsigned int Column;

private:
  QImage image_;
};

#endif // BLOCK_H
