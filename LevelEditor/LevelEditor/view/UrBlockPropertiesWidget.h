#ifndef URBLOCKPROPERTIESWIDGET_H
#define URBLOCKPROPERTIESWIDGET_H

#include <QWidget>
#include "ui_UrBlockPraaaaaaopertiesWidget.h"

class UrBlockPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrBlockPropertiesWidget(QWidget *parent = 0);
    ~UrBlockPropertiesWidget();

private:
    Ui::UrBlockPropertiesWidget ui;
};

#endif // URBLOCKPROPERTIESWIDGET_H
