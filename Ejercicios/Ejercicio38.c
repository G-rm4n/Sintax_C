#include <stdio.h>
#define incremento 2


int main() {
    int peso=2;
    int costo=50;
    for(;peso<=20;peso+=incremento){
        printf("costo: %d | peso: %d \n",costo,peso);
        if (peso % 6 == 0) {
            costo += 15;
        };
    };
    return 0;
}