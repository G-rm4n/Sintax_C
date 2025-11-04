#include <stdio.h>
#include <ctype.h>
#define max 200

int verificaDigitos (char *, int *);

int main(){
    char texto[max];
    int cantidadDigitos;
    int cantCaracteres;
    int i=0,c;

    while((c=getchar()) != EOF && i < max){
        texto[i++]=(char)c;
    };

    texto[i]='\0';

    cantCaracteres=verificaDigitos(texto,&cantidadDigitos);

    printf("el texto es: %s \n",texto);
    printf("la cantidad de digitos es: %i \n",cantidadDigitos);
    printf("la cantidad de caracteres es: %i \n",cantCaracteres);

    return 0;
    
}

int verificaDigitos(char *texto,int *cantdigitos){
    int cant_digitos=0;
    int cant_caracteres=0;
    while(*texto != '\0'){
        if(isdigit(*texto))cant_digitos++;
        cant_caracteres++;
        texto++;
    }
    *cantdigitos=cant_digitos;
    return cant_caracteres;
}