#include <stdio.h>

#define max 10

int maximo(int arr[]);
float media(int arr[]);

int main(){
    int arreglo[max];
    float promedio;
    int mayor;

    printf("ingrese 10 numeros en el arreglo.\n");

    for(int i=0;i<max; i++){
        printf("ingrese el numero %i :",i);
        scanf("%i",&arreglo[i]);
        printf("\n");
    }

    printf("los numeros ingresados son: ");
    for(int i=0;i<max; i++){
        printf("%i ",arreglo[i]);
    }

    printf("\n");

    promedio=media(arreglo);
    mayor=maximo(arreglo);

    printf("el mayor de ellos es: %i \n", mayor);
    printf("el promedio es: %.2f \n",promedio);

    return 0;
}

float media(int arr[]){
    float aux=0;
    for(int i=0; i<max; i++){
        aux+=arr[i];
    }
    return (float)aux/max;
}

int maximo(int arr[]){
    int aux=arr[0];

    for(int i=1; i<max ; i++){
        if(arr[i]>aux)aux=arr[i];
    }
    return aux;
}
