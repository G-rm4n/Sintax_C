#include <stdio.h>

int main(){
    printf("Multiplos de 2: \n");

    for(int i=1;i<=100;i++){
        if(i%2==0){
            (i%5==0)?printf("%i \n",i):printf("%i \t",i);
        };    
    };

    printf("\n Multiplos de 3: \n");

    for(int i=1;i<=100;i++){
        if(i%2==0){
            (i%5==0)?printf("%i \n",i):printf("%i \t",i);
        };
    };

    printf("\n Multiplos de 3 y 2: \n");

    for(int i=1;i<=100;i++){
        if((i%2==0) && (i%3==0)){
            (i%5==0)?printf("%i \n",i):printf("%i \t",i);
        };
    };
    return 0;
}