#pragma once
#include "pch.h"
#include "Component.h"

class Health : public Component
{
protected:
	int mCurrentHealth;
	int mMaxHealth;
public:

	Health();

	void TakeDamage();

	void SetMaxHeath(int health);

	void SetCurrentHeath(int health);

	int GetMaxHeath();

	int GetCurrentHeath();
};

