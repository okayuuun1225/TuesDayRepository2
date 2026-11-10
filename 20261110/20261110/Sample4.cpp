#include <iostream>
#include "EnemySample4.h"
using namespace std;

int main(void)
{
	/*EnemySample4 enemy1;
	EnemySample4 enemy2;
	EnemySample4 enemy3;

	EnemySample4* target = &enemy1;

	target->TakeDamage(30);

	target = &enemy2;
	target->TakeDamage(50);

	enemy1.ShowStatus();
	enemy2.ShowStatus();
	enemy3.ShowStatus();*/

	//敵を3体生成する。

	//各敵のHPは100。

	//プレイヤーが1～3の数字で攻撃対象を選ぶ。

	//選択した敵に30ダメージを与える。

	//攻撃後、3体のHPを表示する。

	//HPが0になった敵は攻撃対象にできない。


    EnemySample4 enemy1;
    EnemySample4 enemy2;
    EnemySample4 enemy3;

    while (true)
    {
        int targetNum;

        cout << "攻撃対象を1から3の中から選択してください" << endl;
        cin >> targetNum;

        if (targetNum < 1 || targetNum > 3)
        {
            cout << "1から3の中から選択してください" << endl;
            continue;
        }

        // 攻撃する敵を指すためのポインタ
        EnemySample4* target = nullptr;

        switch (targetNum)
        {
        case 1:
            target = &enemy1;
            break;

        case 2:
            target = &enemy2;
            break;

        case 3:
            target = &enemy3;
            break;
        }


        if (target->GetHp() == 0)
        {
            cout << "その敵はすでに倒れています" << endl;
            continue;
        }

        target->TakeDamage(30);

        cout << "敵1 ";
        enemy1.ShowStatus();

        cout << "敵2 ";
        enemy2.ShowStatus();

        cout << "敵3 ";
        enemy3.ShowStatus();

    }

	return 0;
}