#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct palabras {
    char pal[20];
    int pos;
};

char * carga(int*);//PROGRAMAR
struct palabras * separa(char*,int,int*);//NO PROGRAMAR
int diccionario(char[500][20]);//NO PROGRAMAR
struct palabras * corrector(struct palabras *,int, char dic[500][20],int);//PROGRAMAR

int main(){
    int cant_caracteres=0,cant_palabras=0,cant_diccionario=0;
    char * texto;
    char dicci[500][20];
    struct palabras * lista_palabras;
    struct palabras * palabras_incorrectas;

    texto=carga(&cant_caracteres);
    lista_palabras=separa(texto,cant_caracteres,&cant_palabras);
    cant_diccionario=diccionario(dicci);
    palabras_incorrectas=corrector(lista_palabras,cant_palabras,dicci,cant_diccionario);

    printf("\n Listado de palabras incorrectas:\n");
    for(int i=0; strcmp(palabras_incorrectas[i].pal,"*****")!=0;i++){
        printf("Palabra: %s || posicion: %i \n", palabras_incorrectas[i].pal,palabras_incorrectas[i].pos);
    }

    return 0;

}

char * carga(int*longuitud){
    static char texto[1000];
    char c;
    printf("Ingrese el texto a cargar:");

    while(getchar()!='\n');

    for(*longuitud =0; (c=getchar())!=EOF;(*longuitud)++){
        texto[*longuitud]=(char)c;
    }

    texto[*longuitud]='\0';

    return texto;
}

struct palabras * corrector(struct palabras* listado_original,int cant_palabras_org,char dic[500][20],int cant_palabras_dic){
    int k=0;
    struct palabras listado_errores[500];
    for(int i=0; i<cant_palabras_org;i++){
        for(int j=0; j<=cant_palabras_dic;j++){
            if(strcmp(listado_original[i].pal,dic[j])==0){
                listado_errores[k]=listado_original[i];
                k++;
                break;
            }
        };
    }
    return listado_errores;
}