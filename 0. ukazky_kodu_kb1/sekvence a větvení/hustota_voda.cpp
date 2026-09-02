#include <stdio.h>

int main() {
	float hmotnost, objem;
	
	printf("Zadej hmotnost [kg]: ");
	scanf("%f", &hmotnost);
	
	printf("Zadej objem [m**3]: ");
	scanf("%f", &objem);
	
	float hustota = hmotnost / objem;
	
	if (hustota > 1025) {
		printf("Hustota %.2f kg/m**3 je vetsi nez voda", hustota);
	} else if (hustota == 1025) {
		printf("Hustota %.2f kg/m**3 je stejna nez voda", hustota);
	} else {
		printf("Hustota %.2f kg/m**3 je mensi nez voda", hustota);
	}
	
	return 0;
}
