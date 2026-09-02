#include <stdio.h>

int main() {
	float celsius;
	printf("Zadej teplotu ve stupnich celsia: ");
	scanf("%f", &celsius);
	
	float fahrenheit = celsius * 1.8 + 32;
	
	printf("Vysledek je %.2f °F", fahrenheit);
	
	return 0;
}
