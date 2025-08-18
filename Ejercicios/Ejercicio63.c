#include <stdio.h>
#define cant 1000


int numeros_mayores(int array[], int numero);

int main(){
    int arr[cant], num, sum;
    printf("ingrese %i numeros \n",cant);
    
    for(int i=0;i<=(cant-1); i++) {
        printf("ingrese un numero para el arreglo:");
        scanf("%i",&arr[i]);
        printf("\n");
    }

    printf("ingrese un numero a su eleccion: ");
    scanf("%i",&num);
    printf("\n");

    sum = numeros_mayores(arr,num);
    printf("LA SUMATORIA DE LOS NÚMEROS MAYORES QUE %i ES %i.",num,sum);
    return 0;   


}

int numeros_mayores(int array[], int numero) {
    int sum=0;
    printf("Los numeros del arreglo mayores a %i son: \n",numero);
    for(int i=0; i<=(cant-1); i++){
        (array[i] > numero)?  (sum += array[i],printf("%i \n",array[i])) : (array[i]>=numero && printf("%i \n",array[i]));
    };
    return sum;
}