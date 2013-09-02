#ifndef URASSETPROPERTIESVIEW_H
#define URASSETPROPERTIESVIEW_H

#include <QWidget>
#include "ui_UrAssetPropertiesView.h"
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
class UrAssetPropertiesView : public QWidget
{
    Q_OBJECT

public:
    UrAssetPropertiesView(QToolBar* toolbar, QWidget *parent = 0);
    ~UrAssetPropertiesView();

    void displayLevelProperties(Level* level);
    void displayBarrelProperties(Barrel* barrel);
    void displayBlockProperties(Block* block);
    void displayMeepoProperties(Meepo* meepo);

private:
    Ui::UrAssetPropertiesView ui;

    QToolBar* assetToolbar_;

    QVBoxLayout* propertiesWidgetLayout_;

    UrBarrelPropertiesWidget* wBarrelPropertiesWidget_;
    UrLevelPropertiesWidget* wLevelPropertiesWidget_;
    UrBlockPropertiesWidget* wBlockPropertiesWidget_;
    UrMeepoPropertiesWidget* wMeepoPropertiesWidget_;
};

#endif // URASSETPROPERTIESVIEW_H
