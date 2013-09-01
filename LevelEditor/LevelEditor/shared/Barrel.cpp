#include "Barrel.h"
#include "UrLevelEditorDefines.h"

const char* Barrel::BARREL_COLUMN_ATTR = "Column";
const char* Barrel::BARREL_ROW_ATTR = "Row";
const char* Barrel::BARREL_SPEED_ATTR = "Speed";
const char* Barrel::BARREL_ANGLE_ATTR = "Angle";
const char* Barrel::BARREL_AUTO_ATTR = "Auto";

Barrel::Barrel()
  : Row(0)
  , Column(0)
  , Speed(0.0)
  , Angle(0.0)
  , Auto(false)
{
  image_ = QImage("assets/barrel.png");
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

void Barrel::Unmarshall( QDomElement& barrelElement )
{
  QDomAttr barrelColumnAttr = barrelElement.attributeNode(BARREL_COLUMN_ATTR);
  QDomAttr barrelRowAttr = barrelElement.attributeNode(BARREL_ROW_ATTR);
  QDomAttr barrelSpeedAttr = barrelElement.attributeNode(BARREL_SPEED_ATTR);
  QDomAttr barrelAngleAttr = barrelElement.attributeNode(BARREL_ANGLE_ATTR);
  QDomAttr barrelAutoAttr = barrelElement.attributeNode(BARREL_AUTO_ATTR);


  this->setRow( barrelRowAttr.value().toUInt() );
  this->setColumn( barrelColumnAttr.value().toUInt() );
  Speed = barrelSpeedAttr.value().toFloat();
  Angle = barrelAngleAttr.value().toFloat();
  if (barrelAutoAttr.value() == "True")
  {
    Auto = true;
  }
}