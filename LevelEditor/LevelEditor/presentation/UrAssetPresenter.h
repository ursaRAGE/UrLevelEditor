#ifndef URASSETPRESENTER_H
#define URASSETPRESENTER_H

#include <QObject>

class UrAssetModel;
class UrRenderScene;

class UrAssetPresenter : public QObject
{
 Q_OBJECT

public:
    explicit UrAssetPresenter(UrAssetModel* model, UrRenderScene* view, QObject *parent = NULL);
    ~UrAssetPresenter();
    void reloadAllAssets();

private:
    UrAssetModel* model_;
    UrRenderScene* view_;
};

#endif // URASSETPRESENTER_H
