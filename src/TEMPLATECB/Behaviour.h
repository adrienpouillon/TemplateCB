#pragma once
#include "pch.h"
#include "Component.h"
class Behaviour :public Component
{
protected:

public:

	Behaviour();

	virtual void Awake();

	virtual void Start();

	virtual void Update() = 0;

};

