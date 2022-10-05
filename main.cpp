#define _CRT_SECURE_NO_WARNINGS
#include "pile_entier.h"
#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char ** argv)
{

	int y;
	printf("Entrer votre taille :");
	scanf("%d", &y);
	printf("\n");

	pile_entier *pile = new pile_entier(y);

					// la pile se vide en vérifiant
	
	if (pile->vide() == 1)
	{
		printf("pile vide.\n");
	}
	else if (pile->vide() == 0)
	{
		printf("la pile n'est pas vide.\n");
	}

					// la pile se remplit en vérifiant ou non
		
	if (pile->pleine() == 1)
	{
		printf("pile pleine.\n");
	}
	else if (pile->pleine() == 0)
	{
		printf("la pile n'est pas pleine.\n");
	}

					// la pile se remplit 

	for (int y = 0; pile->pleine() == 0; y++)
	{
		printf("la pile se remplit : %d.\n", y);
		pile->empile(y);
	}

					// la pile se vide
		
	while (pile->vide() != 1)
	{
		int element = pile->depile();
		printf("la pile va se vider : %d.\n", element);
	}
	return 0;
}

