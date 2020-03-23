#include "gd_map.h"

GD_MAP::GD_MAP(QWidget * parent):mapLength(25),mapWidth(15)
{
    snake=new GD_SNAKE();
}

GD_MAP::~GD_MAP()
{
    delete snake;
    snake=nullptr;
   painter=nullptr;
}

void GD_MAP::paintEvent(QPaintEvent* event)
{
    painter=new QPainter(this);
//    QRect rect(50,100,300,200);
//    QPainterPath path ;
//    path.moveTo(10,10);
//    path.lineTo(100,1000);
//    painter->drawPath(path);
    /**
      @brief 绘制地图

    */
    for(int i=0;i<=mapWidth;i++)
    {
        for(int j=0;j<=mapLength;j++)
        {
            painter->drawRect(QRect(30*j,30*i,30,30));
        }
    }
    for (auto it =snake->body.begin();it!=snake->body.end();it++)
        painter->drawImage(QRect(it->x*30,it->y*30,30,30),QImage(":/icon/icon/headright.png"));
    painter->end();
}

void GD_MAP::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key())
    {
        switch (event->key())
        {
        case Qt::Key_W :
        {
            break;
        }
        case Qt::Key_A:
        {
            ;
            break;
        }
        case Qt::Key_S:
        {
            ;
            break;
        }
        case Qt::Key_D:
        {
            ;
            break;
        }
        }
    }
}


