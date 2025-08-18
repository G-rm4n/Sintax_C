#include <stdio.h>
#define cant 26

int main(){
    char abecedario[cant];
    for (int i=97; i<(97+cant);i++){
        abecedario[i]=i;
        printf("%c",abecedario[i]);
    }
    return 0;
}