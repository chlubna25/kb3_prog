#include <stdio.h>

int main() {
	float hodiny;
	char jednotka;
	printf("Zadej pocet hodin: ");
	scanf("%f", &hodiny);
	
	printf("Zadej vyslednou jednotku ([d]ny, [m]esice, [r]oky):");
	scanf(" %c", &jednotka);
	
	float novy_cas;
	
	if (jednotka == 'd') {
		novy_cas = hodiny / 24;
	} else if (jednotka == 'm') {
		novy_cas = hodiny / 24 / 30;
	} else if (jednotka == 'r') {
		novy_cas = hodiny / 24 / 365;
	} else {
		printf("Neplatná jednotka!");
		return 1;
	}
	
	printf("Prevedeny cas na %c je %.2f", jednotka, novy_cas);
	
	return 0;
}
