/******************************************************************************
Cortés Romero Alberto Emiliano
uso de variables globales con funciones 

*******************************************************************************/
#include<stdio.h>
void incremento();
/* La variable enteraGlobal es vista por todas
 las funciones (main e incremento) */
int enteraGlobal;

int main()
{
 // La variable cont es local a la función main
 int cont;
 enteraGlobal = 0; // La función main accede a la variable global
 for (cont=0 ; cont<5 ; cont++)
 {
 incremento(); //en cada paso del for, se usa la funcion y cumple su proceso
 }

 return 0;
}

void incremento()
{
 // La variable enteraLocal es local a la función incremento
 int enteraLocal = 5; //enteraLocal solo vive en la funcion
 enteraGlobal += 2;
 printf("global(%i) + local(%i) = %d\n",enteraGlobal, enteraLocal, enteraGlobal+enteraLocal);
}
