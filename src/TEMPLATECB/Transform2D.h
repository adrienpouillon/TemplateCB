#pragma once
#include "pch.h"
#include "Component.h"
#include "VectorArray.h"

class Transform2D : public Component
{
protected:
	sf::Vector2f position;
public:
	
	Transform2D();

	virtual void Awake();

	virtual void Start();

	void SetPosition(sf::Vector2f position);

	sf::Vector2f GetPosition();
};

