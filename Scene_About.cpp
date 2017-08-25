#include "Scene_About.h"



Scene_About::Scene_About()
{
}


Scene_About::~Scene_About()
{
}

bool Scene_About::init() {
	if (!Layer::init()) {
		return false;
	}

}

Scene *Scene_About::createScene() {
	auto Scene = Scene::create();
	auto layer = Scene_About::create();
	Scene->addChild(layer);
	return Scene;
}
