#pragma once
#include "pch.h"

template <typename T>
class VectorArray
{
protected:
	//std::Vector<>
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

