#include "Scene_02.h"



Scene_02::Scene_02()
{
}


Scene_02::~Scene_02()
{
}

bool Scene_02::init() {
	if (!Layer::init()) {
		return false;
	}
	auto logo = Sprite::create("StartView_02.png");
	addChild(logo);

	logo->setPosition(Director::getInstance()->getVisibleSize() / 2);
	return true;
}

Scene * Scene_02::createScene() {

}