#pragma once
#include "pch.h"
#include "Behaviour.h"
#include <SFML/Graphics.hpp>

class Movable :public Behaviour
{
protected:
	sf::Vector2f mSpeed;
public:

	Movable();

	virtual void Awake();

	virtual void Start();

	virtual void Update();

	void Move();

	InverseSpeed();

	void SetSpeed(sf::Vector2f speed);
	sf::Vector2f GetSpeed();

};

