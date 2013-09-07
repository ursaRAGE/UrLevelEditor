#include "UrAssetPropertiesWidget.h"

#include <QToolBar>
#include "UrBarrelPropertiesWidget.h"
#include "UrLevelPropertiesWidget.h"
#include "UrMeepoPropertiesWidget.h"
#include "UrBlockPropertiesWidget.h"

UrAssetPropertiesWidget::UrAssetPropertiesWidget(QToolBar* toolbar, QWidget *parent)
    : QWidget(parent)
    , assetToolbar_(toolbar)
    , propertiesWidgetLayout_(NULL)
    , wBarrelPropertiesWidget_(NULL)
    , wLevelPropertiesWidget_(NULL)
    , wBlockPropertiesWidget_(NULL)
    , wMeepoPropertiesWidget_(NULL)
{
 ui.setupUi(this);
 propertiesWidgetLayout_ = new QVBoxLayout();
 this->setLayout(propertiesWidgetLayout_);
 assetToolbar_->addWidget(this);

 wBarrelPropertiesWidget_ = new UrBarrelPropertiesWidget();
 wLevelPropertiesWidget_ = new UrLevelPropertiesWidget();
 wBlockPropertiesWidget_ = new UrBlockPropertiesWidget();
 wMeepoPropertiesWidget_ = new UrMeepoPropertiesWidget();

 propertiesWidgetLayout_->addWidget(wBarrelPropertiesWidget_);
 propertiesWidgetLayout_->addWidget(wLevelPropertiesWidget_);
 propertiesWidgetLayout_->addWidget(wBlockPropertiesWidget_);
 propertiesWidgetLayout_->addWidget(wMeepoPropertiesWidget_);

 wLevelPropertiesWidget_->show();
 wBarrelPropertiesWidget_->hide();
 wBlockPropertiesWidget_->hide();
 wMeepoPropertiesWidget_->hide();
}

UrAssetPropertiesWidget::~UrAssetPropertiesWidget()
{

}

void UrAssetPropertiesWidget::displayLevelProperties( Level* level )
{

}

void UrAssetPropertiesWidget::displayBarrelProperties( Barrel* barrel )
{

}

void UrAssetPropertiesWidget::displayBlockProperties( Block* block )
{

}

void UrAssetPropertiesWidget::displayMeepoProperties( Meepo* meepo )
{

}
