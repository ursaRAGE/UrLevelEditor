// ursaRage
#include "UrLevelEditorApplication.h"
#include "UrLevelEditor.h"

UrLevelEditorApplication::UrLevelEditorApplication(int& argc, char* argv[])
 : QApplication(argc, argv)
{
  urLevelEditor_ = new UrLevelEditor();
}

UrLevelEditorApplication::~UrLevelEditorApplication()
{
  delete urLevelEditor_;
}
