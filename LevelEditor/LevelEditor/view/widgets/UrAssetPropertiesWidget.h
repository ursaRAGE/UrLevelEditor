#ifndef URASSETPROPERTIESVIEW_H
#define URASSETPROPERTIESVIEW_H

#include <QWidget>
#include "ui_UrAssetPropertiesWidget.h"
#include <QVBoxLayout>

class Level;
class Barrel;
class Block;
class Meepo;

class QToolbar;
class UrBarrelPropertiesWidget;
class UrLevelPropertiesWidget;
class UrBlockPropertiesWidget;
class UrMeepoPropertiesWidget;

#include <QToolBar>
class UrAssetPropertiesWidget : public QWidget
{
    Q_OBJECT

public:
    UrAssetPropertiesWidget(QToolBar* toolbar, QWidget *parent = 0);
    ~UrAssetPropertiesWidget();

    void displayLevelProperties(Level* level);
    void displayBarrelProperties(Barrel* barrel);
    void displayBlockProperties(Block* block);
    void displayMeepoProperties(Meepo* meepo);

private:
    Ui::UrAssetPropertiesWidget ui;

    QToolBar* assetToolbar_;

    QVBoxLayout* propertiesWidgetLayout_;

    UrBarrelPropertiesWidget* wBarrelPropertiesWidget_;
    UrLevelPropertiesWidget* wLevelPropertiesWidget_;
    UrBlockPropertiesWidget* wBlockPropertiesWidget_;
    UrMeepoPropertiesWidget* wMeepoPropertiesWidget_;
};

#endif // URASSETPROPERTIESVIEW_H
