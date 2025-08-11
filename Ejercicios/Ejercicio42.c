#include <stdio.h>

int main(){
    int a;
    do{
        printf("ingrese un numero y le mostrare su cuadrado(cero para salir): ");
        scanf("%d",&a);
        printf("cuadrado de %i : %d \n",a,(a*a));
    } while(a!=0);
    return 0;
}