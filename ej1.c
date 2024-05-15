#include <stdio.h>

int busqueda_lineal(int arreglo[], int tamanoArreglo, int numero) {
  // Buscar el número en el arreglo
  for (int i = 0; i < tamanoArreglo; i++) {
    if (arreglo[i] == numero) {
      // Devolver la posición del número
      return i;
    }
  }
  // Si el número no está en el arreglo, devolver -1
  return -1;
}

int binarySearch(int arreglo[], int inicio, int fin, int numero) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        // Si el número está en la posición media
        if (arreglo[medio] == numero)
            return medio;

        // Si el número es mayor, ignoramos la mitad izquierda
        if (arreglo[medio] < numero)
            inicio = medio + 1;

        // Si el número es menor, ignoramos la mitad derecha
        else
            fin = medio - 1;
    }
    // Si el número no está en el arreglo
    return -1;
}










int main() {
  // Definir el arreglo predefinido
  int arreglo[] = {2, 4, 6, 23, 56, 79};
  int tamanoArreglo = sizeof(arreglo) / sizeof(arreglo[0]);

  // Solicitar y validar el número del usuario
  int numeroUsuario;
  printf("Ingrese un número entero: ");
  while (scanf("%d", &numeroUsuario) != 1) {
    printf("Entrada no válida. Ingrese un número entero: ");
    scanf("%*[^\n]"); // Limpiar la entrada
  }

  // Verificar si el número está en el arreglo y obtener su posición
  int posicion = busqueda_lineal(arreglo, tamanoArreglo, numeroUsuario);
  
  // Mostrar el resultado
  if (posicion != -1) {
    printf("Por búsqueda lineal: el número %d sí está en el arreglo en la posición %d.\n", numeroUsuario, posicion);
  } else {
    printf("Por búsqueda lineal: el número %d no está en el arreglo.\n", numeroUsuario);
  }

  int posicionbinaria = binarySearch(arreglo, 0, tamanoArreglo - 1, numeroUsuario);

      // Mostrar el resultado
      if (posicionbinaria != -1) {
          printf("Por búsqueda binaria: el número %d está en el arreglo en la posición %d.\n", numeroUsuario, posicionbinaria);
      } else {
          printf("Por búsqueda binaria: el número %d no está en el arreglo.\n", numeroUsuario);
      }


  return 0;
}