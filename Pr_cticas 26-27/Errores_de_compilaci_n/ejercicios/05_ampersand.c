/* Una pila minima. Deberia imprimir: La cima es 5 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct celdaP {
    int elem;
    struct celdaP *sig;
} celdaPila;
typedef celdaPila *tipoPila;

void nuevaPila(tipoPila *p) { *p = NULL; }

void apilar(tipoPila *p, int elemento) {
    celdaPila *nuevo = (celdaPila *)malloc(sizeof(celdaPila));
    nuevo->elem = elemento;
    nuevo->sig = *p;
    *p = nuevo;
}

int cima(tipoPila p) { return p->elem; }

int main(void) {
    tipoPila pila;
    nuevaPila(pila);
    apilar(&pila, 3);
    apilar(&pila, 5);
    printf("La cima es %d\n", cima(&pila));
    return 0;
}
