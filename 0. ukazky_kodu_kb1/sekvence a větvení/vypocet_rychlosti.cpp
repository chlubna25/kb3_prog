#include <stdio.h>

int main()  
{
    float draha, cas;

    printf("Zadej dráhu [m]: ");
    scanf_s("%f", &draha);

    printf("Zadej čas [s]:");
    scanf_s("%f", &cas);

    float rychlost = draha / cas;

    printf("Rychlost je %.2f m/s", rychlost);
    return 0;
}
