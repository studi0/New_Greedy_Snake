#ifndef BEAN_H
#define BEAN_H
#include"prop.h"
class Bean{
private:
    int energy = 2;
public:
    int getEnergy();
    void beEaten(Snake); //加一行注释看GITHUB里有变化不
};

#endif // BEAN_H
