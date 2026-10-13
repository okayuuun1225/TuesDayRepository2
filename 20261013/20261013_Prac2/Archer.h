#pragma once
#include "Character.h"
using namespace std;
class Archer :public Character
{
public:
	Archer(string name);
	void Attack() override;
};


