#pragma once
#include "pch.h"
#include "Behaviour.h"

class Action : public Behaviour
{
protected:

public:

	Action();

	virtual void Awake();

	virtual void Start();

	virtual void Update() = 0;

};

