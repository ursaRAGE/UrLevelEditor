#ifndef URMEEPOPROPERTIESWIDGET_H
#define URMEEPOPROPERTIESWIDGET_H

#include <QWidget>
#include "ui_oUrMeepoPropertiesWidget.h"

class UrMeepoPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrMeepoPropertiesWidget(QWidget *parent = 0);
    ~UrMeepoPropertiesWidget();

private:
    Ui::UrMeepoPropertiesWidget ui;
};

#endif // URMEEPOPROPERTIESWIDGET_H
