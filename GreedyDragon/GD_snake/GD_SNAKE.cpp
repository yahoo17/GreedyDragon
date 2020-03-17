#include "GD_SNAKE.h"
vec2::vec2(int x,int y):x(x),y(y)
{

}
GD_SNAKE::GD_SNAKE()
{

    body.push_back(vec2(3,3));
    body.push_back(vec2(3,3));
    qDebug()<<(body[1]).x;
    printSnake();
}
bool GD_SNAKE::printSnake()
{
    cout<<u8"第一个点的坐标是"<<body[0].x<<","<<body[0].y<<"\n";

    return false;
}
