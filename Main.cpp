#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>

//혼자 개발하지 않는다!
// 남을 믿으면 안된다.
//AActor* Actor = new Actor;

//Actor->HP--;

//delete Actor;

using namespace std;
//template
int add(int A, int B)
{
	return A + B;
}
//유산
int main()
{



	for (int i = 0; i < Actors.Size(); ++i)
	{
		APlayer* Player = dynamic_cast<APlayer*>(Actors[i]);
		if (player != nullptr)
		{
			player->Attack();
		}
		Actors[i]->Move();
	}

	//추가할것


	return 0;
}