#include "Sorcerer.h"
#include <iostream>
using namespace std;

Sorcerer::Sorcerer(int hp, int juryoku) : hp(hp), juryoku(juryoku)
{

}

void Sorcerer::ShowStatus()
{
	cout << "‘Ì—ÍF" << hp << endl;
	cout << "Žô—ÍF" << juryoku << endl;
}
