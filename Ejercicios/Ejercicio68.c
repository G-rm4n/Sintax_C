#include <stdio.h>
#include <ctype.h>
#define longitud 11

int main(){
    char cadena[longitud],cant_numeros=0,cant_blancos=0;
    printf("ingrese una cadena de longuitud %i :",longitud-1);
    fgets(cadena,longitud,stdin);
    
    for(int i=0; i<longitud && cadena[i]!='\n';i++){
        if (isspace(cadena[i])) {cant_blancos+=1;}
        else if(isdigit(cadena[i])){cant_numeros+=1;}
    }

    printf("\n LA CANTIDAD DE DIGITOS QUE APARECEN EN \" %s \" es %i Y LA CANTIDAD DE BLANCOS ES %i",cadena,cant_numeros,cant_blancos);
    return 0;
}