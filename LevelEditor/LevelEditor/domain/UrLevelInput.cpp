// ursaRage
#include "UrLevelInput.h"

UrLevelInput::UrLevelInput()
  : uniqueIdCounter_(1)
{
}


UrLevelInput::~UrLevelInput()
{
}

Level* UrLevelInput::level() const
{
  return level_;
}

QList<Block*> UrLevelInput::blocks() const
{
  return blocks_;
}

QList<Barrel*> UrLevelInput::barrels() const
{
  return barrels_;
}

Meepo* UrLevelInput::meepo() const
{
  return meepo_;
}

void UrLevelInput::setLevel( Level* level )
{
  level_ = level;
}

void UrLevelInput::addBlock( Block* block )
{
  blocks_.append(block);
}

void UrLevelInput::setMeepo( Meepo* meepo )
{
  meepo_ = meepo;
}

void UrLevelInput::addBarrel( Barrel* barrel )
{
  barrels_.append(barrel);
}

int UrLevelInput::uniqueId()
{
  uniqueIdCounter_++;
  return uniqueIdCounter_;
}


