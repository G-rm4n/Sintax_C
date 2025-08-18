#include <stdio.h>
#define longitud 10

int main(){
    int A[longitud], B[longitud],C[longitud];
    printf("ingrese las componentes de los vectores A y B de 10 posiciones, cargare C con la menor ingresada entre ambas en cada caso \n");

    for (int i=0 ; i<longitud ; i++){
        printf("\n ingrese la componente %i de A:",i);
        scanf("%i",&A[i]);
        printf("\n ingrese la componente %i de B:",i);
        scanf("%i",&B[i]);
        C[i]=(A[i]<B[i])? A[i] : B[i];
    }
    
    printf("\n");
    for (int j=0; j< longitud; j++){
        printf("Elemento A[%i]=%i | Elemento B[%i]=%i | Elemento C[%i]=%i \n",j,A[j],j,B[j],j,C[j]);
    }
    return 0;
}