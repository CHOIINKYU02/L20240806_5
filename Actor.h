#pragma once

class AActor
{
public :
	AActor();
	~AActor();

	void Move();
	
	int Hp;

	int GetHP() 
	{
		return Hp;
	}

	void SetHP(int NewHp)
	{
		if (NewHp >= 0)
		{
			Hp = NewHp;
		}
	}


private:
	

};

