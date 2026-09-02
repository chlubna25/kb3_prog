#include <stdio.h>

int main() {
	int znamka;
	printf("Zadej znamku:");
	scanf("%d", &znamka);
	
	if (znamka == 1 ) {
		printf("vyborny");
	} else if (znamka == 2) {
		printf("chvalitebny");
	} else if (znamka == 3) {
		printf("dobry");
	} else if (znamka == 4) {
		printf("dostatecny");
	} else if (znamka == 5) {
		printf("nedostatecny :(");
	} else {
		printf("neplatna znamka");
	}
	
	return 0;
}
