#include "UrAsset.h"

#include "UrLevelEditorDefines.h"

#include <QPoint>

UrAsset::UrAsset(int id)
  :LevelEditorX(0)
  ,LevelEditorY(0)
  ,Row(0)
  ,Column(0)
  ,unqueId_(id)
{
}

UrAsset::~UrAsset()
{
}

int UrAsset::id() const
{
  return unqueId_;
}

void UrAsset::setRow( const unsigned int row )
{
  Row = row;
  LevelEditorX = Row * UrsaRage::SPACE_WIDTH;
}

void UrAsset::setColumn( const unsigned int column )
{
  Column = column;
  LevelEditorY = Column * UrsaRage::SPACE_HEIGHT;
}

bool UrAsset::isPointTouching( const QPoint& point )
{
  if( point.x() >= LevelEditorX && point.x() <= LevelEditorX+ image().width() )
  {
    if( point.y() >= LevelEditorY && point.y() <= LevelEditorY+ image().height() )
    {
      return true;
    }
  }
  return false;
}

void UrAsset::setLevelEditorPosition( const QPoint& point )
{
  LevelEditorX = point.x();
  LevelEditorY = point.y();
}

QPoint UrAsset::gamePosition() const
{
  qWarning("This method not implemented yet.");
  return QPoint();
}

void UrAsset::calculateLevelEditorPosition( const int numberOfRows )
{
  const int height = numberOfRows * UrsaRage::SPACE_HEIGHT;
  LevelEditorX =  Column* UrsaRage::SPACE_WIDTH;
  LevelEditorY =  height - (Row * UrsaRage::SPACE_HEIGHT);
}
