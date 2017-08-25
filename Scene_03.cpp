#include "Scene_03.h"



Scene_03::Scene_03()
{
}


Scene_03::~Scene_03()
{
}

bool Scene_03::init() {
	if (!Layer::init()) {
		return false;
	}
	auto StartView_03 = Sprite::create("StartView_03.png");
	auto StartView_04 = Sprite::create("StartView_04.png");

	auto visibleSize = Director::getInstance()->getVisibleSize();

	StartView_03->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2 + 70));
	StartView_04->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2 - 70));
}

Scene *Scene_03::createScene() {
	auto scene = Scene::create();
	auto layer = Scene_03::create();

	scene->addChild(layer);

	return scene;
}
