#include <stdio.h>
#define longitud 10

void cargar_vector(int array[]);

int main(){
    int vector[longitud];

    cargar_vector(vector);
    
    for(int i=0;i<longitud;i++){
        printf("\n elemento %i cantidad total: %i \n",i,vector[i]);
    }

    return 0;
}

void cargar_vector(int array[]){
    int suma,num=1;
    for (int i=0; i<longitud; i++){
        printf("ingrese numeros para sumar y guardar en la posicion %i del vector de tamaño %i (0 para terminar)",i,longitud);
        suma=0;
        do{
            printf("\n ingrese numero: ");
            scanf("%i",&num);
            suma+=num;
        }while(num!=0);
        array[i]=suma;
    }
}