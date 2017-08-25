#ifndef MISSION_1SCENE_H
#define MISSION_1SCENE_H
#include"mission_1control.h"
class Mission_1Scene{
public:
    CCScene scene;
    CCSprite snakeUi;
    CCSprite propUi;
    CCSprite hinderUi;
    CCSprite doorUi;
    CCSprite TimerUi;
    Mission_1Control control;

    void init();//初始化
    void timeRunoutEvent();//时间耗尽事件
    void timeDeacreseEvent();//减少计时器时间
    void keyBoardEvent();//按键
    void snakeMoveEvent();//移动事件，每隔一小段时间移动一下
    void snakeDeathEvent();//监听蛇的死亡状态
    void snakeEnergyEvent();//监听蛇的能量
    void showSnakeUi();
    void showPropUi();
    void showhinderUi();
    void showTimerUi();
    void showDoorUi();
};

#endif // MISSION_1SCENE_H
