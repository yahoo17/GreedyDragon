#ifndef GD_SNAKE_H
#define GD_SNAKE_H
#define MAXSNAKELENGTH 40
#include <QList>
#include <iostream>
#include <QDebug>
#define cout qDebug()
class vec2
{
public:
    vec2(int x,int y);
public:

    int x;
    int y;

};

class  GD_SNAKE
{
public:

    GD_SNAKE();
    ~GD_SNAKE();

private:
    QList<vec2>  body;
    QList<vec2>::iterator head;
public:
    //打印这条蛇的坐标信息
    bool printSnake();


};

#endif // GD_SNAKE_H
