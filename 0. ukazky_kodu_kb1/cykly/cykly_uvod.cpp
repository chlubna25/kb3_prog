#include <stdio.h>

int main() {
	int limit;
	printf("Zadej vrchni limit vypisu: ");
	scanf("%d", &limit);
	
	for (int i = 0; i < limit; i++) {
		printf("%d\n", i+1);
	}
	
	return 0;
}
