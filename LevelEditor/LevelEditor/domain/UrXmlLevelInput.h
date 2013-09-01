#ifndef UR_XML_LEVEL_INPUT
#define UR_XML_LEVEL_INPUT

#include "UrLevelInput.h"
#include <QString>
class QDomDocument;
#include <QDomElement>

class UrXmlLevelInput :   public UrLevelInput
{
public:
  UrXmlLevelInput();
  virtual ~UrXmlLevelInput();

  virtual void loadInputFile( const QString& filename );

private: // Methods
  void LoadLevel();
  void LoadMeepo( const QDomElement& levelElement );
  void LoadBlocks( const QDomElement& levelElement );
  void LoadBarrels( const QDomElement& levelElement );

private: // Constants
  static const char* LEVEL_TAG;

  static const char* MEEPO_TAG;
  static const char* MEEPO_START_COLUMN_ATTR;
  static const char* MEEPO_START_ROW_ATTR;

  static const char* BARRELS_TAG;
  static const char* BARREL_TAG;

private: // Members 
  QDomDocument* document_;
  QString fileName_;
};

#endif