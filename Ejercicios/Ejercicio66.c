#include <stdio.h>
#define cant 10

void cargar_arreglo(int arreglo[]);

int main(){
    int arr [cant],sumatoria=0,mayor;
    cargar_arreglo(arr);
    printf("los numeros ingresados son:");
    for (int i=0;i<cant;i++){
        printf("\t %i",arr[i]);
        if(arr[i]>mayor) mayor=arr[i];
        sumatoria+=arr[i];
    }
    printf("\n EL MAYOR DE LOS NUMEROS ES: %i \n",mayor);
    printf("EL PROMEDIO ES: %.2d \n",(sumatoria/cant));
    return 0;
    
}

void cargar_arreglo(int arreglo[]){
    printf("ingrese numeros para cargar el arreglo \n");
    for (int i=0;i<cant;i++){
        printf("ingrese numero:");
        scanf("%i",&arreglo[i]);
        printf("\n");
    }
}