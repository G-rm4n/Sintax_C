#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define max 150

char * varif(char*);

int main(){
    char arr[max];
    int c,i=0;
    char *puntero;

    while ((c=getchar())!=EOF && i<max){
        arr[i]=(char)c;
        i++;
    }

    arr[i]='\0';

    puntero=varif(arr);

    printf("la cadena se encuentra compuesta solo por alfanumericos: %s",puntero);

    return 0;

}

char * varif(char *texto){
    static char res[3];
    int i=0;
    strcpy(res,"SI");

    while(texto[i]!='\0'){
        if(isalnum(texto[i])){
            i++;
        } else{
            strcpy(res,"NO");
            return res;
        }
    }
}