#ifndef UR_ASSET_H
#define UR_ASSET_H

#include <QImage>

class UrAsset
{
public:
  explicit UrAsset(int id);
  virtual ~UrAsset();
  virtual QImage image() const = 0;

  void setRow( const unsigned int row );
  void setColumn( const unsigned int column );
  void setLevelEditorPosition( const QPoint& point );
  QPoint gamePosition() const;

  bool isPointTouching(const QPoint& point );

  int id() const;

  QPoint editorCoordinates();

public: // Members
  unsigned int LevelEditorX;
  unsigned int LevelEditorY;

  unsigned int Row;
  unsigned int Column;

protected: 
  void calculateLevelEditorPosition( const int height );

private:
  unsigned int unqueId_;
};

#endif //UR_ASSET_H

