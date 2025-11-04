#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct pal {
    char palabra[25];
    char tipo[20];
};

int carga_reserva(char [40][15]);//PROGRAMAR
char * carga_texto(void);//PROGRAMAR
struct pal * seapara(char*,int*);//NO PROGRAMAR
struct pal * depura(struct pal *,int);//NO PROGRAMAR
void clasifica(struct pal *,char pal_res[][15],int);//PROGRAMAR

int main(){
    char arreglo_reserva[40][15];
    char * texto;
    struct pal * palabras, * palabras_depuradas;
    int cant_reserva,cant_palabras;
    cant_reserva=carga_reserva(arreglo_reserva);
    texto=carga_texto();
    palabras=seapara(texto,cant_palabras);
    palabras_depuradas=depura(palabras,cant_palabras);
    clasifica(palabras_depuradas,arreglo_reserva,cant_reserva);

    for (int i=0; i<cant_palabras;i++){
        printf("palabra: %s || tipo: %s \n",palabras_depuradas[i].palabra, palabras_depuradas[i].tipo);
    }
    printf("esas son todas las palabras.");
    return 0;
};

int carga_reserva(char arreglo_reservadas[40][15]){
    char opc='S';
    int i;
    printf("ingrese las palabras reservadas.\n");
    for (i=0; i<40 || opc=='S';i++){
        printf("palabra reservada:");
        scanf("%s",arreglo_reservadas[i]);
        printf("Hay mas palabras reservadas?(S/N)");
        opc=getchar();
    };
    return i;
};

char * carga_texto(){
    static char texto[1000], c;
    printf("ingrese el texto:");
    while(getchar()=='\n');

    for(int i=0; i<1000 || (c=getchar())!=EOF;i++){
        texto[i]=(char)c;
    }
    return texto;
};

void clasifica(struct pal *palabras,char pal_res[][15],int cant_res){
    int i=0;
    while(strcmp(palabras[i].palabra,"*****")!=0){
        for (int j=0; j<cant_res; j++){
            if(strcmp(palabras[i].palabra,pal_res[j])==0){
                strcpy(palabras[i].tipo,"Reservada");
                i++;
                break;
            }
        }

        if(isalpha(palabras[i].palabra[0]) && strlen(palabras[i].palabra)<=8){
            strcpy(palabras[i].tipo,"Identificador");
        } else {
            strcpy(palabras[i].tipo,"Otro");
        }
        i++;
    }
}
