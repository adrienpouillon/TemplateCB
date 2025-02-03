#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include "VectorArray.h"
#include "Component.h"
class Scene
{
protected:
	VectorArray<Component> mComponent;
public:
	Scene();

	void Init();

	Component* Add(Component* component);

	void Update(float timeFrame);

	virtual void GenerateGame() = 0;

	Component* operator[](int i);

	int GenerateRandomNumber(int min, int max);

};
