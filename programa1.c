/******************************************************************************
Cortés Romero Alberto Emiliano
imprime al revés una frase

*******************************************************************************/
#include <stdio.h>
#include <string.h>

//prototipo de funcion

void imprimir(char[]);

//Definicion o implementacion del main

int main()
{
    char nombre[] = "Facultad de ingenieria";
    imprimir(nombre);

return 0;
} 

//implementacion de las funcion del programa

void imprimir (char s []){
    
    int tam;
    for (tam = strlen (s)-1 ; tam>=0; tam --) //empieza del ultimo elemento al primero e imprime el texto 
    printf("%c", s[tam]);
    printf("\n");
}
