#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>

template <typename T>
class VectorArray
{
protected:
	std::Vector<T> mVector;
public:
	template <typename T>
	VectorArray();

	template <typename T>
	T Get();

	template <typename T>
	T GetAll();

	template <typename T>
	T Add();

	template <typename T>
	void Remove();
};

