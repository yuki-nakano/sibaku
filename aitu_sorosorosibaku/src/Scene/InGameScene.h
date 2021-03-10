#ifndef IN_GAME_SCENE_H
#define IN_GAME_SCENE_H

#include "DxLib.h"
#include "../Definition.h"
#include "../Manager/GameManager.h"
#include "../Manager/InputManager.h"
#include "../Manager/SceneManager.h"
#include "../Manager/SoundManager.h"
#include "../Manager/TextureManager.h"

#define _USE_MATH_DEFINES
#include <math.h>

class GameScene : public SceneBase
{
public:
	GameScene();
	~GameScene();
public:
	void Exec();
	void Draw();

	virtual bool IsEnd() const; //シーンが終了したかどうかを返す

private:
	GameManager* gameManager = nullptr;
	InputManager* inputManager = nullptr;
	SoundManager* soundManager = nullptr;
	TextureManager* textureManager = nullptr;

	//シーン終了時にtrueにする
	bool finishedScene = false;
};

#endif // !IN_GAME_SCENE_H