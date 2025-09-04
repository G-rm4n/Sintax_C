#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 8

struct alumno{
    char apellido[31];
    char legajo[6];
    int nota;
};

int main(){
    struct alumno alumnos[max], aux;
    char opc='S', aux_legajo[6];
    int i;
    
    for(int i=0; i<max; i++){
        printf("ingrese apellido de alumno: ");
        scanf("%s",alumnos[i].apellido);
        printf("\n");

        printf("ingrese legajo de alumno: ");
        scanf("%s",alumnos[i].legajo);
        printf("\n");

        do{
            printf("ingrese nota entre 1 y 10:");
            scanf("%i", &alumnos[i].nota);
            printf("\n");
        }while(alumnos[i].nota > 10 || alumnos[i].nota <1);
    }

    while(opc=='S'){
        printf("Ingrese el legajo del alumno del cual desea modificar sus datos:");
        scanf("%s", aux_legajo);

        for(i=0; i<max; i++){
            if(strcmp(aux_legajo,alumnos[i].legajo)==0)break;
        }

        if(strcmp(aux_legajo,alumnos[i].legajo)==0){
            printf("ingrese la nueva nota del alumno: ");
            scanf("%i", &alumnos[i].nota);
            printf("\n");
        } else {
            printf("ERROR LEGAJO INVALIDO. \n");
        }

        printf("desea seguir modificando datos?(S/N):");

        while(getchar()!='\n');

        opc=toupper(getchar());
    }

    for(i=0; i<(max-1); i++){
        for(int j=i+1;j<max; j++){
            if(strcmp(alumnos[i].legajo, alumnos[j].legajo)<0){
                aux=alumnos[i];
                alumnos[i]=alumnos[j];
                alumnos[j]=aux;
            };

        }
    }

    for(i=0; i<max; i++){
        printf("apellido: %s | legajo: %s | nota: %i \n",alumnos[i].apellido, alumnos[i].legajo, alumnos[i].nota);
    }
    
    return 0;
}