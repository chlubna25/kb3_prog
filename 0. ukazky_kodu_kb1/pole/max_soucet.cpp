#include <stdio.h>

int main() {
	int pole[10];
	int soucet, max_soucet;
	
	// nacti prvky
	for (int i = 0; i < 10; i++) {
		printf("Nacti %d. prvek pole: ", i+1);
		scanf("%d", &pole[i]);
	}
	
	max_soucet = pole[0] + pole[1];
	
	for (int i = 0; i < 9; i++) {
		soucet = pole[i] + pole[i+1];
		if (soucet > max_soucet) {
			max_soucet = soucet;
		}
	}
	
	printf("Maximalni soucet: %d", max_soucet);
	
	return 0;
}

