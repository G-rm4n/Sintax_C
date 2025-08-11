#include <stdio.h>

int main(){
    for(int i=1;i<=100;i++){
        (i%6==0)?printf("%i \n",i):printf("%i \t",i);
    };
    return 0;
}