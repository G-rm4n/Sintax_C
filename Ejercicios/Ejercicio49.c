#include <stdio.h>

int main(){
    int num;
    printf("ingrese un numero y le mostrare los pares desde 1 hasta su numero(0 para salir): ");
    scanf("%i",&num);
    while(num>0){
        for(int i=1;i<=num;i++){
            if (i%2==0){
                (i%5==0)?printf("%i \n",i):printf("%i \t",i);
            }
        };
        printf("\n ingrese un numero y le mostrare los pares desde 1 hasta su numero(0 para salir): ");
        scanf("%i",&num);
    };
    return 0;
}