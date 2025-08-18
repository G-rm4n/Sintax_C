#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define longitud 11


int main(){
    char cad1[longitud],cad2[longitud];
    printf("ingrese la cadena 1:");
    fgets(cad1,longitud-1,stdin);
    fflush(stdin);
    printf("Ingrese la cadena 2:");
    fgets(cad2,longitud-1,stdin);

    (strcmp(cad1,cad2)>0)? printf("la mayor cadena es la 1") : printf("la mayor cadena es la 2");
    printf("Las cadenas concatenadas quedan %s",strcat(cad1,cad2));
    (strlen(cad1)>strlen(cad2))? printf("la cadena mas larga es la primera") : printf("la cadena mas larga es la segunda");
    printf("la cadena %s invertida se lee %s",cad1,strrev(cad1));
    return 0;
}
