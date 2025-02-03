#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include <vector>

template <typename T>
class VectorArray
{
protected:
	std::vector<T*> mVector;
public:
	VectorArray();

	T* Add();

	void Remove();

	T* Get();

	T* GetAll();

	T** GetTab();

	int GetSize();

	T* GetBegin();

	T* GetEnd();
};

template<typename T>
inline VectorArray<T>::VectorArray()
{
}

template<typename T>
inline T VectorArray<T>::Add()
{
	T* varible = new T();
	mVector.push_back(varible);
	return varible;
}

template<typename T>
inline void VectorArray<T>::Remove(std::vector<T> valueErase)
{
	for (int i = 0; i < valueErase.size(); ++i)
	{
		for (auto it = mComponent.GetBegin(); it != mComponent.GetEnd();)
		{
			if (valueErase[i] == (*it))
			{
				delete* it;
				it = mComponent.erase(it);
			}
			else
			{
				++it;
			}
		}
	}
}

template<typename T>
inline T VectorArray<T>::Get()
{
	return T();
}
