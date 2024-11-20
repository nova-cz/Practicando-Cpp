#include <iostream> // Se incluye la biblioteca estándar de entrada/salida en C++
using namespace std;

// Declaración de la función para imprimir el arreglo
void imprimir(int A[], int tam);

// Declaración de la función de Quicksort recursiva
void qs(int array[], int inicio, int fin) {
    int izq, der, pivote, aux;  // Variables para los índices y el pivote
    izq = inicio;               // 'izq' comienza desde el índice de inicio del subarreglo
    der = fin;                  // 'der' comienza desde el índice de fin del subarreglo
    pivote = array[(izq + der) / 2]; // Se selecciona el pivote como el valor en la posición central

    do {
        // Avanza 'izq' mientras el valor actual sea menor que el pivote
        while (array[izq] < pivote && izq < fin) {
            izq++;
        }

        // Retrocede 'der' mientras el valor actual sea mayor que el pivote
        while (array[der] > pivote && der > inicio) {
            der--;
        }

        // Si 'izq' no ha sobrepasado a 'der', intercambiamos los elementos
        if (izq <= der) {
            aux = array[izq];       // Guardamos temporalmente el valor en 'array[izq]'
            array[izq] = array[der]; // Colocamos 'array[der]' en 'array[izq]'
            array[der] = aux;        // Colocamos el valor temporal en 'array[der]'
            izq++;                   // Avanzamos 'izq' y retrocedemos 'der'
            der--;
        }

    } while (izq <= der); // Repetimos mientras 'izq' esté antes o en la misma posición que 'der'

    // Llamadas recursivas a la función 'qs' para ordenar los subarreglos
    if (inicio < der) {
        qs(array, inicio, der); // Ordenamos la mitad izquierda del arreglo
    }
    if (fin > izq) {
        qs(array, izq, fin);    // Ordenamos la mitad derecha del arreglo
    }
}

int main() {
    int array[] = {7, 2, 1, 6, 4, 5, 3, 8};           // Arreglo inicial a ordenar
    int tam = sizeof(array) / sizeof(array[0]);       // Calcula el tamaño del arreglo

    cout << "Arreglo en desorden: ";
    imprimir(array, tam); // Imprime el arreglo antes de ordenar

    qs(array, 0, tam - 1); // Llama a la función Quicksort

    cout << "Arreglo en orden: ";
    imprimir(array, tam);  // Imprime el arreglo ordenado

    return 0;
}

// Definición de la función para imprimir los elementos del arreglo
void imprimir(int A[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << A[i] << " "; // Imprime cada elemento seguido de un espacio
    }
    cout << endl;           // Salto de línea al final
}
