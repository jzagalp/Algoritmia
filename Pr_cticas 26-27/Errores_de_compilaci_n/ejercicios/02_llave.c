/* Cuenta cuantos numeros pares hay entre 1 y 20. Deberia imprimir: Hay 10 pares */
#include <stdio.h>

int main(void) {
    int pares = 0;
    int i;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            pares++;
    }
    printf("Hay %d pares\n", pares);
    return 0;
}
