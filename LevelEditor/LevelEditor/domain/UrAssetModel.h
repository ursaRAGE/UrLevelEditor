#ifndef URSA_ASSET_MODEL_H
#define URSA_ASSET_MODEL_H

// Qt
#include <QList>
#include <QObject>

// ursaRAGE
class Barrel;
class Block;
class Level;
class Meepo;
class UrLevelInput;

class UrAssetModel : public QObject
{
  Q_OBJECT

  public:
    UrAssetModel(QObject *parent = 0);
    ~UrAssetModel();

    QList<Block*> blocks() const;
    QList<Barrel*> barrels() const;

    Meepo* meepo() const;
    Level* level() const;

  public slots:
    void loadInputFile(const QString& fileName);
    void newLevel();
    void save( const QString& filename );

  signals:
    void levelChanged();

  private: // Methods
    void clear();
  private: // Members
    Level* level_;
    QList<Block*> blocks_;
    QList<Barrel*> barrels_;
    Meepo* meepo_;
};

#endif // URSA_ASSET_MODEL_H
