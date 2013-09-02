#include "UrAssetPropertiesView.h"

#include <QToolBar>
#include "widgets/UrBarrelPropertiesWidget.h"
#include "widgets/UrLevelPropertiesWidget.h"
#include "widgets/UrMeepoPropertiesWidget.h"
#include "widgets/UrBlockPropertiesWidget.h"

UrAssetPropertiesView::UrAssetPropertiesView(QToolBar* toolbar, QWidget *parent)
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

UrAssetPropertiesView::~UrAssetPropertiesView()
{

}

void UrAssetPropertiesView::displayLevelProperties( Level* level )
{

}

void UrAssetPropertiesView::displayBarrelProperties( Barrel* barrel )
{

}

void UrAssetPropertiesView::displayBlockProperties( Block* block )
{

}

void UrAssetPropertiesView::displayMeepoProperties( Meepo* meepo )
{

}
