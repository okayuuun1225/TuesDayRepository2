#pragma once
class EnemySample4
{
private:
	int hp;
public:
	int GetHp() { return hp; }
	EnemySample4();
	void TakeDamage(int damage);
	void ShowStatus();
};

