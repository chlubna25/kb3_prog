#include <stdio.h>

int main() {
	char znak;
	
	printf("Zadej znak: ");
	scanf(" %c", &znak);
	
	char dalsi_znak = znak + 1;
	
	printf("V ASCII tabulce je za znakem %c znak %c", znak, dalsi_znak);
	
	return 0;
}
