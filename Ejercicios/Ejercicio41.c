#include <stdio.h>

int main() {
    int cant_num, num,mayor_num=0,menor_num=0;
    printf("ingrese la cantidad de numeros que va a ingresar: ");
    scanf("%d",&cant_num);

    for (int i=0;i<cant_num;i++) {

        printf("ingrese su numero: ");
        scanf("%d",&num);
        printf("\n");

        if (num>=mayor_num) {

            mayor_num=num;

        }
        else if(num<=menor_num) {

            menor_num=num;

        };
    };

    float media= (mayor_num + menor_num) /2 ;
    printf("la media de los numeros ingresados es: %f ",media);
    return 0;
}