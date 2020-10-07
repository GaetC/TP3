#include<stdio.h>
#include<stdlib.h>

int main() {
	unsigned int octet;
	printf("Nb d'octets utilisés pour représenter le nombre entier : %d \n", sizeof(octet));
	printf("Nb de bits utilisés pour représenter le nombre entier : %d \n", 8 * sizeof(octet));
	int val = 2868838400;
	int k = 0;
	for (k; k < 10; k++) {
		printf("bit  %d : ", k);
		if ((val >>= 1) & 1) {
			printf("ON \n");
		}
		else {
			printf("OFF \n");
		}
	}
	for (k; k < 32; k++) {
		printf("bit %d : ", k);
		if ((val >>= 1) & 1) {
			printf("ON \n");
		}
		else {
			printf("OFF \n");
		}
	}
	printf("Bye !");
}