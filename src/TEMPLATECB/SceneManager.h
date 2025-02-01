#pragma once
#include "pch.h"
#include "Scene.h"
#include "VectorArray.h"

class SceneManager
{
protected:
	VectorArray<Scene*> mCurrentScene;
public:
	SceneManager();

	void SwitchScene();

	void Update();

};

