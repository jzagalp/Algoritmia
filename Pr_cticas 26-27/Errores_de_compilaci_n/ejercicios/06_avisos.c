/* Comprueba si un numero es mayor que 10 y busca el maximo de tres.
   Deberia imprimir:
   7 no es mayor que 10
   El maximo es 42
   Hola, Ada */
#include <stdio.h>

int esMayorQueDiez(int x) {
    if (x > 10) {
        return 1;
    }
}

int maximo(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main(void) {
    int n = 7;
    int resultado = esMayorQueDiez(n);
    int sinUsar;
    if (resultado = 1) {
        printf("%d es mayor que 10\n", n);
    } else {
        printf("%d no es mayor que 10\n", n);
    }
    printf("El maximo es %d\n", maximo(3, 42, 8));
    char *nombre = "Ada";
    printf("Hola, %d\n", nombre);
    return 0;
}
