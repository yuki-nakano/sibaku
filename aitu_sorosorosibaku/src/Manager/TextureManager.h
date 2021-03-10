#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include "DxLib.h"
#include "../Definition.h"
#include "../Singleton.h"

enum
{
	//エラー対策
	ktmp_texture,

	//SceneID_InGame

	kTextureMax
};

class TextureManager : public Singleton<TextureManager>
{
public:
	//テクスチャデータの初期化
	//各シーンの最初に呼び出す
	void LoadSceneTexture(SceneID sceneid);

	//テクスチャデータの削除
	//各シーンの最後に呼び出す
	void DeleteSceneTexture();

	//テクスチャデータの取得
	int GetTextureDate(int num);

private:
	int textureDate[kTextureMax];

};

#endif // !TEXTURE_MANAGER_H
