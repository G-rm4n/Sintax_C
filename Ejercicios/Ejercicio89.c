#include <stdio.h>

int cubo(int base);

int main(){
    for(int i=1; i<6 ; i++ ){
        printf("el cubo de %i es: %i \n",i,cubo(i));
    }
    return 0;
}

int cubo(int base){
    return base*base*base;
}