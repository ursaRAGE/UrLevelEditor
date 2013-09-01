
// ursaRage
#include "Block.h"
#include "UrLevelEditorDefines.h"

Block::Block()
  : Row(0)
  , Column(0)
{
  image_ = QImage("assets/block.png");
}

Block::~Block()
{
}


QImage Block::image() const
{
  return image_;
}

void Block::setRow( const int row )
{
  Row = row;
  X = Row * UrsaRage::SPACE_WIDTH;
}

void Block::setColumn( const int column )
{
  Column = column;
  Y = Column * UrsaRage::SPACE_HEIGHT;
}
