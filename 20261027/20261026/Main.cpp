#include <iostream>
#include <vector>
#include <cstdlib>
#include "Enemy.h"
using namespace std;

int main(void)
{
	vector<Enemy> enemies;
	/*enemies.push_back(Enemy(100));
	enemies.push_back(Enemy(200));
	enemies.push_back(Enemy(300));
	enemies.push_back(Enemy(80));
	enemies.push_back(Enemy(250));*/

	const int HP_MIN = 30;
	const int HP_MAX = 100;

	srand((unsigned int)time(NULL));
	int randHp = 0;

	for (int i = 0;i < 3;i++)
	{
		while (true)
		{

			randHp = rand() % HP_MAX + 1;
			if (randHp <= HP_MAX && randHp >= HP_MIN)
			{
				break;
			}
			
		}
		//int randHp = rand() % 70 +31;
		enemies.push_back(Enemy(randHp));
		
	}
	

	//enemies‚Ì’†g‚ª‘S•”‚È‚­‚È‚é‚Ü‚Å
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << "“G‚Ì”‚Í" << enemies.size() << endl;

	return 0;
}