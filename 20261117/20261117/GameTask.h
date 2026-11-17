#pragma once
#include <memory>
#include<vector>
#include "EnemyTask.h"
#include "ConfigTask.h"
class GameTask
{
private:
	//敵を管理する配列
	std::vector<std::shared_ptr<EnemyTask>> enemies;

	//初期化
	void Init();
	//描画
	void Draw()const;
	//攻撃
	void Attack();
	//ゲームクリア判定
	bool IsGameClear() const;

public:
	//実行
	void Run();
};

