/* Cuenta las vocales de una palabra. Deberia imprimir: murcielago tiene 5 vocales */
#include <stdio.h>

int main(void) {
    char palabra[] = "murcielago";
    int contador = 0;
    int i;
    for (i = 0; i < strlen(palabra); i++) {
        char c = palabra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadr++;
        }
    }
    printf("%s tiene %d vocales\n", palabra, contador);
    return 0;
}
