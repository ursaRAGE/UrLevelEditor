// Qt
#include <QPainter>
#include <QPoint>
#include <QPalette>

// ursaRage
#include "UrRenderScene.h"
#include "shared/UrAsset.h"
#include "shared/Barrel.h"
#include "shared/Block.h"

UrRenderScene::UrRenderScene(QWidget *parent)
 : QWidget(parent)
 , gridEnabled_(true)
{
  UrAsset* asset = new Barrel();
  Block* blockAsset = new Block();
  blockAsset->setColumn(3);
  blockAsset->setRow(4);
  assets_.append(asset);
  assets_.append(blockAsset);

  QPalette pal = this->palette();
  pal.setColor(this->backgroundRole(), Qt::blue);
  this->setPalette(pal);
}


UrRenderScene::~UrRenderScene()
{
  foreach(UrAsset* asset, assets_)
  {
    delete asset;
  }
}

void UrRenderScene::setGridEnabled( bool enabled )
{
  gridEnabled_ = enabled;
}

void UrRenderScene::paintEvent( QPaintEvent* event )
{

  Q_UNUSED(event);
  QPainter painter(this);
  //painter.setRenderHint(QPainter::Antialiasing, true);
  foreach(UrAsset* asset, assets_)
  {
    painter.drawImage(QPoint(asset->X, asset->Y), asset->image());
  }

  if( gridEnabled_ )
  {
    for(int lineX = 0; lineX < this->width(); lineX+=48)
    {
      painter.drawLine(QPoint(lineX, 0), QPoint(lineX, this->width()));
    }

    for(int lineY = 0; lineY < this->height(); lineY+=48)
    {
      painter.drawLine(QPoint(0, lineY), QPoint(this->height(), lineY));
    }
  }
}
