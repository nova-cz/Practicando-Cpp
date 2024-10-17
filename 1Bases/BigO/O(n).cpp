#include <iostream>
using namespace std;

    //!!Búsqueda lineal: En una búsqueda lineal, recorres el arreglo desde el inicio hasta el final para encontrar un elemento.
    bool find(int arr[], int n, int key) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                return true;
            }
        }
        return false;
    }

    //!Imprimir todos los elementos de una lista:
    void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";  
        }
    }

    //!Sumar todos los elementos de una lista o array:
    int sumArray(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i]; 
        }
        return sum;
    }


int main(){

    //!Recorrer un array:
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];  
    }

    return 0;
}