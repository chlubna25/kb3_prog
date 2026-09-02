#include <stdio.h>

int main()
{
	int mesic;
	printf("Zadej poradi mesice: ");
	scanf("%d", &mesic);
	
	if (mesic < 1 || mesic > 12) {
		printf("Neplatne poradi mesice");
		return 1;
	}
	
	int dny;
	
	if (mesic == 1 || mesic == 3 || mesic == 5 ||
		mesic == 7 || mesic == 8 || mesic == 10 ||
		mesic == 12) {
		dny = 31;
	} else if (mesic == 2) {
		dny = 28;
	} else {
		dny = 30;
	}
	
	printf("Pocet dnu mesice je %d", dny);
	
	return 0;
}

