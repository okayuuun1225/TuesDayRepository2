#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "CPU.h"
#include "Judge.h"

using namespace std;

int main(void)
{
	srand((unsigned int)time(NULL));

	Player player;
	CPU cpu;
	Judge judge;

	player.ChooseHand();
	cpu.ChooseHand();
	judge.ShowResult(&player, &cpu);

	return 0;
}