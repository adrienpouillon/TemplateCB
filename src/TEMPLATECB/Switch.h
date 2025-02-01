#pragma once
#include "pch.h"
#include "Component.h"

class Switch : public Component
{
protected:

public:

	Switch();

	virtual void Awake();

	virtual void Start();

	void SwitchScene();

};

