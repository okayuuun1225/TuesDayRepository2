#include "EnemyTask.h"
#include "ConfigTask.h"

//敵のHPを設定
EnemyTask::EnemyTask() :hp(ConfigTask::ENEMY_HP) {}
EnemyTask::~EnemyTask(){}

//ダメージ関数
void EnemyTask::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

//敵のHPを取得する
int EnemyTask::GetHp() const
{
	return hp;
}

bool EnemyTask::IsAlive() const
{
	return hp > 0;
}