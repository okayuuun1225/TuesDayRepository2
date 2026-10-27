#pragma once
class Enemy
{
private:
	int hp;
public:
	Enemy(int hp);
	~Enemy();

	//const 変更する必要がないもの？
	void ShowHp() const;
};

