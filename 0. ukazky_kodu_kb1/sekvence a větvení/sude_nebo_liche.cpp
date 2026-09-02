#include <stdio.h>

int main()
{
	int cislo;
	printf("Zadej cislo");
	scanf("%d", &cislo);
	
	// int zbytek = cislo % 2;
	
	if (cislo % 2 == 0) {
		printf("Cislo je sude");
	} else {
		printf("Cislo je liche");
	}
	
	return 0;
}
