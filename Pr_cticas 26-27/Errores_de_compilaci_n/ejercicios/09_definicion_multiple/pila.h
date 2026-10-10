#ifndef PILA_H
#define PILA_H
#include <stdbool.h>
typedef struct celdaP { int elem; struct celdaP *sig; } celdaPila;
typedef celdaPila *tipoPila;
void nuevaPila(tipoPila *p);
void apilar(tipoPila *p, int elemento);
int  cima(tipoPila p);
bool esNulaPila(tipoPila p);
#endif
