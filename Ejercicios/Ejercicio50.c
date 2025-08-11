#include <stdio.h>

int det_num_primo(int num){
    for(int j=2;j<=num;j++){
        if(num%j==0 && j!=num){
            return 0;
        };
    };
    return 1;
}

int main(){
    printf("numeros primos entre 1 y 100: ");

    for(int i=0;i<100;++i){
        if (i>=2 && det_num_primo(i)==1){
            printf("%i ",i);
        };
    };
}