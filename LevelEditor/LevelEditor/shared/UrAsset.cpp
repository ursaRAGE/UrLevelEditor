#include "UrAsset.h"

#include "UrLevelEditorDefines.h"

UrAsset::UrAsset()
  :X(0)
  ,Y(0)
  ,Row(0)
  ,Column(0)
{
}


UrAsset::~UrAsset()
{
}

void UrAsset::setRow( const unsigned int row )
{
  Row = row;
  X = Row * UrsaRage::SPACE_WIDTH;
}

void UrAsset::setColumn( const unsigned int column )
{
  Column = column;
  Y = Column * UrsaRage::SPACE_HEIGHT;
}
