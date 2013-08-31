#ifndef UR_LEVEL_EDITOR_APPLICATION_H
#define UR_LEVEL_EDITOR_APPLICATION_H

// Qt
#include <QApplication>

// ursaRage
class UrLevelEditor;

class UrLevelEditorApplication : public QApplication
{
public:
  UrLevelEditorApplication(int& argc, char* argv[]);
  virtual ~UrLevelEditorApplication();

private:
  UrLevelEditor* urLevelEditor_;
};

#endif // UR_LEVEL_EDITOR_APPLICATION_H
