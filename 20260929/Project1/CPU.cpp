#include "CPU.h"
#include <cstdlib>

CPU::CPU()
{
	hand = -1;
}

void CPU::ChooseHand()
{
	hand = rand() % 3;
}

int CPU::GetHand()
{
	return hand;
}