#include <stdio.h>

int encuentra_minimo(int A[], int tamano) {
    int minimo = A[0]; // se asume que el primer elemento es 0

    // iterando a partir de la posicion 1
    for (int i = 1; i < tamano; i++) {
        // si el elemento actual es mas pequeno que el elemento anterior ahora este es el minimo
        if (A[i] < minimo) {
            minimo = A[i];
        }
    }

    return minimo;
}






int main() {
    int array[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int tamano = sizeof(array) / sizeof(array[0]);

    int minimo = encuentra_minimo(array, tamano);
    printf("El valor minimo del arreglo es: %d\n", minimo);    




    return 0;
}