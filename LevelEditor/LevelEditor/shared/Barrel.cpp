#include "Barrel.h"
#include "UrLevelEditorDefines.h"

Barrel::Barrel()
  : Row(0)
  , Column(0)
{
  image_ = QImage("LevelEditor/assets/barrel.png");
}

Barrel::~Barrel()
{
}

QImage Barrel::image() const
{
  return image_;
}

void Barrel::setRow( const int row )
{
  Row = row;
  X = Row * UrsaRage::SPACE_WIDTH;
}

void Barrel::setColumn( const int column )
{
  Column = column;
  Y = Column * UrsaRage::SPACE_HEIGHT;
}

void Barrel::Unmarshall( const QDomElement& levelElement )
{

}
