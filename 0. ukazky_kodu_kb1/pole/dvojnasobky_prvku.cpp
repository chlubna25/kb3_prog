#include <stdio.h>

int main() {
	// vypis dvojnasobku z pole
	
	int pole[] = {42, 11, 2, 5, 6, 9, 14, 5, 89, 0};
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", 2*pole[i]);
	}
	
	return 0;
}
