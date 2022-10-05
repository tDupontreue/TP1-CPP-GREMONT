#include <iostream>

class pile_entier{
	private:
		int *pile, taille, hauteur; // pointeur sur les valeurs de la pile, taille maximum, hauteur actuelle
	public:
		pile_entier(int pile = 20); // constructeur, taille de la pile, 20 par defaut, initialise la hauteur � 0
		~pile_entier(); // destructeur-lib�re la pile
		void empile(int pile); // ajoute un �lement � la pile
		int depile(); // retourne la valeur de l�entier ins�r� en dernier, la hauteur diminue de 1 unit�
		int pleine(); // retourne 1 si la pile est pleine, 0 sinon
		int vide(); // retourne 1 si la pile est vide, 0 sinon
};
