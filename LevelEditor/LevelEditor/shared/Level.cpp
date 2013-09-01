#include "Level.h"

#include <QDomAttr>

const char* Level::LEVEL_ID_ATTR = "Id";
const char* Level::LEVEL_NAME_ATTR = "Name";
const char* Level::LEVEL_DESCRIPTION_TAG = "Description";
const char* Level::LEVEL_SIZE_TAG = "Size";
const char* Level::LEVEL_SIZE_COLUMN_ATTR = "Column";
const char* Level::LEVEL_SIZE_ROW_ATTR = "Row";

Level::Level()
  : Id(-1)
  , Column(0)
  , Row(0)
{
}

Level::~Level()
{
}


void Level::Unmarshall( QDomElement& levelElement )
{
  QDomAttr idAttr = levelElement.attributeNode(LEVEL_ID_ATTR);
  QDomAttr nameAttr = levelElement.attributeNode(LEVEL_NAME_ATTR);

  QDomElement descriptionElement = levelElement.firstChildElement(LEVEL_DESCRIPTION_TAG);
  QDomElement sizeElement = levelElement.firstChildElement(LEVEL_SIZE_TAG);
  QDomAttr sizeColumnAttr = sizeElement.attributeNode(LEVEL_SIZE_COLUMN_ATTR);
  QDomAttr sizeRowAttr = sizeElement.attributeNode(LEVEL_SIZE_ROW_ATTR);

  Id = idAttr.value().toUInt();
  Name = nameAttr.value();
  Description = descriptionElement.text();
  Row = sizeRowAttr.value().toUInt();
  Column = sizeColumnAttr.value().toUInt();
}

