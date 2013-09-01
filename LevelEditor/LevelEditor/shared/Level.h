#ifndef LEVEL_H
#define LEVEL_H


#include <QString>
#include <QDomElement>

class Level
{
public:
  Level();
  ~Level();

  void Unmarshall( QDomElement& levelElement );

public: // Members
  QString Name;
  unsigned int Id;
  QString Description;
  unsigned int Column;
  unsigned int Row;

private: // Constants
  static const char* LEVEL_ID_ATTR;
  static const char* LEVEL_NAME_ATTR;
  static const char* LEVEL_DESCRIPTION_TAG;
  static const char* LEVEL_SIZE_TAG;
  static const char* LEVEL_SIZE_COLUMN_ATTR;
  static const char* LEVEL_SIZE_ROW_ATTR;
};

#endif // LEVEL_H
