
// ursaRage
#include "Block.h"
#include "UrLevelEditorDefines.h"

const char* Block::BLOCK_COLUMN_ATTR = "Column";
const char* Block::BLOCK_ROW_ATTR = "Row";

Block::Block(int id)
  : UrAsset(id)
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

void Block::Unmarshall( QDomElement& blockElement )
{
  QDomAttr blockRowAttr = blockElement.attributeNode(BLOCK_ROW_ATTR);
  QDomAttr blockColumnAttr = blockElement.attributeNode(BLOCK_COLUMN_ATTR);

  UrAsset::setRow( blockRowAttr.value().toUInt() );
  UrAsset::setColumn( blockColumnAttr.value().toUInt() );
}
