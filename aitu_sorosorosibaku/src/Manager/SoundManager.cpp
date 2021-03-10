#include "SoundManager.h"

void SoundManager::LoadSceneSound(SceneID sceneid)
{
	switch (sceneid)
	{
		//Sound[ktmp_sound] = LoadSoundMem("ファイルパス");
	case SceneID_InGame:

		break;
	default:
		break;
	}

	for (int i = 0; i < kSoundMax; i++)
	{
		ChangeVolumeSoundMem(255 * VolumePer / 100, soundDate[i]);
	}
}

void SoundManager::DeleteSceneSound(SceneID sceneid)
{
	for (int i = 0; i < kSoundMax; i++)
	{
		DeleteSoundMem(soundDate[i]);
	}
}

int SoundManager::GetSoundData(int num)
{
	return soundDate[num];
}