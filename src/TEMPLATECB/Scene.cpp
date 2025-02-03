#include "pch.h"
#include "Scene.h"

Scene::Scene()
{

}

void Scene::Init()
{
	mIsFinich = false;
}

//ajouter une scene
Component* Scene::Add(Component* component)
{
	//ajouter une instance a mEntities
	return mComponent.Add();
}

//Mise a jour
void Scene::Update(float timeFrame)
{
	//generer des briques
	//GenerateEnemy(timeFrame);

	for (int i = 0; i < mComponent.GetSize(); ++i)
	{
		//updater
		mComponent[i]->Update(timeFrame);
		//mComponent[i]->IsCollide(this, timeFrame);
	}
	//std::cout<< mDifficulty->GetValue() << std::endl;
	//destruction
	for (auto it = mComponent.GetBegin(); it != mComponent.GetEnd();)
	{
		//int is = (*it)->GetIsDestroyed();
		if (is == ISDESTROYINGAME)
		{
			//mScore->Increase((*it)->GetScore());
			delete* it;
			it = mComponent.erase(it);
		}
		else
		{
			++(it);
		}
	}
	//for (Text* i : mText)
	//{
	//	i->Update();
	//}
}

Component* Scene::operator[](int i)
{
	return mComponent.GetTab[i];
}

int Scene::GenerateRandomNumber(int min, int max)
{
	int range = max - min + 1;
	int value = rand() % range + min;
	return value;
}
