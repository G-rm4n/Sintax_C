#include <stdio.h>
#include <string.h>

struct alumno {
    char nombre_alumno[20];
    char turno;
    char nro_legajo[6];
    char domicilio[15];
};

void main(){
    struct alumno alumnos[300];
    strcpy(alumnos[0].nombre_alumno, "Juan Gomez");
    strcpy(alumnos[0].nro_legajo, "12345");
    strcpy(alumnos[0].domicilio, "SanJuan1056");
    alumnos[0].turno='M';

    printf("nombre: %s \n",alumnos[0].nombre_alumno);
    printf("numero de legajo: %s \n", alumnos[0].nro_legajo);
    printf("domicilio: %s \n", alumnos[0].domicilio);
    printf("turno: %c \n", alumnos[0].turno);

}