/*- Decir cuál será la salida:
#include<stdio.h>
main() {
    int arr[10] = {23, 5, 98, 65, 3, 55, 73, 9, 21, 85}, *p;
    p = arr;
    printf ( " %d\n", arr[*(p + 7)]); //R: 85
    printf ( " %d\n", *arr + 3); //R: 26
    printf ( " %d\n", *p++); //R: 23 muesta contenido y post-incrementa puntero
    printf (" %d\n", *(arr + 1)); //R: 5
    printf (" %d\n", (*p)++); //R: 5 muestra contenido y luego post-incrementa contenido
    printf (" %d\n", *p); //R:6 
    printf (" %d\n", *p++); //R: 6
    printf (" %d\n", *p); } //R: 98
*/