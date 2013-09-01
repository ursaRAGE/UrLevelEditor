#include "UrXmlLevelInput.h"

#include <QDomDocument>
#include <QFile>
#include "shared/Level.h"
#include "shared/Meepo.h"
#include "shared/Block.h"
#include "shared/Barrel.h"

const char* UrXmlLevelInput::LEVEL_TAG = "Level";


const char* UrXmlLevelInput::MEEPO_TAG = "Meepo";

const char* UrXmlLevelInput::BARRELS_TAG = "Barrels";
const char* UrXmlLevelInput::BARREL_TAG = "Barrel"; 

const char* UrXmlLevelInput::BLOCKS_TAG = "Blocks";
const char* UrXmlLevelInput::BLOCK_TAG = "Block";


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
  // The documentElement is the very first tag which is <Level></Level>.
  QDomElement levelElement = document_->documentElement();  
  if( levelElement.isNull() )
    return;
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
  QDomElement blocksElements = levelElement.firstChildElement(BLOCKS_TAG);
  QDomNodeList blocksNodes = blocksElements.elementsByTagName(BLOCK_TAG);

  for(int index = 0; index < blocksNodes.size(); index++)
  {
    QDomElement blockElement = blocksNodes.at(index).toElement();
    Block* newBlock = new Block();
    newBlock->Unmarshall(blockElement);
    UrLevelInput::addBlock(newBlock);
  }
}

void UrXmlLevelInput::LoadBarrels( const QDomElement& levelElement)
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
