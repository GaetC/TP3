#include <stdio.h>
#include <stdlib.h>


main(){
	int w = 192;
	int x = 168;
	int y = 129;
	int z = 10;

	if (w > 1 && w < 127){		//32
		printf("\nadresse IPv4 : %d.%d.%d.%d", &w, &x, &y, &z);
		printf("\nadresse reseau:%d.0.0.0", w);
		//printf("\nadresse masque:255.0.0.0");
		printf("\nadresse broadcast:%d.255.255.255\n", w);
	}

	else if (w > 127 && w < 192){		//24
		printf("\nadresse IPv4 : %d.%d.%d.%d", &w, &x, &y, &z);
		printf("\nadresse reseau:%d.%d.0.0", w, x);
		//printf("\nadresse masque:255.255.0.0");
		printf("\nadresse broadcast:%d.%d.255.255\n", w, x);
	}

	else if (w > 192 && w < 223){		//16
		printf("\nadresse IPv4 : %d.%d.%d.%d", &w, &x, &y, &z);
		printf("\nadresse reseau:%d.%d.%d.0", w, x, y);
		//printf("\nadresse masque:255.255.255.0");
		printf("\nadresse broadcast:%d.%d.%d.255\n" ,w, x, y);
	}
	else {
		printf("Mon programme ne marche tjrs pas à cause du printf %d et %p");
	}
}