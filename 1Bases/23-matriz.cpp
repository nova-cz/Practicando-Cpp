#include <iostream>
#include <vector>
//
//Programa que permita realizar las siguientes operaciones con una matriz cuadrada de tamaño n:
/**
 * Miguel Angel Cruz Reyes  
 * Isaac Aguilar Duran
 * Karla Cruz Sandoval
 */

using namespace std;

// Función para insertar los datos de la matriz
void insertData(vector<vector<int>>& matriz, int n) {
    cout << "\nIngrese los valores de la matriz:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Valor para nodo [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz ingresada correctamente." << endl;
}

// Función para imprimir la matriz
void printMatrix(vector<vector<int>>& matriz) {
    cout << "\nMatriz:" << endl;
    for (const auto& fila : matriz) {
        for (const auto& elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

// Función para multiplicar dos matrices
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int n) {
    vector<vector<int>> resultado(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return resultado;
}

void calcularPotenciaMatriz(vector<vector<int>>& matriz, int n, int potencia) {
    vector<vector<int>> resultado = matriz; 

    for (int p = 1; p < potencia; p++) {
        resultado = multiplicarMatrices(resultado, matriz, n);
    }

    cout << "\nMatriz a la potencia " << potencia << ": " << endl;
    printMatrix(resultado);
}

// Función para calcular la adyacencia entre dos nodos
void calcularAdyacencia(vector<vector<int>>& matriz, int n, int nodo1, int nodo2) {
    if (nodo1 < n && nodo2 < n) {
        if (matriz[nodo1][nodo2] == 1) {
            cout << "Los nodos [" << nodo1 << "][" << nodo2 << "] son adyacentes." << endl;
        } else {
            cout << "Los nodos [" << nodo1 << "][" << nodo2 << "] no son adyacentes." << endl;
        }
    } else {
        cout << "Los nodos ingresados no pertenecen a la matriz." << endl;
    }
}

// Función para limpiar la matriz
void limpiarMatriz(vector<vector<int>>& matriz) {
    for (auto& fila : matriz) {
        for (auto& elemento : fila) {
            elemento = 0;
        }
    }
    cout << "Matriz limpiada correctamente." << endl;
}

// Función del menú
void menu(int& op) {
    cout << "\n**********  MENU  **********" << endl;
    cout << "Ingrese su opcion: " << endl;
    cout << "1. Insertar datos" << endl;
    cout << "2. Imprimir Matriz" << endl;
    cout << "3. Calcular C^2" << endl;
    cout << "4. Calcular C^3" << endl;
    cout << "5. Calcular Adyacencia entre dos nodos" << endl;
    cout << "6. Limpiar matriz" << endl;
    cout << "7. Salir" << endl;
    cin >> op;
}

//Definición de la función principal
int main() {
    int n, op;
    cout << "Ingrese el tamaño de la matriz: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    do {
        menu(op);
        switch (op) {
        case 1:
            insertData(matriz, n);
            break;
        case 2:
            printMatrix(matriz);
            break;
        case 3:
            calcularPotenciaMatriz(matriz, n, 2);
            break;
        case 4:
            calcularPotenciaMatriz(matriz, n, 3);
            break;
        case 5: {
            int nodo1, nodo2;
            cout << "Ingrese el nodo 1: ";
            cin >> nodo1;
            cout << "Ingrese el nodo 2: ";
            cin >> nodo2;
            calcularAdyacencia(matriz, n, nodo1, nodo2);
            break;
        }
        case 6:
            limpiarMatriz(matriz);
            break;
        case 7:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida, intente de nuevo." << endl;
            break;
        }
    } while (op != 7);

    return 0;
}
