#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *ingresarTexto(void);
float *porcentajeVocalesConsonantes(float *, char*);
int esvocal(char);

int main(){
    char *ap_text;
    float *ap_porcenV;
    float porcenC=0;
    float *ap_porcenC=&porcenC;

    ap_text=ingresarTexto();
    ap_porcenV=porcentajeVocalesConsonantes(ap_porcenC, ap_text);
    printf(" \nel texto: %s , tiene %2.f%% de vocales y de %2.f%% de consonantes.",ap_text,*ap_porcenV,*ap_porcenC);

    return 0;
}

char *ingresarTexto(void){
    static char texto[100];
    int i=0,c;

    while((c=getchar())!=EOF && i<100){
        texto[i]=(char)c;
        i++;
    }

    return texto;
}

int esvocal(char letra){
    if(tolower(letra)=='a' || tolower(letra)=='e' || tolower(letra)=='i' || tolower(letra)=='o' || tolower(letra)=='u'){
        return 1;
    } else {
        return 0;
    };
}

float *porcentajeVocalesConsonantes(float *consonante, char *texto){
    int len=strlen(texto);
    static float vocales=0;
    for(int i=0;i<len;i++){
        if(isalnum(texto[i])){
            if(esvocal(texto[i])){
                vocales++;
            } else{
                (*consonante)++;
            }
        }
    }
    vocales=(float)vocales/len;
    *consonante=(float)*consonante/len;
    vocales=vocales*100;
    *consonante=(*consonante)*100;
    return &vocales;
}