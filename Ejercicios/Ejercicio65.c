#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fila 100
#define columna 100

void cargar_arreglo(int arreglo[][columna]);
void mostrar_mayor_abs(int arreglo[][columna]);

int main(){
    int arr[fila][columna];
    cargar_arreglo(arr);
    mostrar_mayor_abs(arr);
    return 0;  
}
/*Reemplazar con ingreso manual para obtener resultados aleatorios, asi solo muestra los extremos de la banda*/
void cargar_arreglo(int arreglo[][columna]) {
    srand(time(NULL));
    for(int i=0; i<fila; i++){
        for (int j=0;j<columna; j++){
            arreglo[i][j]=rand()%(2000 + 1)-1000;
        }
    }
}

void mostrar_mayor_abs(int arreglo[][columna]){
    int col=0,fil=0;
    for (int i=0; i<fila; i++){
        for (int j=0; j<columna; j++){
            if(abs(arreglo[i][j])>=abs(arreglo[fil][col])){
                fil=i;
                col=j;
            }
        }
    }
    printf("el mayor elemento es %i y esta en la posicion (%i,%i)",arreglo[fil][col],fil,col);
}