#include<stdio.h>
#include<stdlib.h>
#define carre(x) (x) * (x)//Le probl�me est dans le 5+1 * 5+1, il calcul le carr� sans les parenth�eses


int main() {
	int Nb = 5;
	printf("Le carr� de Nb vaut : %d \n", carre(Nb)); //Le r�sultat obtenu est 25
	printf("Le carr� de Nb+1 vaut : %d \n", carre(Nb+1)); //Le r�sultat obtenu est 11
	//Le r�sultat est d�sormais bon
}