#include <stdio.h>

int main(){ 
    int num1 , num2, aux;
    printf("ingrese el numero 1: ");
    scanf("%d",&num1);
    printf("ingrese el numero 2: ");
    scanf("%d",&num2);
    aux=num1;
    num1=num2;
    num2=aux;
    printf("Ahora el numero 1 es: %d \n",num1);
    printf("Ahora el numero 2 es: %d \n",num2);
}