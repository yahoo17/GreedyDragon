#ifndef GD_MAP_H
#define GD_MAP_H
#include <QWidget>
#include <QPen>
#include <QBrush>
#include <QGridLayout>
#include <QPainter>
#include <QPainterPath>
#include <QRect>
#include <QKeyEvent>
#include "GD_snake/gd_snake.h"
//using Qt::Key;
class GD_MAP:public QWidget
{
    Q_OBJECT
public:
    explicit GD_MAP(QWidget *parent=0);
    ~GD_MAP();
public:
    void paintEvent(QPaintEvent *event=nullptr);
    void keyReleaseEvent(QKeyEvent *event=nullptr) ;
private:
    QPainter * painter;
    GD_SNAKE * snake;
    int mapLength;
    int mapWidth;
    //友元函数放哪里都行
    friend class GD_SNAKE;
};






#endif // GD_MAP_H
