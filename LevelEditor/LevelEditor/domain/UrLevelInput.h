#ifndef UR_LEVEL_INPUT
#define UR_LEVEL_INPUT

// Qt
#include <QList>
#include <QString>
// ursaRage
class Level;
class Block;
class Barrel;
class Meepo;

class UrLevelInput
{
public:
  UrLevelInput();
  virtual ~UrLevelInput();

  virtual void loadInputFile( const QString& filename ) = 0;

  Level* level() const;
  QList<Block*> blocks() const;
  QList<Barrel*> barrels() const;
  Meepo* meepo() const;

  void setLevel( Level* level );
  void addBlock( Block* block );
  void setMeepo( Meepo* meepo );
  void addBarrel( Barrel* barrel );

private:
  Level* level_;
  QList<Block*> blocks_;
  QList<Barrel*> barrels_;
  Meepo* meepo_;
};

#endif
