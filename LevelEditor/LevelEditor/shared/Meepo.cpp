
// ursaRage
#include "Meepo.h"
#include "UrLevelEditorDefines.h"

const char* Meepo::MEEPO_START_COLUMN_ATTR = "StartColumn";
const char* Meepo::MEEPO_START_ROW_ATTR = "StartRow";


Meepo::Meepo( int id )
  : UrAsset(id)
{
  meepoImage_ = QImage("assets/bob01.png");
}

Meepo::~Meepo()
{
};

QImage Meepo::image() const
{
  return meepoImage_;
}

void Meepo::Unmarshall( QDomElement& meepoElement )
{
  QDomAttr meepoStartColumn = meepoElement.attributeNode(MEEPO_START_COLUMN_ATTR);
  QDomAttr meepoStartRow = meepoElement.attributeNode(MEEPO_START_ROW_ATTR);

  UrAsset::setColumn(meepoStartColumn.value().toUInt());
  UrAsset::setRow(meepoStartRow.value().toUInt());
}