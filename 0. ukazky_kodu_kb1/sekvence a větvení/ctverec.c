#include <stdio.h>	

int main() {
	int stranaA;
	printf("napis delku strany a: ");
	scanf_s("%d", &stranaA);
	int obsahCtverce = stranaA * stranaA;
	int obvodCtverce = stranaA * 4; 
	printf("Obsah: %d \nObvod: %d", obsahCtverce, obvodCtverce);

	return 0;
}
