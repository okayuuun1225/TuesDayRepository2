#pragma once
class Sorcerer
{
public:
	int hp;
	int juryoku;

	virtual void ShowStatus();

	virtual void UseTechnique() = 0;

	Sorcerer(int hp, int juryoku);
};

