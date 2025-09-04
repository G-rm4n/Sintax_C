#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 400

struct registro{
    char cod[6];
    char nombre[21];
    char domicilio[20];
    float saldo;
};

int main(){
    struct registro registros[max], aux;
    char cod_aux[6];
    char opc='S';
    int cant_registros=0, i;

    while(cant_registros<max && opc=='S'){
        printf("ingrese codigo: ");
        scanf("%s",registros[cant_registros].cod);
        printf("\n");


        printf("ingrese nombre: ");
        scanf("%s",registros[cant_registros].nombre);
        printf("\n");

        printf("ingrese domicilio: ");
        scanf("%s",registros[cant_registros].domicilio);
        printf("\n");

        printf("ingrese saldo: ");
        scanf("%f", &registros[cant_registros].saldo);
        printf("\n");


        printf("hay mas registros por ingresar?(S/N):");
        while(getchar()!='\n');

        opc=toupper(getchar());
        cant_registros++;
        
    }

    opc='S';

    while(opc=='S'){
        printf("ingrese un codigo de 5 caracteres:");
        scanf("%s",cod_aux);

        for(i=0; i<cant_registros; i++){
            if(strcmp(registros[i].cod,cod_aux)==0) break;
        }

        if(strcmp(registros[i].cod,cod_aux)==0){
            printf("nombre: %s \n", registros[i].nombre);
            printf("domicilio: %s \n", registros[i].domicilio);
            printf("saldo: %f \n", registros[i].saldo);
        } else {
            printf("codigo invalido \n");
        }

        printf("desea seguir ingresando codigos?(S/N): ");

        while(getchar()!='\n');

        opc=toupper(getchar());
        printf("\n");

    }

    return 0;
}