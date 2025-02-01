#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include "VectorArray.h"
#include "Component.h"
class Scene
{
protected:
	VectorArray<Component*> mComponent;
public:
	Scene();

	void Update();

	virtual void GenerateGame() = 0;

};

