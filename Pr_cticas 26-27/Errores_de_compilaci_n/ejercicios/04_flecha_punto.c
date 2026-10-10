/* Trabaja con una celda de pila. Deberia imprimir: La celda guarda 7 y la copia guarda 9 */
#include <stdio.h>
#include <stdlib.h>

typedef struct celdaP {
    int elem;
    struct celdaP *sig;
} celdaPila;

int main(void) {
    celdaPila *nueva = (celdaPila *)malloc(sizeof(celdaPila));
    nueva.elem = 7;
    nueva->sig = NULL;

    celdaPila copia;
    copia.elem = 9;
    copia->sig = NULL;

    printf("La celda guarda %d y la copia guarda %d\n", nueva->elem, copia.elem);
    free(nueva);
    return 0;
}
