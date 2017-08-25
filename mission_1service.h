#ifndef MISSION_1SERVICE_H
#define MISSION_1SERVICE_H
class Service{
private:
    Snake snake;
    Prop prop;
    Hinder hinder;
    Door door;//在初始化时不设定坐标
    Timer timer;

public :
    Service();
    Snake getSnake();
    Prop getProp();
    Hinder getHinder();
    Door getHinder();
    Timer getTimer();
};

#endif // MISSION_1SERVICE_H
