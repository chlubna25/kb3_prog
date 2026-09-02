#include <stdio.h>

int main() {
	int pole[10];
	
	// nacti prvky
	for (int i = 0; i < 10; i++) {
		printf("Nacti %d. prvek pole: ", i+1);
		scanf("%d", &pole[i]);
	}
	
	// vypis prvky
	printf("Prvky v poli: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", pole[i]);
	}
	
	return 0;
}

