#include "UrXmlLevelInput.h"

#include <QDomDocument>
#include <QFile>
#include "shared/Level.h"
#include "shared/Meepo.h"
#include "shared/Block.h"
#include "shared/Barrel.h"

const char* UrXmlLevelInput::LEVEL_TAG = "Level";


const char* UrXmlLevelInput::MEEPO_TAG = "Meepo";
const char* UrXmlLevelInput::MEEPO_START_COLUMN_ATTR = "Column"; // MOVE TO MEEPO CLASS
const char* UrXmlLevelInput::MEEPO_START_ROW_ATTR = "Row";

const char* UrXmlLevelInput::BARRELS_TAG = "Barrels";
const char* UrXmlLevelInput::BARREL_TAG = "Barrel"; 


UrXmlLevelInput::UrXmlLevelInput()
{
  document_ = new QDomDocument();
}


UrXmlLevelInput::~UrXmlLevelInput()
{
  delete document_;
}

void UrXmlLevelInput::loadInputFile( const QString& filename )
{
  fileName_ = filename;

  QFile xmlFile(fileName_);
  document_->setContent(&xmlFile);

  LoadLevel();
}

void UrXmlLevelInput::LoadLevel()
{
  QDomElement levelElement = document_->documentElement().firstChildElement(LEVEL_TAG);
  Level* level = new Level();
  level->Unmarshall(levelElement);
  UrLevelInput::setLevel(level);

  LoadMeepo(levelElement);
  LoadBarrels(levelElement);
  LoadBlocks(levelElement);
}

void UrXmlLevelInput::LoadMeepo( const QDomElement& levelElement )
{
  QDomElement meepoElement = levelElement.firstChildElement(MEEPO_TAG);
  Meepo* meepo = new Meepo();
  meepo->Unmarshall(meepoElement);
  UrLevelInput::setMeepo(meepo);
}

void UrXmlLevelInput::LoadBlocks( const QDomElement& levelElement )
{
  QDomElement barrelsElements = levelElement.firstChildElement(BARRELS_TAG);
  QDomNodeList barrelsNodes = barrelsElements.elementsByTagName(BARREL_TAG);

  for(int index = 0; index < barrelsNodes.size(); index++)
  {
    QDomElement barrelElement = barrelsNodes.at(index).toElement();
    Barrel* newBarrel = new Barrel();
    newBarrel->Unmarshall(barrelElement);
    UrLevelInput::addBarrel(newBarrel);
  }
}

void UrXmlLevelInput::LoadBarrels( const QDomElement& levelElement)
{

}