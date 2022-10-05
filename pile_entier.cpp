#include "pile_entier.h"
#include <iostream>
using namespace std;

pile_entier::pile_entier(int taille_pile) {
	pile = new int[taille_pile];
	taille = taille_pile;
	this->hauteur = 0;
}

pile_entier::~pile_entier()
{
	delete pile;
}

void pile_entier::empile(int val) {
	if (pleine()!= 1)
	{
		pile[hauteur] = val;
		hauteur++;
	}
}

int pile_entier::pleine()
{
	return hauteur == taille;
}

int pile_entier::vide()
{
	return hauteur == 0;
}

int pile_entier::depile()
{
	 if (vide() != 1)
	{
		int result = pile[--hauteur];
		return result;
	}
	return 0;
}