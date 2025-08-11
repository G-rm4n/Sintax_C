#include <stdio.h>

int main() {
    int dia;
    printf("Ingrese un numero y le dire a que numero de la semana corresponde(1-5): ");
    scanf("%i",&dia);
    switch(dia){
        case 1:
        printf("es el dia lunes.");
        break;
        case 2:
        printf("es el dia martes.");
        break;
        case 3:
        printf("es el dia miercoles");
        break;
        case 4:
        printf("es el dia jueves");
        break;
        case 5:
        printf("es el dia viernes");
        break;
    };
    return 0;
}