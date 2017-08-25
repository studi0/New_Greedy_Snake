#pragma once
#include"cocos2d.h"
#include<stdio.h>
USING_NS_CC;
class Scene_About :public Layer
{
public:
	Scene_About();
	~Scene_About();
	virtual bool init();
	CREATE_FUNC(Scene_About);
	Scene * createScene();
};

