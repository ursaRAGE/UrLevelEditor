#include "UrMeepoPropertiesWidget.h"

#include "shared/Meepo.h"

UrMeepoPropertiesWidget::UrMeepoPropertiesWidget(QWidget *parent)
    : QWidget(parent)
    , displayedMeepo_(NULL)
{
  ui.setupUi(this);
  if( NULL == displayedMeepo_ )
    this->setEnabled(false);
}

UrMeepoPropertiesWidget::~UrMeepoPropertiesWidget()
{
}
