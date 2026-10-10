#include "pila.h"
#include <stdlib.h>
void nuevaPila(tipoPila *p) { *p = NULL; }
void apilar(tipoPila *p, int elemento) {
    celdaPila *nuevo = (celdaPila *)malloc(sizeof(celdaPila));
    nuevo->elem = elemento;
    nuevo->sig = *p;
    *p = nuevo;
}
int  cima(tipoPila p) { return p->elem; }
bool esNulaPila(tipoPila p) { return p == NULL; }
