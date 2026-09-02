#include <stdio.h>

int main() {
	int vek;
	printf("Zadej vek:");
	scanf("%d", &vek);

	float cena_jizdenky;
	printf("Zadej cenu jizdenky:");
	scanf("%f", &cena_jizdenky);
	
	if (vek < 6) {
		cena_jizdenky = 0;
	} else if (vek <= 15) {
		cena_jizdenky *= 0.5;
	} else if (vek < 26) {
		// studentská sleva 25%
		cena_jizdenky *= 0.75;
	} else if (vek >= 65) {
		cena_jizdenky = 0;
	} else  {
			// tahle vetev je vlastne zbytecna
			// plné jízdné
		cena_jizdenky *= 1;
	}
	
	printf("Finalni cena je %.2f", cena_jizdenky);
	
	return 0;
}
