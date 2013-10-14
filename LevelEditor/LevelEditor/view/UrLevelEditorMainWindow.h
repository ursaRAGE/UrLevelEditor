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

    QToolBar* assetToolBar();

private:
    Ui::UrLevelEditorClass ui;

    QToolBar* assetToolBar_;

signals:
    void openPressed();

private slots:
    void openSelected();
};

#endif // URLEVELEDITOR_H
