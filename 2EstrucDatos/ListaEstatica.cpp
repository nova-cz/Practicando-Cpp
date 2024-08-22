#include <iostream>
#include <algorithm> 

using namespace std;

#define TAMANO_MAXIMO 5 // Definimos el tamano de la lista

int arreglo[TAMANO_MAXIMO];
int tam = 0;

bool estaVacia() {
    return tam == 0;
}

bool estaLlena() {
    return tam == TAMANO_MAXIMO;
}

void insertarAlInicio(int valor) {
    if (estaLlena()) {
        cout << "La lista está llena. No se puede insertar al inicio." << endl;
        return;
    }
    for (int i = tam; i > 0; i--) {
        arreglo[i] = arreglo[i - 1];
    }
    arreglo[0] = valor;
    tam++;
}

void insertarAlFinal(int valor) {
    if (estaLlena()) {
        cout << "La lista está llena. No se puede insertar al final." << endl;
        return;
    }
    arreglo[tam] = valor;
    tam++;
}

void suprimirAlInicio() {
    if (estaVacia()) {
        cout << "La lista está vacía. No se puede suprimir al inicio." << endl;
        return;
    }
    for (int i = 0; i < tam - 1; i++) {
        arreglo[i] = arreglo[i + 1];
    }
    arreglo[tam - 1] = -1;
    tam--;
}

void suprimirAlFinal() {
    if (estaVacia()) {
        cout << "La lista está vacía. No se puede suprimir al final." << endl;
        return;
    }
    arreglo[tam - 1] = -1;
    tam--;
}

void eliminarDuplicados() {
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arreglo[i] == arreglo[j]) {
                for (int k = j; k < tam - 1; k++) {
                    arreglo[k] = arreglo[k + 1];
                }
                arreglo[tam - 1] = -1;
                tam--;
                j--; // Revisar el nuevo elemento en la posición actual
            }
        }
    }
}

int obtenerElementoEn(int pos) {
    if (pos < 0 || pos >= tam) {
        cout << "Posición fuera de rango." << endl;
        return -1;
    }
    return arreglo[pos];
}

int obtenerPrimero() {
    if (estaVacia()) {
        cout << "La lista está vacía." << endl;
        return -1;
    }
    return arreglo[0];
}

int obtenerUltimo() {
    if (estaVacia()) {
        cout << "La lista está vacía." << endl;
        return -1;
    }
    return arreglo[tam - 1];
}

int obtenerSucesor(int pos) {
    if (pos < 0 || pos >= tam - 1) {
        cout << "Posición fuera de rango." << endl;
        return -1;
    }
    return arreglo[pos + 1];
}

int obtenerPredecesor(int pos) {
    if (pos <= 0 || pos >= tam) {
        cout << "Posición fuera de rango." << endl;
        return -1;
    }
    return arreglo[pos - 1];
}

void mostrarLista() {
    if (estaVacia()) {
        cout << "La lista está vacía." << endl;
        return;
    }
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    int opcion, valor, pos;

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
                cout << (estaVacia() ? "La lista está vacía." : "La lista no está vacía.") << endl;
                break;
            case 2:
                cout << (estaLlena() ? "La lista está llena." : "La lista no está llena.") << endl;
                break;
            case 3:
                cout << "Ingrese valor para insertar al inicio: ";
                cin >> valor;
                insertarAlInicio(valor);
                break;
            case 4:
                cout << "Ingrese valor para insertar al final: ";
                cin >> valor;
                insertarAlFinal(valor);
                break;
            case 5:
                suprimirAlInicio();
                break;
            case 6:
                suprimirAlFinal();
                break;
            case 7:
                eliminarDuplicados();
                break;
            case 8:
                cout << "Ingrese posición: ";
                cin >> pos;
                cout << "Elemento en posición " << pos << ": " << obtenerElementoEn(pos) << endl;
                break;
            case 9:
                cout << "Primer elemento: " << obtenerPrimero() << endl;
                break;
            case 10:
                cout << "Último elemento: " << obtenerUltimo() << endl;
                break;
            case 11:
                cout << "Ingrese posición para obtener sucesor: ";
                cin >> pos;
                cout << "Sucesor en posición " << pos << ": " << obtenerSucesor(pos) << endl;
                break;
            case 12:
                cout << "Ingrese posición para obtener predecesor: ";
                cin >> pos;
                cout << "Predecesor en posición " << pos << ": " << obtenerPredecesor(pos) << endl;
                break;
            case 13:
                mostrarLista();
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}
