#include <stdio.h>
#define tamano 10

int ordenamiento_ascendente(int array[]);
int ordenamiento_descendente(int array[]);

int main(){
    int arr[tamano];
    char sel;

    printf("ingrese %i numeros \n",tamano);
    
    for(int i=0;i<tamano; i++) {
        printf("ingrese un numero para el arreglo:");
        scanf("%d",&arr[i]);
    }
    while (getchar() != '\n'); /*uso esto debido a que en linux no sirve el fflush(stdin)*/

    printf("ingrese el criterio por cual ordenaremos el arreglo (ascendente con >) o (descendente con <):");
    sel=getchar();
    
    
    if (sel == '<') {
        ordenamiento_ascendente(arr);
        printf("\n arreglo ya ordenado \n");
        for(int j=0; j<tamano;j++){
            printf("elemento: %i | posicion: %i \n",arr[j],j);
        }
    }
    else if(sel == '>') {
        ordenamiento_descendente(arr);
        for(int j=0; j<tamano;j++){
            printf("elemento: %i | posicion: %i \n",arr[j],j);
        }
    }
    else printf("opcion invalida");
    return 0;
    
}

int ordenamiento_ascendente(int array[]){
    int aux;
    for (int i=0;i<tamano-1;i++){
        for (int j= (i+1) ;j<tamano; j++){
            if (array[i]>array[j]){
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
        }
    }
    return 0;
}

int ordenamiento_descendente(int array[]){
    int aux;
    for (int i=0;i<=(tamano-2);i++){
        for (int j= (i+1) ;j<=(tamano-1); j++){
            if (array[i]<array[j]){
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
        }
    }
    return 0;
}