#include "UrAssetModel.h"
#include "UrXmlLevelInput.h"
#include "UrLevelInput.h"
#include "shared/Barrel.h"
#include "shared/Block.h"
#include "shared/Meepo.h"
#include "shared/Level.h"

UrAssetModel::UrAssetModel(QObject *parent)
  : QObject(parent)
  , level_(NULL)
  , meepo_(NULL)
{
}


UrAssetModel::~UrAssetModel()
{
  clear();
}

QList<Block*> UrAssetModel::blocks() const
{
  return blocks_;
}

QList<Barrel*> UrAssetModel::barrels() const
{
  return barrels_;
}

Meepo* UrAssetModel::meepo() const
{
  return meepo_;
}

Level* UrAssetModel::level() const
{
  return level_;
}

void UrAssetModel::loadInputFile( const QString& fileName )
{
  UrLevelInput* input = new UrXmlLevelInput();
  input->loadInputFile(fileName);

  this->clear();
  level_ = input->level();
  meepo_ = input->meepo();
  blocks_ = input->blocks();
  barrels_ = input->barrels();

  delete input;
  emit levelChanged();
}

void UrAssetModel::newLevel()
{
  clear();
  level_ = new Level();
  meepo_ = new Meepo(1);
  emit levelChanged();
}

void UrAssetModel::save( const QString& filename )
{
  printf("Saving will go here...\n");
}


void UrAssetModel::clear()
{
  if( NULL != level_ )
  {
    delete level_;
    level_ = NULL;
  }

  if( NULL != meepo_ )
  {
    delete meepo_;
    meepo_ = NULL;
  }
  
  foreach(Block* block, blocks_)
  {
    delete block;
  }
  blocks_.clear();

  foreach(Barrel* barrel, barrels_)
  {
    delete barrel;
  }
  barrels_.clear();
}

