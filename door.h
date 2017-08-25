#ifndef DOOR_H
#define DOOR_H
class Door{
public:
    Position position;
    bool status;//是否出现

private:
    Position getPosition();
    void setPosition();

    bool hasAppeared();
    void setStatus();
};

#endif // DOOR_H
