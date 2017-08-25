#pragma once
#include"cocos2d.h"
#include"stdio.h"
USING_NS_CC;
class Scene_03:public Layer
{
public:
	Scene_03();
	~Scene_03();
	virtual bool init();
	CREATE_FUNC(Scene_03);
	static Scene* createScene();
};

