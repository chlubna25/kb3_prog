#include <stdio.h>

int main() {
	char znak;
	printf("Zadej znak: ");
	scanf(" %c", &znak);
	
	while (znak != 'a' || znak != 'A') {
		printf("Spatny vstup. ");
		printf("Zadej znak: ");
		scanf(" %c", &znak);
	}
	
	printf("Spravny vstup");
	
	return 0;
}
