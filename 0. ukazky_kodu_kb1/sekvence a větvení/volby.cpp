#include <stdio.h>

int main() {
	char kandidat1, kandidat2;
	int hlasy1, hlasy2;
	
	printf("Zadej znak pro 1. kandidata: ");
	scanf(" %c", &kandidat1);
	printf("Zadej znak pro 2. kandidata: ");
	scanf(" %c", &kandidat2);
	
	printf("Zadej pocet hlasu pro kandidata %c: ", kandidat1);
	scanf("%d", &hlasy1);
	
	printf("Zadej pocet hlasu pro kandidata %c: ", kandidat2);
	scanf("%d", &hlasy2);
	
	int celkem = hlasy1 + hlasy2;
	float procento1 = (float) hlasy1 / celkem * 100;
	float procento2 = (float) hlasy2 / celkem * 100;

	printf("\n");
	printf("Kandidat %c ziskal %.2f %% hlasu.\n", kandidat1, procento1);
	printf("Kandidat %c ziskal %.2f %% hlasu.\n", kandidat2, procento2);
	
	printf("\n");
	
	if (procento1 > procento2) {
		printf("Vyhral 1. kandidat se znackou %c.", kandidat1);
	} else {
		printf("1. kandidat se znackou %c nevyhral.", kandidat1);
	}
	
	return 0;
}
