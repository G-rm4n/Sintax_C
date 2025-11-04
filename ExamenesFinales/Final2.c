#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct tickCol {
    char incid[200];
    char modulo[15];
};

void carga_ticket(struct tickCol *, int *);//PROGRAMAR
char *identifica_modulo(char *);//NO PROGRAMAR
char *mayor_modulo(struct tickCol *,int, int *);//PROGRAMAR

int main(){
    struct tickCol lista[200];
    char opc='S';
    char * mod;
    int cant=0,ocurrencias=0;
    do{
        carga_ticket(lista,&cant);
        printf("\nhay mas mails por cargar?(S/N):");
        opc=(char)getchar();
    }while(opc=='S' && cant<200);

    printf("\nLista de mails cargardos:\n");
    for(int i=0; i<cant; i++){
        printf("cuerpo: %s || modulo: %s",lista[i].incid,lista[i].modulo);
    }

    mod=mayor_modulo(lista,cant,&ocurrencias);

    printf("\n El modulo que mas se repite es: \"%s\" con %i ocurrencias \n");
    return 0;
};

char *mayor_modulo(struct tickCol * lista_p,int cantidad, int * ocurrencias){
    int cant_paq=0,cant_hot=0,cant_vue=0;
    char modulo[15];
    char * res;
    for (int i=0; i<cantidad;i++){
        res=identifica_modulo(lista_p[i].incid);
        if(strcmp(res, "***")!=0){
            if(strcmp(res,"HOTEL")==0){
                cant_hot++;
            } else if(strcmp(res, "PAQUETE")==0){
                cant_paq++;
            } else{
                cant_vue++;
            }
        } else{
            continue;
        }
    }
    
    if(cant_hot>=cant_paq && cant_hot>=cant_vue){
        *ocurrencias=cant_hot;
        strcpy(modulo,"HOTEL");
    } else if(cant_paq>=cant_hot && cant_paq>=cant_vue){
        *ocurrencias=cant_paq;
        strcpy(modulo,"PAQUETE");
    } else if(cant_vue>=cant_hot && cant_vue>=cant_paq){
        *ocurrencias=cant_vue;
        strcpy(modulo,"VUELO");
    }

    return modulo;


}