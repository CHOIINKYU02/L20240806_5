#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"
#include <vector>

//ȥ�� �������� �ʴ´�!
// ���� ������ �ȵȴ�.
//AActor* Actor = new Actor;

//Actor->HP--;

//delete Actor;

using namespace std;
//template
int add(int A, int B)
{
	return A + B;
}
//����
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

	//�߰��Ұ�


	return 0;
}