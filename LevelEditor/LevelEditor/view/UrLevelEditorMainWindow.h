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

  private slots:
    void onNewAction();
    void onOpenAction();
    void onSaveAction();
    void onSaveAsAction();

  signals:
    void newPressed();
    void openPressed(const QString& filename);
    void savePressed();
    void saveAsPressed(const QString& filename);

  private:
    Ui::UrLevelEditorClass ui;

    QToolBar* assetToolBar_;
};

#endif // URLEVELEDITOR_H
