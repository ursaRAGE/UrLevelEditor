#ifndef URASSETRENDERVIEW_H
#define URASSETRENDERVIEW_H

#include <QWidget>
#include "ui_UrAssetRenderView.h"

class UrRenderScene;
class UrAsset;

class UrAssetRenderView : public QWidget
{
    Q_OBJECT

public:
    UrAssetRenderView(QWidget *parent = 0);
    ~UrAssetRenderView();
    
    UrRenderScene* renderSceneWidget() const;
    void addAssetToLevel( UrAsset* asset );
    void clear();

private:
    Ui::UrAssetRenderView ui;

    UrRenderScene* levelRenderScene_;
};

#endif // URASSETRENDERVIEW_H
