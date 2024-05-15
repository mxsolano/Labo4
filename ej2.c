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

int encuentra_maximo(int A[], int tamano) {
    int maximo = A[0]; // se asume que el primer elemento es 0

    // iterando a partir de la posicion 1
    for (int i = 1; i < tamano; i++) {
        // si el elemento actual es mas pequeno que el elemento anterior ahora este es el minimo
        if (A[i] > maximo) {
            maximo = A[i];
        }
    }

    return maximo;
}

void encontrarMinMax(int *A, int *minimo, int *maximo, int tamano) {
    // *minimo y *maximo tq se;alen el primer elemento del arreglo
    *minimo = *A;
    *maximo = *A;

    // se recorre el arreglo desde la posicion 1
    for (int i = 1; i < tamano; i++) {
        // si el dato en *minimo actual es menor que en la posicion anterior, se cambia
        if (*(A + i) < *minimo) {
            *minimo = *(A + i);
        }
        // si el dato en *maximo actual es mayor que en la posicion anterior, se cambia
        if (*(A + i) > *maximo) {
            *maximo = *(A + i);
        }
    }
}


int main() {
    int array[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int tamano = sizeof(array) / sizeof(array[0]);
    int min, max;

    int minimo = encuentra_minimo(array, tamano);
    printf("El valor minimo del arreglo es: %d\n", minimo);    

    int maximo = encuentra_maximo(array, tamano);
    printf("El valor maximo del arreglo es: %d\n", maximo);

    encontrarMinMax(array, &min, &max, tamano);
    printf("Mediante punteros: el valor minimo del arreglo es: %d\n", min);
    printf("Mediante punteror: el valor maximo del arreglo es: %d\n", max);

    return 0;
}