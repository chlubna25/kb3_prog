#include <stdio.h>

int main() {
	float a, b, vysledek;
	char operace;
	printf("zadej prvni cislo: ");
	scanf("%f", &a);
	
	printf("zadej druhe cislo: ");
	scanf("%f", &b);
	
	printf("zadej operaci [+, -, *]: ");
	scanf(" %c", &operace);
	
	switch (operace) {
    	case '+':
        	vysledek = a + b;
        	printf("Vysledek: %.2f\n", vysledek);
        	break;
    	case '-':
        	vysledek = a - b;
        	printf("Vysledek: %.2f\n", vysledek);
        	break;
    	case '*':
        	vysledek = a * b;
        	printf("Vysledek: %.2f\n", vysledek);
        	break;
    	default:
        	printf("Neplatna operace.\n");
	}

	return 0;
}
