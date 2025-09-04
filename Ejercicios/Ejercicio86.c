#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 300

struct alumno{
    char nombre[31];
    char legajo[6];
    float promedio;
};

int main(){
    int alumnos_aprobados=0, alumnos_diciembre=0, alumnos_marzo=0;
    struct alumno alumnos[max];

    for(int i=0; i<max; i++){
        printf("ingrese nombre de alumno: ");
        scanf("%s",alumnos[i].nombre);
        printf("\n");

        printf("ingrese legajo de alumno: ");
        scanf("%s",alumnos[i].legajo);
        printf("\n");

        do{
            printf("ingrese promedio entre 1 y 10:");
            scanf("%f", &alumnos[i].promedio);
            printf("\n");
        }while(alumnos[i].promedio > 10 || alumnos[i].promedio <1);

        if(alumnos[i].promedio>=7){
            alumnos_aprobados++;
        } else if(alumnos[i].promedio<7 && alumnos[i].promedio>=4){
            alumnos_diciembre++;
        } else {
            alumnos_marzo++;
        };
    }

    for(int i=0; i<max-1; i++){
        for(int j=i+1;j<max; j++){
            if(alumnos[i].promedio>alumnos[j].promedio){
                aux=alumnos[i];
                alumnos[i]=alumnos[j];
                alumnos[j]=aux;
            };

        }
    }

    printf("el alumno con el mejor promedio tiene nroLeg: %s | nombre: %s", alumnos[max-1].legajo, alumnos[max-1].nombre);
    printf("la cantidad de alumnos aprobados son: %i", alumnos_aprobados);
    printf("la cantidad de alumnos que rinden en diciembre son: %i", alumnos_diciembre);
    printf("la cantidad de alumnos que rinden en marzo son: %i", alumnos_marzo);

    return 0;

}
