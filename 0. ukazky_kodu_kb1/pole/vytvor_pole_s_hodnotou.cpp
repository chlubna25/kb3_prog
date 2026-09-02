#include <stdio.h>

int main() {
	// vlož vstup uživatele do všech prvkù pole
	int pole[10];
	int vstup;
	
	printf("Zadej cislo: ");
	scanf("%d", &vstup);
	
	// vloz do pole
	for (int i = 0; i < 10; i++) {
		pole[i] = vstup;
	}
	
	// vypis pole
	for (int i = 0; i < 10; i++) {
		printf("%d ", pole[i]);
	}
	
	return 0;
}

