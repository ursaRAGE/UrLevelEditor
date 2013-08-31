#ifndef URLEVELEDITOR_H
#define URLEVELEDITOR_H

#include <QtGui/QMainWindow>
#include "ui_urleveleditor.h"

class UrLevelEditor : public QMainWindow
{
    Q_OBJECT

public:
    UrLevelEditor(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~UrLevelEditor();

private:
    Ui::UrLevelEditorClass ui;
};

#endif // URLEVELEDITOR_H
