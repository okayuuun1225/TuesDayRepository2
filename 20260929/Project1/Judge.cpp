#include "Judge.h"
#include <iostream>
using namespace std;

void Judge::ShowResult(Player*player,CPU*cpu)
{
	int playerHand = player->GetHand();
	int cpuHand = cpu->GetHand();

	//手の表示
	cout << "プレイヤー：";
	switch (playerHand)
	{
	case 0:
		cout << "ぐー"<< endl;
		break;
	case 1:
		cout << "ちょき" << endl;
		break;
	case 2:
		cout << "ぱー" << endl;
		break;
	}
	cout << "CPU：";
	switch (cpuHand)
	{
	case 0:
		cout << "ぐー" << endl;
		break;
	case 1:
		cout << "ちょき" << endl;
		break;
	case 2:
		cout << "ぱー" << endl;
		break;
	}

	if (playerHand == cpuHand)
	{
		cout << "引き分けです。" << endl;
	}
	else if (
		(playerHand == 0 && cpuHand == 1) ||
		(playerHand == 1 && cpuHand == 2) ||
		(playerHand == 2 && cpuHand == 0)
		)
	{
		cout << "プレイヤーの勝ちです。" << endl;
	}
	else
	{
		cout << "CPUの勝ちです。" << endl;
	}

}