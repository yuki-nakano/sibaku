#include "DxLib.h"
#include "Definition.h"
#include "Manager/GameManager.h"
#include "Manager/InputManager.h"
#include "Manager/SceneManager.h"
#include "Manager/SoundManager.h"
#include "Manager/TextureManager.h"

int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow)
{
	SetOutApplicationLogValidFlag(false);
	ChangeWindowMode(true);
	SetGraphMode(Widht, Height, 16);
	SetBackgroundColor(255, 255, 255);
	SetMainWindowText("�����A���낻�뎀��");

	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}

	//�`���𗠂̉�ʂɐݒ�
	SetDrawScreen(DX_SCREEN_BACK);

	//�Ǘ��N���X�̍쐬
	InputManager::CreateInstance();
	InputManager* inputManager = InputManager::GetInstance();
	SoundManager::CreateInstance();
	TextureManager::CreateInstance();
	GameManager::CreateInstance();
	SceneManager::CreateInstance();
	SceneManager* sceneManager = SceneManager::GetInstance();

	while (true)
	{
		// ���b�Z�[�W���[�v�ɑ��鏈��������
		if (ProcessMessage() == -1 ||
			inputManager->IsKeyPushed(KEY_INPUT_ESCAPE))
		{
			break;        // �G���[���N�����烋�[�v�𔲂���
		}
		else
		{
			//�t���[�����ƂɃL�[�̏�ԍX�V
			inputManager->UpdateKeyStatus();

			ClearDrawScreen();
			clsDx();

			//�V�[������
			sceneManager->Exec();

			//�V�[���`��
			sceneManager->Draw();

			ScreenFlip();
		}
	}
	
	sceneManager = nullptr;
	inputManager = nullptr;
	SceneManager::DeleteInstance();
	GameManager::DeleteInstance();
	TextureManager::DeleteInstance();
	SoundManager::DeleteInstance();
	InputManager::DeleteInstance();

	DxLib_End();	// �c�w���C�u�����g�p�̏I������
	return 0;		// �\�t�g�̏I�� 
}
