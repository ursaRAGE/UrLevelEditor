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

bool UrAsset::isPointTouching( const QPoint& point )
{
  if( point.x() >= X && point.x() <= X+ image().width() )
  {
    if( point.y() >= Y && point.y() <= Y+ image().height() )
    {
      return true;
    }
  }
  return false;
}
