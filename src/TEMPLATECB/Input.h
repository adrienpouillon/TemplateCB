#pragma once
#include "pch.h"
#include "Component.h"
#include "VectorArray.h"
#include "InputStokage.h"

class Input :public Component
{
protected:
	VectorArray<InputStokage*> mInput;
public:

	Input();

	virtual void Awake();

	virtual void Start();

	virtual void Update();

	bool IsPressedKey();

	bool IspressedMouse();

};

