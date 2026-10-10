/* Guarda tres puntos y calcula la suma de sus coordenadas x.
   Deberia imprimir: Suma de las x: 12 */
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Punto

int sumaX(Punto puntos[], int n) {
    int total = 0;
    int i;
    for (i = 0; i < n; i++) {
        total += puntos[i].x;
    }
    return total;
}

int main(void) {
    Punto p[3];
    p[0].x = 3; p[0].y = 0;
    p[1].x = 4; p[1].y = 1;
    p[2].x = 5; p[2].y = 2;
    printf("Suma de las x: %d\n", sumaX(p, 3));
    return 0;
}
