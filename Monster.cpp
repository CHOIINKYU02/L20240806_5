#include "Monster.h"
#include <iostream>

using namespace std;

AMonster::AMonster()
{
	cout << "몬스터 생성" << endl;
}
AMonster::~AMonster()
{
	cout << "몬스터 소멸" << endl;
}

void AMonster::Move()
{
	cout << "몬스터 이동" << endl;
}