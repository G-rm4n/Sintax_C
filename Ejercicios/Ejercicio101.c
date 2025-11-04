#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* carga(int*);
char* cambia_texto(char*,int);

int main(){
    int ap_lon=0;
    char *ap_texto;

    ap_texto=carga(&ap_lon);

    printf("el texto %s cambiado se lee %s",ap_texto,cambia_texto(ap_texto,ap_lon));
    return 0;
}

char* carga(int* ap){
    *ap=0;
    int c;
    static char texto[100];
    while((c=getchar())!=EOF && (*ap)<100){
        texto[*ap]=(char)c;
        (*ap)=*ap+1;
    }
    texto[*ap]='\0';
    return texto;
}

char* cambia_texto(char* texto, int lon){
    int i=0;
    static char textoCambiado[100];
    strcpy(textoCambiado,texto);
    while(textoCambiado[i]!='\0'){
        if(isalnum(textoCambiado[i])){
        textoCambiado[i]='*';
        i++;
        }
    }
    return textoCambiado;
}