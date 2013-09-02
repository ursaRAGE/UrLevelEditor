#ifndef URBLOCKPROPERTIESWIDGET_H
#define URBLOCKPROPERTIESWIDGET_H

#include <QWidget>
#include "ui_UrBlockPropertiesWidget.h"

class Block;

class UrBlockPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrBlockPropertiesWidget(QWidget *parent = 0);
    ~UrBlockPropertiesWidget();
    void refreshDisplay();
    void setBlock( Block* block );

private:
    Ui::UrBlockPropertiesWidget ui;

    Block* block_;
};

#endif // URBLOCKPROPERTIESWIDGET_H
