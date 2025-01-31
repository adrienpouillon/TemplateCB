#pragma once
#include "pch.h"
#include "SceneManager.h"
class GameManager
{
protected:

public:
	GameManager();

	GameManager GetInstance();

	void Init();

	void Run();

	void GetSize();

};

