#pragma once
#include "pch.h"


class Component
{
protected:
	int mId;
public:

	template <typename T>
	Component();

	template <typename T>
	void Awake();

	template <typename T>
	void Start();

	template <typename T>
	T Get();

	template <typename T>
	T GetAll();

	template <typename T>
	void Remove(T Component);

	template <typename T>
	void SetId(T id);

	template <typename T>
	T GetId();
};

