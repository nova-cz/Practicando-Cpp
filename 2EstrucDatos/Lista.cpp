#include <iostream>
using namespace std;

#define MAX 5  // Tamaño máximo de la lista

class Lista {
private:
    int arreglo[MAX];
    int* puntero;
public:
    Lista() {
        puntero = new int[MAX];
        for (int i = 0; i < MAX; i++) {
            arreglo[i] = -1;  // Inicializa el arreglo con -1
        }
        *puntero = -1;  // Puntero inicializado a -1
    }

    ~Lista() {
        delete[] puntero;
    }

    bool estaVacia() {
        return (*puntero == -1);
    }

    bool estaLlena() {
        return (*puntero >= MAX - 1);
    }

    void insertarAlInicio(int valor) {
        if (estaLlena()) {
            cout << "La lista está llena. No se puede insertar al inicio." << endl;
            return;
        }
        // Mueve todos los elementos una posición a la derecha
        for (int i = *puntero; i >= 0; i--) {
            arreglo[i + 1] = arreglo[i];
        }
        arreglo[0] = valor;  // Inserta el nuevo valor al inicio
        (*puntero)++;
    }

    void insertarAlFinal(int valor) {
        if (estaLlena()) {
            cout << "La lista está llena. No se puede insertar al final." << endl;
            return;
        }
        // Inserta el nuevo valor en la siguiente posición disponible
        arreglo[*puntero + 1] = valor;
        (*puntero)++;
    }

    void suprimirAlInicio() {
        if (estaVacia()) {
            cout << "La lista está vacía. No se puede suprimir al inicio." << endl;
            return;
        }
        // Mueve todos los elementos una posición a la izquierda
        for (int i = 0; i < *puntero; i++) {
            arreglo[i] = arreglo[i + 1];
        }
        arreglo[*puntero] = -1;  // Elimina el último elemento
        (*puntero)--;
    }

    void suprimirAlFinal() {
        if (estaVacia()) {
            cout << "La lista está vacía. No se puede suprimir al final." << endl;
            return;
        }
        arreglo[*puntero] = -1;  // Elimina el último elemento
        (*puntero)--;
    }

    void eliminarDuplicados() {
        for (int i = 0; i < *puntero; i++) {
            for (int j = i + 1; j <= *puntero; j++) {
                if (arreglo[i] == arreglo[j]) {
                    // Mueve todos los elementos una posición a la izquierda
                    for (int k = j; k < *puntero; k++) {
                        arreglo[k] = arreglo[k + 1];
                    }
                    arreglo[*puntero] = -1;  // Elimina el último elemento
                    (*puntero)--;
                    j--;  // Verifica la nueva posición
                }
            }
        }
    }

    void recuperarElemento(int posicion) {
        if (posicion >= 0 && posicion <= *puntero) {
            cout << "Elemento en la posición " << posicion << ": " << arreglo[posicion] << endl;
        } else {
            cout << "Posición inválida." << endl;
        }
    }

    void recuperarPrimerElemento() {
        if (estaVacia()) {
            cout << "La lista está vacía." << endl;
        } else {
            cout << "Primer elemento: " << arreglo[0] << endl;
        }
    }

    void recuperarUltimoElemento() {
        if (estaVacia()) {
            cout << "La lista está vacía." << endl;
        } else {
            cout << "Último elemento: " << arreglo[*puntero] << endl;
        }
    }

    void recuperarSucesor(int posicion) {
        if (posicion >= 0 && posicion < *puntero) {
            cout << "Sucesor del elemento en la posición " << posicion << ": " << arreglo[posicion + 1] << endl;
        } else {
            cout << "No hay sucesor disponible." << endl;
        }
    }

    void recuperarPredecesor(int posicion) {
        if (posicion > 0 && posicion <= *puntero) {
            cout << "Predecesor del elemento en la posición " << posicion << ": " << arreglo[posicion - 1] << endl;
        } else {
            cout << "No hay predecesor disponible." << endl;
        }
    }

    void mostrarLista() {
        if (estaVacia()) {
            cout << "La lista está vacía." << endl;
        } else {
            for (int i = 0; i <= *puntero; i++) {
                cout << arreglo[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Lista lista;
    int opcion, valor, posicion;

    do {
        cout << "\nMenú:\n";
        cout << "1. Verificar si la lista está vacía\n";
        cout << "2. Verificar si la lista está llena\n";
        cout << "3. Inserción al inicio\n";
        cout << "4. Inserción al final\n";
        cout << "5. Suprimir al inicio\n";
        cout << "6. Suprimir al final\n";
        cout << "7. Eliminar todos los elementos duplicados\n";
        cout << "8. Recuperar el elemento en la posición X\n";
        cout << "9. Recuperar el valor del primer elemento\n";
        cout << "10. Recuperar el valor del último elemento\n";
        cout << "11. Recuperar sucesor\n";
        cout << "12. Recuperar predecesor\n";
        cout << "13. Mostrar lista\n";
        cout << "0. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (lista.estaVacia()) {
                    cout << "La lista está vacía." << endl;
                } else {
                    cout << "La lista no está vacía." << endl;
                }
                break;
            case 2:
                if (lista.estaLlena()) {
                    cout << "La lista está llena." << endl;
                } else {
                    cout << "La lista no está llena." << endl;
                }
                break;
            case 3:
                cout << "Ingrese valor para insertar al inicio: ";
                cin >> valor;
                lista.insertarAlInicio(valor);
                break;
            case 4:
                cout << "Ingrese valor para insertar al final: ";
                cin >> valor;
                lista.insertarAlFinal(valor);
                break;
            case 5:
                lista.suprimirAlInicio();
                break;
            case 6:
                lista.suprimirAlFinal();
                break;
            case 7:
                lista.eliminarDuplicados();
                break;
            case 8:
                cout << "Ingrese posición del elemento a recuperar: ";
                cin >> posicion;
                lista.recuperarElemento(posicion);
                break;
            case 9:
                lista.recuperarPrimerElemento();
                break;
            case 10:
                lista.recuperarUltimoElemento();
                break;
            case 11:
                cout << "Ingrese posición del elemento para recuperar el sucesor: ";
                cin >> posicion;
                lista.recuperarSucesor(posicion);
                break;
            case 12:
                cout << "Ingrese posición del elemento para recuperar el predecesor: ";
                cin >> posicion;
                lista.recuperarPredecesor(posicion);
                break;
            case 13:
                lista.mostrarLista();
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
