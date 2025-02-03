#pragma once
#include "pch.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Scene.h"

template <typename T>
class VectorArray
{
protected:
	std::vector<T*> mVector;
public:
	VectorArray();

	//ajoute une varable au tableau
	T* Add();

	//Supprime tout les varibles commune entre le tableau founie et le tableau stoker
	void Remove(std::vector<T> valueErase);

	//donne la premiere entitee du type A
	template <typename A>
	A* Get();

	//donne tout les entitee du type A
	template <typename A>
	std::vector<A*> GetAll();

	//supprime la varible dans le tableau stoker
	T* Suppr(auto* it);

	//supprime
	void Delete(auto* it);

	//ecrase une varible du tableau
	 T* Erase(auto* it);

	//donne le tableau stoker
	std::vector<T*> GetTab();

	//donne la taille du tableau
	int GetSize();

	//donne le debut du tableau
	T* GetBegin();

	//donne la fin du tableau
	T* GetEnd();

	//convertie un type 
	template <typename A, typename B>
	B GetTypeConvert(A TypeA);

	template <typename A, typename B>
	B GetAllTypeConvert(std::vector<A> convertValue);

};

template<typename T>
inline VectorArray<T>::VectorArray()
{
}

template<typename T>
inline T* VectorArray<T>::Add()
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
		for (auto it = mVector.GetBegin(); it != mVector.GetEnd();)
		{
			if (valueErase[i] == (*it))
			{
				Suppr(&it);
			}
			else
			{
				++it;
			}
		}
	}
}

template<typename T, typename A>
inline A* VectorArray<T>::Get()
{
	for (int i = 0; i < mVector.size(); ++i)
	{
		if (A* entity = dynamic_cast<A*>(mVector))
		{
			return entity;
		}
	}
	return nullptr;
}

template<typename T, typename A>
inline std::vector<A*> VectorArray<T>::GetAll()
{
	std::vector<A*> allA;
	for (int i = 0; i < mVector.size(); ++i)
	{
		if (A* entity = dynamic_cast<A*>(mVector[i]))
		{
			allA.push_back(entity);
		}
	}
	return allA;
}

template<typename T>
inline T* VectorArray<T>::Suppr(auto* it)
{
	Delete(it);
	return Erase(it);
}

template<typename T>
inline void  VectorArray<T>::Delete(auto* it)
{
	delete* (*it);
}

template<typename T>
inline T* VectorArray<T>::Erase(auto* it)
{
	return mVector.erase(*it);
}


template<typename T>
inline std::vector<T*> VectorArray<T>::GetTab()
{
	return mVector();
}

template<typename T>
inline int VectorArray<T>::GetSize()
{
	return mVector.size;
}

template<typename T>
inline T* VectorArray<T>::GetBegin()
{
	return mVector.begin;
}

template<typename T>
inline T* VectorArray<T>::GetEnd()
{
	return mVector.end;
}

template<typename T, typename A, typename B>
inline B VectorArray<T>::GetTypeConvert(A TypeA)
{
	if (B entityConvert = dynamic_cast<B>(TypeA))
	{
		return entityConvert;
	}
	return nullptr;
}

template<typename T, typename A, typename B>
inline B VectorArray<T>::GetAllTypeConvert(std::vector<A> convertValue)
{
	std::vector<B*> allB;
	for (int i = 0; i < convertValue.size(); ++i)
	{
		if (B* entity = dynamic_cast<B*>(convertValue[i]))
		{
			allB.push_back(entity);
		}
	}
	return allB;
}


