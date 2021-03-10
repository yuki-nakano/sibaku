#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include "DxLib.h"
#include "../Definition.h"
#include "../Singleton.h"

enum
{
	//�G���[�΍�
	ktmp_texture,

	//SceneID_InGame

	kTextureMax
};

class TextureManager : public Singleton<TextureManager>
{
public:
	//�e�N�X�`���f�[�^�̏�����
	//�e�V�[���̍ŏ��ɌĂяo��
	void LoadSceneTexture(SceneID sceneid);

	//�e�N�X�`���f�[�^�̍폜
	//�e�V�[���̍Ō�ɌĂяo��
	void DeleteSceneTexture();

	//�e�N�X�`���f�[�^�̎擾
	int GetTextureDate(int num);

private:
	int textureDate[kTextureMax];

};

#endif // !TEXTURE_MANAGER_H
