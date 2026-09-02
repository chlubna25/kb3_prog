#include <stdio.h>

int main() {
	char znak1, znak2;
	printf("Zadej znak: ");
	scanf(" %c", &znak1);
	
	printf("Zadej znak: ");
	scanf(" %c", &znak2);
	
	printf("Tvoje zadane znaky jsou: %c %c", znak1, znak2);
	
	return 0;
}
