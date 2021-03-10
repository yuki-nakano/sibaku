#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "../Definition.h"
#include "../Singleton.h"
#include "../Scene/SceneBase.h"
#include "../Scene/InGameScene.h"

class SceneManager : public Singleton<SceneManager>
{
public:
	SceneManager();
	~SceneManager();

public:
	void Exec();
	void Draw();

	//次のシーンのセット
	void SetNextScene(SceneID next_);

private:
	//次のシーンのインスタンスの作成
	class SceneBase* create_NextScene();

private:
	class SceneBase* m_pScene;
	static SceneID m_NextSceneID;

};

#endif // !SCENEMANAGER_H
