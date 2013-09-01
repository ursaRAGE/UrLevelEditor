
// ursaRage
#include "Meepo.h"
#include "UrLevelEditorDefines.h"

const char* Meepo::MEEPO_START_COLUMN_ATTR = "Column";
const char* Meepo::MEEPO_START_ROW_ATTR = "Row";


Meepo::Meepo()
  : StartRow(0)
  , StartColumn(0)
{
}

Meepo::~Meepo()
{
};

QImage Meepo::image() const
{
  return meepoImage_;
}

void Meepo::setRow( const int startRow )
{
  StartRow = startRow;
  X = StartRow * UrsaRage::SPACE_WIDTH;
}

void Meepo::setColumn( const int startColumn )
{
  StartColumn = startColumn;
  Y = StartColumn * UrsaRage::SPACE_HEIGHT;
}

void Meepo::Unmarshall( QDomElement& meepoElement )
{
  QDomAttr meepoStartColumn = meepoElement.attributeNode(MEEPO_START_COLUMN_ATTR);
  QDomAttr meepoStartRow = meepoElement.attributeNode(MEEPO_START_ROW_ATTR);

  StartColumn = meepoStartColumn.value().toUInt();
  StartRow = meepoStartRow.value().toUInt();
}