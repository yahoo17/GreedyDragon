#ifndef GD_MAP_H
#define GD_MAP_H
#include <QWidget>
#include <QPen>
#include <QBrush>
#include <QGridLayout>
#include <QPainter>
#include <QPainterPath>
#include <QRect>
class GD_MAP:public QWidget
{
    Q_OBJECT
public:
    GD_MAP(QWidget *parent=0);

    void paintEvent(QPaintEvent *event=nullptr);
private:
    QPainter * painter;
    int mapLength;
    int mapWidth;
};






#endif // GD_MAP_H
