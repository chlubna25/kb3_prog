#include <stdio.h>	// načítám knihovnu pro vstup/výstup

int main() {	// začátek vykonávání programu
	int vstup;
	printf("Zadej cislo ke ztrojnasobeni: ");
	scanf_s("%d", &vstup);

	int trojnasobekVstupu = vstup * 3;

	printf("Vystup: %d", trojnasobekVstupu);

	return 0;	// program je úspěšně ukončen
}