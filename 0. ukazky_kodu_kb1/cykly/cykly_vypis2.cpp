#include <stdio.h>

int main() {
	int min, max, del;
	printf("Zadej minimum: ");
	scanf("%d", &min);
	printf("Zadej maximum: ");
	scanf("%d", &max);
	printf("Zadej delitele: ");
	scanf("%d", &del);
	
	for (; min <= max; min++) {
		if (min % del == 0) {
			printf("%d\n", min);
		}
	}
	
	return 0;
}

