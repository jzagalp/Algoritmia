/* Usa la libreria de pilas. Deberia imprimir: La pila esta vacia? no
   Pista: mira que fichero se incluye. */
#include <stdio.h>
#include "pila.c"

int main(void) {
    tipoPila pila;
    nuevaPila(&pila);
    apilar(&pila, 1);
    printf("La pila esta vacia? %s\n", esNulaPila(pila) ? "si" : "no");
    return 0;
}
