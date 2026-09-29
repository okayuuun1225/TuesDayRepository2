#include "Player.h"
#include "Judge.h"
#include <iostream>
using namespace std;

/// <summary>
/// プレイヤーの手を記憶する
/// </summary>

Player::Player()
{
	hand = -1;
}

void Player::ChooseHand()
{
	cout << "じゃんけんの出す手を選んでください。\n0:ぐー、1:ちょき、2:ぱー" << endl;

	while(true)
	{
		cin >> hand;
		if (hand < 0 || hand > 2)
		{
			cout << "入力された数値が間違っています。" << endl;
		}
		else
		{
			break;
		}
	}
	
}

int Player::GetHand()
{
	return hand;
}