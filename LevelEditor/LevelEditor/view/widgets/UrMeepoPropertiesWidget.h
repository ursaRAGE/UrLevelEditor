#ifndef URMEEPOPROPERTIESWIDGET_H
#define URMEEPOPROPERTIESWIDGET_H

#include <QWidget>
#include "ui_UrMeepoPropertiesWidget.h"
class Meepo;

class UrMeepoPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrMeepoPropertiesWidget(QWidget *parent = 0);
    ~UrMeepoPropertiesWidget();

private:
    Ui::UrMeepoPropertiesWidget ui;

    Meepo* displayedMeepo_;
};

#endif // URMEEPOPROPERTIESWIDGET_H
