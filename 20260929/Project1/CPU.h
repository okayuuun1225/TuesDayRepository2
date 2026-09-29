#pragma once
class CPU
{
public:
	//インストラクタ
	CPU();

	//選択時
	void ChooseHand();

	//手を取得
	int GetHand();

private:
	//選択した手を記憶
	int hand;

};
