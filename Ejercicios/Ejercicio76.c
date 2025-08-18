#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cantidad_ocurrencias(char pal[],char text[]);

int main(){
    char palabra[12], texto[50];
    int ocurrencias;
    printf("ingrese texto: ");
    fgets(texto,sizeof(texto),stdin);
    fflush(stdin);
    printf("ingrese palabra a buscar en el texto:");
    fgets(palabra,sizeof(palabra),stdin);
    palabra[strcspn(palabra, "\n")]='\0';
    ocurrencias=cantidad_ocurrencias(palabra,texto);
    printf("la palabra ingresada aparece %i veces \n",ocurrencias);
    return 0;


}

int cantidad_ocurrencias(char pal[],char text[]){
    int len_pal=strlen(pal);
    int len_text=strlen(text);
    int ocurrs=0;

    for(int i=0; i<len_text; i++){
        if(pal[0]==text[i]){
            int indice1=1;
            int indice2=i+1;
            while(pal[indice1]==text[indice2]){
                indice1++;
                indice2++;
                if(indice1==len_pal){
                    ocurrs++;
                    break;
                }
            }
        }
    }
    return ocurrs;
}
    