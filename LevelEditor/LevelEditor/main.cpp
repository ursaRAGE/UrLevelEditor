#include "urLevelEditorMainWindow.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UrLevelEditor w;
    w.show();
    return a.exec();
}