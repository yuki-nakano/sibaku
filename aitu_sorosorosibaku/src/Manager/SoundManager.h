#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include "DxLib.h"
#include "../Definition.h"
#include "../Singleton.h"

enum
{
	//エラー対策
	ktmp_sound,

	//SceneID_InGame

	kSoundMax,
};

class SoundManager : public Singleton<SoundManager>
{
public:
	//サウンドデータの初期化
	//各シーンの最初に呼び出す
	void LoadSceneSound(SceneID sceneid);

	//サウンドデータの削除
	//各シーンの最後に呼び出す
	void DeleteSceneSound(SceneID sceneid);

	//サウンドデータの取得
	int GetSoundData(int num);

private:
	int soundDate[kSoundMax];
	int VolumePer = 50;
};

#endif // !SOUNDMANAGER_H
