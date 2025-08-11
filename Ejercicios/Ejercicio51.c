#include <stdio.h>

int main(){
    int num,sum=0,prod=1;
    printf("ingrese 10 numeros, si es positivo lo sumare, si son negativos los multiplicare, pero no deben ser cero: \n");
    for(int i=1;i<=10;i++){
        do{
            scanf("%i",&num);
        }while(num==0);

        if (num > 0)
            sum += num;
        else
            prod *= num;
    };
    printf("producto total : %i | suma total: %i",prod,sum);
    return 0;
}