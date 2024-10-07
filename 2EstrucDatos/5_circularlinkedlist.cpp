#include "Librerias/circularLinkedlist.h"
#include <iostream>
using namespace std;

/*
    ENCOLAR_C
    DESENCOLAR_C
    COLAVACIA_C
    FRENTE_C
*/

class ColaCircular : public CircularLinkedList {

    public:
    void encolar(int valor) {
        insertEnd(valor);
    }

    void desencolar() {
        deleteFirstNode();
    }

    void frente() {
        checkFirstNode();
    }

    bool vacia() {
        return last == nullptr;
    }
    
    void mostrarCola() {
        printList();
    }

    void menu(){
        cout << "\n--- Menu de Cola Circular ---\n";
        cout << "1. (encolar)\n";
        cout << "2. (desencolar)\n";
        cout << "3. (frente)\n";
        cout << "4. Mostrar todos los elementos de la Cola Circular\n";
        cout << "5. Verificar si la cola está vacía\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
    }

};

int main(){
    ColaCircular miCola;
    int opcion, valor;

    do {
        miCola.menu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                miCola.encolar(valor);
                break;

            case 2:
                miCola.desencolar();
                break;

            case 3:
                miCola.frente();
                break;

            case 4:
                miCola.mostrarCola();
                break;

            case 5:
                if (miCola.vacia()) {
                    cout << "La cola está vacía." << endl;
                } else {
                    cout << "La cola no está vacía." << endl;
                }
                break;

            case 6:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opción no válida." << endl;
                break;
        }

    } while (opcion != 6);

    return 0;
}