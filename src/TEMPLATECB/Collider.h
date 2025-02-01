#pragma once
#include "pch.h"
#include "Component.h"
#include "Action.h"

class Collider : public Component
{
protected:
	Action* mAction;
public:

	Collider();

	virtual void Awake();

	virtual void Start();

	bool IsCollide();

};

