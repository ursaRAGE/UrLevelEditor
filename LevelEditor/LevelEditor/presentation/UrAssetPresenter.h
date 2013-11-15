#ifndef URASSETPRESENTER_H
#define URASSETPRESENTER_H

#include <QObject>

class UrAssetModel;
class UrAssetRenderView;

class UrAssetPresenter : public QObject
{
 Q_OBJECT

public:
  explicit UrAssetPresenter(UrAssetModel* model, UrAssetRenderView* view, QObject *parent = NULL);
  ~UrAssetPresenter();

public slots:
  void reloadLevel();

private:
  UrAssetModel* model_;
  UrAssetRenderView* view_;
};

#endif // URASSETPRESENTER_H
