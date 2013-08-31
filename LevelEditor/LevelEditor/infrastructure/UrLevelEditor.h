#ifndef UR_LEVEL_EDITOR_H
#define UR_LEVEL_EDITOR_H

// Qt
#include <QObject>

// ursaRage
class UrLevelEditorMainWindow;

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

  // Model

  // Presentation

};

#endif // UR_LEVEL_EDITOR_H
