#include <stdio.h>

int main() {
	// vypis hodnot z pole
	
	int delka_pole = 10;
	int pole[] = {42, 11, 2, 5, 6, 9, 14, 5, 89, 0};
	
	for (int i = 0; i < delka_pole; i++) {
		printf("%d\n", pole[i]);
	}
	
	return 0;
}
