#include <stdio.h>

int suma(int op1, int op2);
int resta(int op1, int op2);
int multiplicacion(int op1, int op2);
float division(int op1, int op2);
void mostrarMenu(void);


int main(){
    int num1, num2, opc;

    printf("ingrese dos numeros. \n");
    printf("ingrese numero 1:");
    scanf("%i",&num1);
    printf("\n");
    printf("ingrese numero 2(!=0):");
    scanf("%i",&num2);
    printf("\n");

    do{
        do{
            mostrarMenu();
            scanf("%i",&opc);
            printf("\n");
        }while(opc>5 && opc<1);

        switch(opc){
            case 1:
                printf("la suma de %i y %i es: %i \n", num1, num2, suma(num1, num2));
                break;
            case 2:
                printf("la resta de %i y %i es: %i \n", num1, num2, resta(num1, num2));
                break;
            case 3:
                printf("la multiplicacion de %i y %i es: %i \n", num1, num2, multiplicacion(num1, num2));
                break;
            case 4:
                if(!(num2==0)){
                    printf("la division de %i y %i es: %.2f \n", num1, num2, division(num1, num2));
                    break;
                } else {
                    printf("no es posible la division. \n");
                    break;
                }
        }
   }while(opc!=5);
   return 0;
}

int suma(int op1, int op2){
    return op1+op2;
}

int resta(int op1, int op2){
    return op1-op2;
}

int multiplicacion(int op1, int op2){
    return op1*op2;
}

float division(int op1, int op2){
    float aux;
    aux=(float)op1/op2;
    return aux;
}

void mostrarMenu(void){
    printf("MENU \n");
    printf("1.suma \n");
    printf("2.resta \n");
    printf("3.multiplicar \n");
    printf("4.dividir \n");
    printf("5.salir \n");
    printf("ingrese su opcion:");
}