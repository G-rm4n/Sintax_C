#include <stdio.h>

int det_num_primo(int pprim);

int main(){
    int num;
    printf("numeros primos entre 1 y el numero que ingreseses: ");
    scanf("%i",&num);
    printf("\n");

    for(int i=0;i<num;++i){
        if (i>=2 && det_num_primo(i)==1){
            printf("%i ",i);
        };
    };

    printf("\n");
}

int det_num_primo(int pprim){
    for(int j=2;j<=pprim;j++){
        if(pprim%j==0 && j!=pprim){
            return 0;
        };
    };
    return 1;
}