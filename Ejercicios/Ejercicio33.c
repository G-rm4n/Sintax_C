#include <stdio.h>
int main () {
    int Cel;
    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%d", &Cel);
    int Far=32 + (9 * Cel/5);
    printf("La temperatura en grados Farenheit es: %d \n", Far);
    return 0;
}