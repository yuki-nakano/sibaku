#include "TextureManager.h"

void TextureManager::LoadSceneTexture(SceneID sceneid)
{
	switch (sceneid)
	{
		//textureDate[ktmp_texture] = LoadGraph("ファイルパス");
	case SceneID_InGame:
		
		break;
	default:
		break;
	}
}

void TextureManager::DeleteSceneTexture()
{
	for (int i = 0; i < kTextureMax; i++)
	{
		DeleteGraph(textureDate[i]);
	}
}

int TextureManager::GetTextureDate(int num)
{
	return textureDate[num];
}
