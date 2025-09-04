#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 300

struct alumno {
    char nombre[20];
    char app[20];
    float altura;
};

int main(){
    struct alumno alumnos[max], aux;
    int cant_alumnos=0;
    char opc='S';

    while(cant_alumnos<max && opc=='S'){
        printf("ingrese nombre de alumno: ");
        scanf("%s",alumnos[cant_alumnos].nombre);
        printf("\n");

        printf("ingrese apellido de alumno: ");
        scanf("%s",alumnos[cant_alumnos].app);
        printf("\n");

        printf("ingrese la altura del alumno: ");
        scanf("%f", &alumnos[cant_alumnos].altura);
        printf("\n");


        printf("hay mas alumnos por ingresar?(S/N):");
        while(getchar()!='\n');

        opc=toupper(getchar());
        cant_alumnos++;
        
    }

    for(int i=0; i<(cant_alumnos-1); i++){
        for(int j=i+1;j<cant_alumnos; j++){
            if(alumnos[i].altura>alumnos[j].altura){
                aux=alumnos[i];
                alumnos[i]=alumnos[j];
                alumnos[j]=aux;
            };

        }
    }

    printf("El alumno mas alto es: %s, %s ; con %f de altura ", alumnos[cant_alumnos-1].app, alumnos[cant_alumnos-1].nombre, alumnos[cant_alumnos-1].altura);
    return 0;

}