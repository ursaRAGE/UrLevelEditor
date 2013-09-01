
// ursaRage
#include "Block.h"
#include "UrLevelEditorDefines.h"

const char* Block::BLOCK_COLUMN_ATTR = "Column";
const char* Block::BLOCK_ROW_ATTR = "Row";

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

void Block::Unmarshall( QDomElement& blockElement )
{
  QDomAttr blockRowAttr = blockElement.attributeNode(BLOCK_ROW_ATTR);
  QDomAttr blockColumnAttr = blockElement.attributeNode(BLOCK_COLUMN_ATTR);

  Row = blockRowAttr.value().toUInt();
  Column = blockColumnAttr.value().toUInt();
}
