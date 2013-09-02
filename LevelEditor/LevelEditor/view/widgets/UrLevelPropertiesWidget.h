#ifndef URLEVELPROPERTIESWIDGET_H
#define URLEVELPROPERTIESWIDGET_H

#include <QWidget>
#include "ui_UrLevelPropertiesWidget.h"

class UrLevelPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrLevelPropertiesWidget(QWidget *parent = 0);
    ~UrLevelPropertiesWidget();

private:
    Ui::UrLevelPropertiesWidget ui;
};

#endif // URLEVELPROPERTIESWIDGET_H
