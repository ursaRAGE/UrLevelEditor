#ifndef URBARRELPROPERTIESWIDGET_H
#define URBARRELPROPERTIESWIDGET_H

#include <QWidget>
#include "ui_UrBarrelPropertiesWidget.h"

class UrBarrelPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrBarrelPropertiesWidget(QWidget *parent = 0);
    ~UrBarrelPropertiesWidget();

private:
    Ui::UrBarrelPropertiesWidget ui;
};

#endif // URBARRELPROPERTIESWIDGET_H
