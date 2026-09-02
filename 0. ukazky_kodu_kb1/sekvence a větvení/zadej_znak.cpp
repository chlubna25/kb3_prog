#include <stdio.h>

int main() {
	char znak;
	
	printf("Zadej znak: ");
	scanf(" %c", &znak);
	
	printf("%c\n%c\n%c\n", znak, znak, znak);
	
	return 0;
}
