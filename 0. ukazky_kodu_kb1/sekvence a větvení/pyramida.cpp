#include <stdio.h>

int main() {
	char znak;
	printf("Zadej znak: ");
	scanf(" %c", &znak);
	
	printf("  %c\n", znak);
	printf(" %c%c%c\n", znak, znak, znak);
	printf("%c%c%c%c%c\n", znak, znak, znak, znak, znak);
	
	return 0;
}
