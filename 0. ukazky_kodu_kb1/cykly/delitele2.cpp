#include <stdio.h>

int main() {
	int cislo, zbytek;
	printf("Zadej cislo: ");
	scanf("%d", &cislo);
	
	printf("Delitele: ");
	for (int i = 1; i <= cislo; i++) {
		zbytek = cislo % i;
		if (zbytek == 0) {
			printf("%d ", i);
		}
	}
	
	return 0;
}
