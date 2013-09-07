// Qt
#include <QMouseEvent>
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
  QPalette pal = this->palette();
  pal.setColor(this->backgroundRole(), Qt::darkGray);
  this->setPalette(pal);
}


UrRenderScene::~UrRenderScene()
{
}

void UrRenderScene::clear()
{
  assets_.clear();
}

void UrRenderScene::setGridEnabled( bool enabled )
{
  gridEnabled_ = enabled;
}

void UrRenderScene::addAsset( UrAsset* asset )
{
  assets_.append(asset);
}

void UrRenderScene::paintEvent( QPaintEvent* event )
{
  Q_UNUSED(event);
  QPainter painter(this);
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

  foreach(UrAsset* asset, assets_)
  {
    painter.drawImage(QPoint(asset->LevelEditorX, asset->LevelEditorY), asset->image());
  }

}

void UrRenderScene::mousePressEvent( QMouseEvent* event )
{
  foreach(UrAsset* asset, assets_)
  {
    if(asset->isPointTouching(event->pos()))
    {
      emit assetClicked( asset->id() );
    }
  }
  lastPoint_ = event->pos();
}

void UrRenderScene::mouseMoveEvent( QMouseEvent* event )
{
  foreach(UrAsset* asset, assets_)
  {
    if(asset->isPointTouching(event->pos()))
    {
      asset->LevelEditorX += (event->pos().x() - lastPoint_.x());
      asset->LevelEditorY += (event->pos().y() - lastPoint_.y());
      update();
    }
  }

  lastPoint_ = event->pos();
}
