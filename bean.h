#ifndef BEAN_H
#define BEAN_H
#include"prop.h"
class Bean{
private:
    int energy = 2;
public:
    int getEnergy();
    void beEaten(Snake);
};

#endif // BEAN_H
