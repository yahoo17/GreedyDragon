#include "gd_snake.h"
vec2::vec2(int x,int y):x(x),y(y)
{

}
GD_SNAKE::GD_SNAKE()
{

    body.push_back(vec2(3,3));
    body.push_back(vec2(3,3));
    body.push_back(vec2(3,3));

    printSnake();
}
bool GD_SNAKE::printSnake()
{
    std::cout<<u8"第一个点的坐标是"<<body[0].x<<","<<body[0].y<<"\n";
    if(body.size()>=2)
    {
        for(int i=1;i<body.size();i++)
            std::cout<<u8"第"<<i<<u8"个点的坐标是"<<body[i].x<<" "<<body[i].y<<"\n";
    }
    return false;
}
