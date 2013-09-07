#include "UrLevelPropertiesWidget.h"

#include "shared/Level.h"

UrLevelPropertiesWidget::UrLevelPropertiesWidget(QWidget *parent)
    : QWidget(parent)
    , displayedLevel_(NULL)
{
  ui.setupUi(this);

  if( NULL == displayedLevel_ )
    this->setEnabled(false);
}

UrLevelPropertiesWidget::~UrLevelPropertiesWidget()
{

}
