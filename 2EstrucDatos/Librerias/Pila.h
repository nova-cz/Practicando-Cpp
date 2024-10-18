#include "ListaEstatica.h"

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
    cout << "4. Mostrar todos los elementos de la Pila\n";
    cout << "5. Verificar si la pila está vacía\n";
    cout << "6. Salir\n";
    cout << "Seleccione una opción: ";
}
