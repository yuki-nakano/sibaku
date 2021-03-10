#include "InGameScene.h"

GameScene::GameScene()
{
	gameManager = GameManager::GetInstance();
	inputManager = InputManager::GetInstance();
	soundManager = SoundManager::GetInstance();
	textureManager = TextureManager::GetInstance();

	SceneManager::GetInstance()->SetNextScene(SceneID_InGame);
	soundManager->LoadSceneSound(SceneID_InGame);
	textureManager->LoadSceneTexture(SceneID_InGame);
}

GameScene::~GameScene()
{
	textureManager->DeleteSceneTexture();
	soundManager->DeleteSceneSound(SceneID_InGame);
}

void GameScene::Exec()
{

}

void GameScene::Draw()
{

}

bool GameScene::IsEnd() const
{
	return (finishedScene);
}