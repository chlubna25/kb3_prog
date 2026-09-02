#include <stdio.h>

int main() {
	int limit;
	printf("Zadej cislo k vypoctu sumy: ");
	scanf("%d", &limit);
	
	int soucet = 0;
	
	for (int i = 1; i <= limit; i++) {
		soucet += i;
	}
	
	printf("Suma je %d", soucet);
	
	return 0;
}
