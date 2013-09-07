#ifndef URASSETRENDERVIEW_H
#define URASSETRENDERVIEW_H

#include <QWidget>
#include "ui_UrAssetRenderView.h"

class UrRenderScene;
class UrAsset;
class UrAssetPropertiesWidget;
class QToolBar;

class UrAssetRenderView : public QWidget
{
    Q_OBJECT

public:
    UrAssetRenderView(QToolBar* toolbar, QWidget *parent = 0);
    ~UrAssetRenderView();
    
    UrRenderScene* renderSceneWidget() const;
    void addAssetToLevel( UrAsset* asset );
    void clear();
    void setLevelSize( const int widthPixels, const int heightPixels  );

signals:
    void assetClicked( int id );

private:
    Ui::UrAssetRenderView ui;

    UrRenderScene* levelRenderScene_;
    UrAssetPropertiesWidget* propertiesWidget_;
};

#endif // URASSETRENDERVIEW_H
