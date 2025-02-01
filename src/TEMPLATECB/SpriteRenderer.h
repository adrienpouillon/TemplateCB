#pragma once
#include "pch.h"
#include "Renderer.h"
#include <SFML/Graphics.hpp>

class SpriteRenderer : public Renderer
{
protected:
	sf::Sprite;
public:

	SpriteRenderer();

	virtual void Awake();

	virtual void Start();

	void draw();

};

