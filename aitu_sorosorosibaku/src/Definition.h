#ifndef DEFINITION_H
#define DEFINITION_H

//画面サイズ
const int Widht = 1280;
const int Height = 720;

struct Vec3
{
	Vec3() :
		X(0.0f),
		Y(0.0f),
		Z(0.0f)
	{
	}

	Vec3(float x, float y, float z) :
		X(x),
		Y(y),
		Z(z)
	{
	}

	float X;
	float Y;
	float Z;
};

enum SceneID
{
	//ゲームシーン
	SceneID_InGame,
	
	SceneID_Max,
	SceneID_Invalid,	//無効値
};

#endif // !DEFINITION_H
