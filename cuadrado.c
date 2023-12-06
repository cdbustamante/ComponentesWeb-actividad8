// cuadrado.c
#include <stdio.h>

int main() {
    // Iterar sobre las filas
    for (int i = 0; i < 10; i++) {
        // Iterar sobre las columnas
        for (int j = 0; j < 10; j++) {
            printf("* ");
        }
        // Nueva línea después de cada fila
        printf("\n");
    }

    return 0;
}
