#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include "Archer.h"
#include "Wizard.h"
#include "BattleManager.h"

using namespace std;
int main(void)
{
	////コンストラクタ
	//Character character("お");
	//cout << character.GetName() << endl;

	//character.Attack();

	string playerName;
	string enemyName;
	string bossName;
	string archerName;
	string wizardName;

	cout << "名前を入力してください。\nプレイヤー：";
	cin >> playerName;
	cout << "\n敵：";
	cin >> enemyName;
	cout << "\nボス：";
	cin >> bossName;
	cout << "\n弓使い：";
	cin >> archerName;
	cout << "\n魔法使い：";
	cin >> wizardName;
	cout << endl;

	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);
	Archer archer(archerName);
	Wizard wizard(wizardName);

	BattleManager battleManager;

	battleManager.StartBattle(&player, &enemy, &boss,&archer,&wizard);

	/*Player player(playerName);
	cout << "プレイヤー" << player.GetName() << endl;

	player.Attack();


	Enemy enemy(enemyName);
	cout << "敵" << enemy.GetName() << endl;

	enemy.Attack();


	Boss boss(bossName);
	cout << "ボス" << boss.GetName() << endl;

	boss.Attack();*/

	return 0;
}