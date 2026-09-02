#include <stdio.h>

int main() {
	int pole[11];
	int cislo = 0;
	
	// generování sudıch èícel
	for (int i = 0; i < 10; i++) {
		pole[i] = cislo;
		cislo += 2;
	}
	
	// vıpis
	for (int i = 0; i < 10; i++) {
		printf("%d ", pole[i]);
	}
	
	return 0;
}

