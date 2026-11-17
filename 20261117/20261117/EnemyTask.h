#pragma once
class EnemyTask
{
private:
	//敵のHP
	int hp;
public:
	//コンストラクタ
	EnemyTask();
	//デストラクタ
	~EnemyTask();

	//ダメージ関数
	void Damage(int damage);

	//敵のHPを取得する
	int GetHp()const;

	//敵が生きているかどうかを判定
	bool IsAlive() const;
};

