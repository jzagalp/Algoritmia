/* Usa la libreria de pilas. Deberia imprimir: La cima es 9
   EL CODIGO DE ESTE EJERCICIO ESTA BIEN. Lo que falla es compilar.sh */
#include <stdio.h>
#include "pila.h"

int main(void) {
    tipoPila pila;
    nuevaPila(&pila);
    apilar(&pila, 4);
    apilar(&pila, 9);
    printf("La cima es %d\n", cima(pila));
    return 0;
}
