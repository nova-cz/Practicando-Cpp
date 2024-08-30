#include "listaes.h"

class Pila : public Lista {
public:
    void push(int valor) {
        insertarAlFinal(valor);
    }

    void pop() {
        suprimirAlFinal();
    }

    void top() {
        recuperarUltimoElemento();
    }

    bool vacia() {
        return estaVacia();
    }

    void mostrarPila() {
        mostrarLista();
    }
};

void mostrarMenu() {
    cout << "\n--- Menu de Pila ---\n";
    cout << "1. (push)\n";
    cout << "2. (pop)\n";
    cout << "3. (top)\n";
    cout << "4. Mostrar todos los elementos\n";
    cout << "5. Verificar si la pila está vacía\n";
    cout << "6. Salir\n";
    cout << "Seleccione una opción: ";
}

int main() {
    Pila miPila;
    int opcion, valor;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;miPila
                .push(valor);
                cout << "Elemento insertado." << endl;
                break;

            case 2:
                if (!miPila.vacia()) {
                    miPila.pop();
                    cout << "Elemento superior eliminado." << endl;
                } else {
                    cout << "La pila está vacía." << endl;
                }
                break;

            case 3:
                if (!miPila.vacia()) {
                    miPila.top();
                } else {
                    cout << "La pila está vacía." << endl;
                }
                break;

            case 4:
                if (!miPila.estaVacia())
                {
                    cout << "Elementos en la pila: ";
                    miPila.mostrarPila();
                }
                else
                {
                    cout << "La pila está vacía." << endl;
                }
                
                break;

            case 5:
                if (miPila.vacia()) {
                    cout << "La pila está vacía." << endl;
                } else {
                    cout << "La pila no está vacía." << endl;
                }
                break;

            case 6:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 6);

    return 0;
}
