#include<stdio.h>
#include<stdlib.h>
#define NBMAXNOTES 30
#define carre(x) (x) * (x)

float tableau(int indice){
	float Note;
	char choix;
	do{
		printf("Entrer la note no %d : ", indice + 1);
		scanf_s("%f", &Note);
		if (Note < 0 || Note > 20){
			choix = getchar();
			printf("A/O/N\n");
			choix = getchar();

			if (choix == 'A'){
				printf("Absent\n");
				return(-1);
			}

			else{
				if (choix == 'O'){
					printf("Arret\n");
					return (-2);
				}
				else{
					printf("Reprise des notes\n\n");
					tableau(indice);
				}
			}
		}
	} while (Note < 0 || Note>20);
	return Note;
}

void affichage(float affichage_tableau[NBMAXNOTES]) {
	int i, j;
	float tmp;
	int tmp1;
	int Rang[NBMAXNOTES];
	int numnote[NBMAXNOTES];
	float copietableau[NBMAXNOTES];

	for (i = 0; i < NBMAXNOTES; i++)
	{
		copietableau[i] = affichage_tableau[i];
		numnote[i] = i + 1;
	}

	for (i = 0; i < NBMAXNOTES; i++)
	{
		for (j = 0; j < NBMAXNOTES; j++)
		{
			if (copietableau[i] > copietableau[j])
			{
				tmp = copietableau[i];
				copietableau[i] = copietableau[j];
				copietableau[j] = tmp;

				tmp1 = numnote[i];
				numnote[i] = numnote[j];
				numnote[j] = tmp1;
				j--;
			}
		}
	}
}


int main() {
	float tableau[]= -2;
	float note;
	int compteurdenote = 0;
	int i = 0;
	char c;
	int absent = 0;
	int Nombredenotes = 0;
	float moyenne = 0;
	float plusgrandenote = 0;
	float pluspetitenote = 0;
	float somme = 0;


	for (compteurdenote = 0; compteurdenote <= NBMAXNOTES; compteurdenote++) {
		printf("Entrer la note n° %d \n", compteurdenote);
		scanf_s("%f \n", &note);
		if (note > 0 && note < 20) {
			tableau[compteurdenote] = note;
			Nombredenotes = Nombredenotes + 1;
			if (note > plusgrandenote) {
				plusgrandenote = note;
			}
			if (note < pluspetitenote) {
				pluspetitenote = note;
			}
		}
		float Tableau_note[NBMAXNOTES]; 
		int i;

		for (i = 0; i < NBMAXNOTES; i++)
		{
			Tableau_note[i] = tableau[i];

			if (Tableau_note[i] == -2)
				break;
		}
		somme = somme + note;
	}



	moyenne = (int)somme % Nombredenotes;
	float sommeecart = 0;
	for (int i = 0; i = 100; ++i) {
		sommeecart += (tableau[i] - moyenne) * (tableau[i] - moyenne);
	}
	float ecart = 0;
	ecart = sqrt((1 / (NBMAXNOTES - 1)) * sommeecart);

	printf("L'écart-type vaut %.2f", ecart);
	printf("Le nombre d'absent est de %d, le nombre de notes est de %d, la moyenne des notes est de %d, la note la plus basse est de %f et la plus haute de %f", absent, Nombredenotes, moyenne, pluspetitenote, plusgrandenote);
	for (i = 0; i < NBMAXNOTES; i++) {
		printf("\n %d \n", tableau[i]);
	}
	affichage(tableau);
	return 0;
}