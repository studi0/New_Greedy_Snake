#include "HelloWorldScene.h"
USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	auto StartView_01 = Sprite::create("StartView_01.png");
	addChild(StartView_01);
	StartView_01->setPosition(visibleSize / 2);

	StartView_01->setScale(0.1);
	auto move1 = ScaleTo::create(1.5, 1);

	StartView_01->runAction(move1);

	scheduleOnce([visibleSize](float f) {
		auto Scene_2 = Scene_02::createScene();
		auto Transition = TransitionSplitRows::create(1.5, Scene_2);
		Director::getInstance()->replaceScene(Transition);
		
	}, 1.5, "Test");

    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
