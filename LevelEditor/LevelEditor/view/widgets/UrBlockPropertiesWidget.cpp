#include "UrBlockPropertiesWidget.h"

#include "shared/Block.h"
#include "shared/UrAsset.h"

UrBlockPropertiesWidget::UrBlockPropertiesWidget(QWidget *parent)
    : QWidget(parent)
{
  ui.setupUi(this);
}

UrBlockPropertiesWidget::~UrBlockPropertiesWidget()
{

}

void UrBlockPropertiesWidget::setBlock( Block* block )
{
  block_ = block;
  refreshDisplay();
}

void UrBlockPropertiesWidget::refreshDisplay()
{
  ui.wBlockRowSpinBox->setValue(block_->Row);
  ui.wBlockColumnSpinBox->setValue(block_->Column);
}

