#pragma once
#include"cocos2d.h"
#include"stdio.h"
USING_NS_CC;
class Scene_02:public Layer
{
public:
	Scene_02();
	~Scene_02();
	bool virtual init();
	CREATE_FUNC(Scene_02);
	static Scene* createScene();
};

