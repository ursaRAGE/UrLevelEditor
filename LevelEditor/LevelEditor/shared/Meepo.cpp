
// ursaRage
#include "Meepo.h"
#include "UrLevelEditorDefines.h"

Meepo::Meepo()
  : StartRow(0)
  , StartColumn(0)
{
}

Meepo::~Meepo()
{
};

QImage Meepo::image() const
{
  return meepoImage_;
}

void Meepo::setRow( const int startRow )
{
  StartRow = startRow;
  X = StartRow * UrsaRage::SPACE_WIDTH;
}

void Meepo::setColumn( const int startColumn )
{
  StartColumn = startColumn;
  Y = StartColumn * UrsaRage::SPACE_HEIGHT;
}

void Meepo::Unmarshall( QDomElement& meepoElement )
{
}