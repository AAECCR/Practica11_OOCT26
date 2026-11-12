/******************************************************************************
Cortés Romero Alberto Emiliano
suma de dos numeros

*******************************************************************************/
#include <stdio.h>
void sumar(); // prototipo de la función
int main()

{
 sumar(); // llamado de la función suma
 return 0;
}

void sumar() // función suma
{
 int z, x=5, y=10; //variables locales
 z=x+y;
 printf("%i",z);
}
