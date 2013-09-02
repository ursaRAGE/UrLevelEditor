#ifndef UR_RENDER_SCENE_H
#define UR_RENDER_SCENE_H

// Qt
#include <QWidget>

class QMouseEvent;
class QPaintEvent;

// ursaRage
class UrAsset;

class UrRenderScene : public QWidget
{
 Q_OBJECT

public:
    UrRenderScene(QWidget *parent = NULL);
    ~UrRenderScene();

    void addAsset( UrAsset* asset );
    void setGridEnabled( bool enabled );
    void clear();

protected:
    void paintEvent( QPaintEvent* event );

    void mousePressEvent( QMouseEvent* event );


private: // Members
    QList<UrAsset*> assets_;

    bool gridEnabled_;
};

#endif // UR_RENDER_SCENE_H
