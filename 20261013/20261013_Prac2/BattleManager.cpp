#include "BattleManager.h"
#include <iostream>

using namespace std;

void BattleManager::StartBattle(Character* player, Character* enemy, Character* boss,Character*archer,Character*wizard)
{
	cout << player->GetName() << endl;
	player->Attack();

	cout << endl;

	cout << enemy->GetName() << endl;
	enemy->Attack();

	cout << endl;

	cout << boss->GetName() << endl;
	boss->Attack();

	cout << endl;

	cout << archer->GetName() << endl;
	archer->Attack();

	cout << endl;

	cout << wizard->GetName() << endl;
	wizard->Attack();

}