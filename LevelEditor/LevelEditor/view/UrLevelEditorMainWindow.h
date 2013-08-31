#ifndef URLEVELEDITOR_H
#define URLEVELEDITOR_H

#include <QtGui/QMainWindow>
#include "ui_urleveleditor.h"

class UrLevelEditorMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    UrLevelEditorMainWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~UrLevelEditorMainWindow();

private:
    Ui::UrLevelEditorClass ui;
};

#endif // URLEVELEDITOR_H
