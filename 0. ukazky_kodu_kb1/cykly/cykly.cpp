#include <stdio.h>

int main() {
	int pocet;
	printf("Zadej pocet cisel k vypsani: ");
	scanf("%d", &pocet);
	
	for (int i = 0; i < pocet*2; i++) {
		if (i % 2 == 0)
			printf("%d\n", i);
	}
	
	return 0;
}

