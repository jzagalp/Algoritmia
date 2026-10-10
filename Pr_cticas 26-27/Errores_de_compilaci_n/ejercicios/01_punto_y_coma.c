/* Calcula la suma de los 10 primeros numeros. Deberia imprimir: La suma es 55 */
#include <stdio.h>

int main(void) {
    int suma = 0
    int i;
    for (i = 1; i <= 10; i++) {
        suma = suma + i;
    }
    printf("La suma es %d\n", suma);
    return 0;
}
