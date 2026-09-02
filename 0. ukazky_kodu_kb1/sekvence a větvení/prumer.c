#include <stdio.h>	

int main() {
	int on, tw, th, fo, fi;
	printf("Zadej 5 cisel pro vypocitani prumeru: ");
		scanf_s("%d", &on), scanf_s("%d", &tw), scanf_s("%d", &th),
		scanf_s("%d", &fo), scanf_s("%d", &fi);
	int average = (on + tw + th + fo + fi) / 5;
	printf("Prumer je %d", average);
	return 0;
}
