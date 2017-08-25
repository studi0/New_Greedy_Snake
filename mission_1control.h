#ifndef MISSION_1CONTROL_H
#define MISSION_1CONTROL_H
#include"mission_1service.h"
class Mission_1Control{
private:
   Mission_1Service mission_1Service;
public:

    void keyBoardEvent();
    void snakeMove();//蛇移动
    void check();//检查对象重叠并调用对应对象重叠函数
    void hitTheWall();//撞墙
    void eatProp();//吃到道具
    void setPropNewPosition();//重设道具
    void goIntoTheDoor();//进入通关门
    void doorAppear();//通关门出现，设坐标
    void timerDecrease();//减少计时器时间
    void timerRunoutEvent();//时间耗尽事件
};

#endif // MISSION_1CONTROL_H
