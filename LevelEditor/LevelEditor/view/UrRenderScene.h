#ifndef UR_RENDER_SCENE_H
#define UR_RENDER_SCENE_H

// Qt
#include <QWidget>

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

protected:
    void paintEvent( QPaintEvent* event );

private: // Members
    QList<UrAsset*> assets_;

    bool gridEnabled_;
};

#endif // UR_RENDER_SCENE_H
