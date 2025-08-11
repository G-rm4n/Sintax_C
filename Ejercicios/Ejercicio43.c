#include <stdio.h>

int main(){
    int cant_may_cero=0, cant_cero=0, cant_men_cero=0, num;
    for (int i =0;i<10;i++) {
        printf("ingrese numero: ");
        scanf("%i",&num);
        printf("\n");
        if(num>0){
            cant_may_cero++;
        } else if (num==0) {
            cant_cero++;
        } else if (num<0) {
            cant_men_cero++;
        };
    };

    printf("numeros mayores que cero: %i | iguales a cero: %i | menores que cero: %i ",cant_may_cero,cant_cero,cant_men_cero);
    return 0;
}