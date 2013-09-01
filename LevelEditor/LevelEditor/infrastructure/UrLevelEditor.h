#ifndef UR_LEVEL_EDITOR_H
#define UR_LEVEL_EDITOR_H

// Qt
#include <QObject>

// ursaRage
class UrLevelEditorMainWindow;
class UrAssetModel;
class UrAssetPresenter;
class UrAssetRenderView;

class UrLevelEditor : public QObject
{
 Q_OBJECT

public:
  UrLevelEditor(QObject *parent = NULL);
  ~UrLevelEditor();

private: // Methods
  void constructInfrastructure();
  void constructDomain();
  void constructView();
  void constructPresentation();

private: // Members
  // Infrastructure
  
  // View
  UrLevelEditorMainWindow* mainWindow_;
  
  UrAssetRenderView* assetRenderView_;

  // Model
  UrAssetModel* assetModel_;

  // Presentation
  UrAssetPresenter* assetPresenter_;

};

#endif // UR_LEVEL_EDITOR_H
