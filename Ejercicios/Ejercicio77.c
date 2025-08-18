#include <stdio.h>
#include <string.h>
#include <ctype.h>

void mostrar_listado_palabras(char arreglo_palabras[][15],int palabras_halladas);
int obtener_palabras(char caract,char text[],char arreglo_palabras[][15],int fila);
void ordenar_listado_palabras(char arreglo_palabras[][15],int palabras_halladas);
void mostrar_listado_filtrado(char arreglo_palabras[][15],int palabras_halladas,char caracter);

int main(){
    char caracter, texto[50], palabras_encontradas[100][15];
    int cant_palabras;
    printf("ingrese texto: ");
    fgets(texto,sizeof(texto),stdin);
    fflush(stdin);
    cant_palabras=obtener_palabras(caracter,texto,palabras_encontradas,100);
    mostrar_listado_palabras(palabras_encontradas,cant_palabras);
    ordenar_listado_palabras(palabras_encontradas,cant_palabras);
    printf("PALABRAS ORDENADAS ALFABETICAMENTE \n");
    mostrar_listado_palabras(palabras_encontradas,cant_palabras);
    printf("ingrese caracter y le mostrare las palabras que comiencen por el:");
    caracter=getchar();
    mostrar_listado_filtrado(palabras_encontradas,cant_palabras,caracter);
    return 0;


}

int obtener_palabras(char caract,char text[],char arreglo_palabras[][15],int fila){
    int palabra=0,caracter=0;
    char caracter_anterior='\n';
    for(int i=0; i<strlen(text) && text[i]!='\0'; i++){
        if(isalpha(text[i]) && !isspace(text[i])){
            
            arreglo_palabras[palabra][caracter]=text[i];
            caracter++;

        }
        else if((isspace(text[i]) || ispunct(text[i])) && isalpha(caracter_anterior)){
            arreglo_palabras[palabra][caracter]='\0';
            palabra++;
            caracter=0;
        }
        caracter_anterior=text[i];
    }
    return palabra;
}

void mostrar_listado_palabras(char arreglo_palabras[][15],int palabras_halladas){
    for (int i=0;i<palabras_halladas;i++){
        printf("%s \n",arreglo_palabras[i]);
    }
}

void ordenar_listado_palabras(char arreglo_palabras[][15],int palabras_halladas){
    char pal_aux[15];
    for(int i=0; i<(palabras_halladas-1); i++){
        for (int j=i+1; j<palabras_halladas; j++){
            if(strcmp(arreglo_palabras[j],arreglo_palabras[i])>0){
                strcpy(pal_aux,arreglo_palabras[i]);
                strcpy(arreglo_palabras[i],arreglo_palabras[j]);
                strcpy(arreglo_palabras[j],pal_aux);
            }
        }
    }
}

void mostrar_listado_filtrado(char arreglo_palabras[][15],int palabras_halladas,char caracter){
    for (int i=0;i<palabras_halladas;i++){
        if(arreglo_palabras[i][0]==caracter) printf("%s \n",arreglo_palabras[i]);
    }

}