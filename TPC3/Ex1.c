#include<stdio.h>
#include<stdlib.h>
#define carre(x) (x) * (x)//Le problème est dans le 5+1 * 5+1, il calcul le carré sans les parenthèeses


int main() {
	int Nb = 5;
	printf("Le carré de Nb vaut : %d \n", carre(Nb)); //Le résultat obtenu est 25
	printf("Le carré de Nb+1 vaut : %d \n", carre(Nb+1)); //Le résultat obtenu est 11
	//Le résultat est désormais bon
}