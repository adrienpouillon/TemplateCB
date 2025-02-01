#pragma once
#include "pch.h"
#include "Component.h"
#include "Transform2D.h"

class Renderer : public Component
{
protected:
	Transform2D* mPosition;
public:

	Renderer();

	virtual void Awake();

	virtual void Start();

	virtual void draw() = 0;
};

