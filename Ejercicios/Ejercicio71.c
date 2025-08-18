#include <stdio.h>
#define longitud 10

void cargar_arreglo(int array[]);
void ordenamiento_descendente(int array[]);
void mostrar_arreglo(int array[]);


int main(){
    int vec[longitud];
    cargar_arreglo(vec);
    mostrar_arreglo(vec);
    ordenamiento_descendente(vec);
    printf("\n ARREGLO ORDENADO \n");
    mostrar_arreglo(vec);
    return 0;


}

void cargar_arreglo(int array[]){
    printf("ingrese numeros para cargar el arreglo \n");
    for (int i=0;i<longitud;i++){
        do{
            printf("ingrese numero:");
            scanf("%i",&array[i]);
            printf("\n");} while(array[i]<0);
    }
}

void ordenamiento_descendente(int array[]){
    int aux;
    for (int i=0;i<(longitud-1);i++){
        for (int j= (i+1) ;j<longitud; j++){
            if (array[i]<array[j]){
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
        }
    }
}

void mostrar_arreglo(int array[]){
    for (int i=0; i<longitud; i++){
        printf("elemento: %i | posicion: %i \n", array[i],i);
    }
}