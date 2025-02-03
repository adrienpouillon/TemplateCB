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

	void Init();

	Scene* Update(float timeFrame);

	void SwitchScene();

};

