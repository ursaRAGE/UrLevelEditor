#include "Barrel.h"


const char* Barrel::BARREL_COLUMN_ATTR = "Column";
const char* Barrel::BARREL_ROW_ATTR = "Row";
const char* Barrel::BARREL_SPEED_ATTR = "Speed";
const char* Barrel::BARREL_STARTING_ANGLE_ATTR = "StartingAngle";
const char* Barrel::BARREL_ROTATION_ANGLE_ATTR = "RotationAngle";
const char* Barrel::BARREL_DELAY_ATTR = "Delay";
const char* Barrel::BARREL_AUTO_ATTR = "Auto";

Barrel::Barrel()
  : Speed(0.0)
  , StartingAngle(0.0)
  , RotationAngle(0.0)
  , Delay(0.0)
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

void Barrel::Unmarshall( QDomElement& barrelElement )
{
  QDomAttr barrelColumnAttr = barrelElement.attributeNode(BARREL_COLUMN_ATTR);
  QDomAttr barrelRowAttr = barrelElement.attributeNode(BARREL_ROW_ATTR);
  QDomAttr barrelSpeedAttr = barrelElement.attributeNode(BARREL_SPEED_ATTR);
  QDomAttr barrelStartingAngleAttr = barrelElement.attributeNode(BARREL_STARTING_ANGLE_ATTR);
  QDomAttr barrelRotationAngleAttr = barrelElement.attributeNode(BARREL_ROTATION_ANGLE_ATTR);
  QDomAttr barrelDelayAttr = barrelElement.attributeNode(BARREL_DELAY_ATTR);
  QDomAttr barrelAutoAttr = barrelElement.attributeNode(BARREL_AUTO_ATTR);


  UrAsset::setRow( barrelRowAttr.value().toUInt() );
  UrAsset::setColumn( barrelColumnAttr.value().toUInt() );
  Speed = barrelSpeedAttr.value().toFloat();
  StartingAngle = barrelStartingAngleAttr.value().toFloat();
  RotationAngle = barrelRotationAngleAttr.value().toFloat();
  Delay = barrelDelayAttr.value().toFloat();
  if (barrelAutoAttr.value() == "True")
  {
    Auto = true;
  }
}