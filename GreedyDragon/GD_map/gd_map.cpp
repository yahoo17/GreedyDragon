#include "gd_map.h"

GD_MAP::GD_MAP(QWidget * parent):mapLength(25),mapWidth(15)
{

}

void GD_MAP::paintEvent(QPaintEvent* event)
{
    painter=new QPainter(this);
//    QRect rect(50,100,300,200);
//    QPainterPath path ;
//    path.moveTo(10,10);
//    path.lineTo(100,1000);
//    painter->drawPath(path);
    for(int i=0;i<=mapWidth;i++)
    {
        for(int j=0;j<=mapLength;j++)
        {
            painter->drawRect(QRect(30*j,30*i,30,30));
        }
    }
    painter->end();
}


