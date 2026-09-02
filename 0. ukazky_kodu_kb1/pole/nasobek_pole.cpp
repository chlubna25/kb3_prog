#include <stdio.h>

int main() {
	int pole[] = {42, 11, 2, 5, 6, 9, 14, 5, 89, 4};
	
	for (int i = 0; i < 10; i++) {
		if (pole[i] < 0) {
			pole[i] *= -1;
		}	
	}
	
	int nasobek = 1;
	for (int i = 0; i < 10; i++) {
		nasobek *= pole[i];	
	}
	
	printf("Nasobek: %d", nasobek);
	
	return 0;
}
