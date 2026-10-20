#include <iostream>
#include "Sorcerer.h"
#include "Gojo.h"
#include "Inumaki.h"
#include "Megumi.h" //‚È‚ñ‚ÅŒb‚¾‚¯‰º‚Ì–¼‘O‚È‚ñ‚Å‚·‚©
using namespace std;

int main(void)
{
	Megumi megumi;
	Inumaki inumaki;
	Gojo gojo;

    Sorcerer* sorcerers[3] = { &megumi,&inumaki,&gojo };

    for (int i = 0; i < 3; i++)
    {
        sorcerers[i]->ShowStatus();
        sorcerers[i]->UseTechnique();

        cout << endl;
    }

	return 0;
}