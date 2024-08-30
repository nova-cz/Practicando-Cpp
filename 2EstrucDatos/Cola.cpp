#include "listaes.h"

class Cola : public Lista {

public:
    void encolar(int valor) {
        insertarAlFinal(valor);
    }

    void desencolar() {
        suprimirAlInicio();
    }

    void frente() {
        recuperarPrimerElemento();
    }

    bool vacia() {
        return estaVacia();
    }

    void mostrarCola() {
        mostrarLista();
    }

    void menu(){
        cout << "\n--- Menu de Cola ---\n";
        cout << "1. (encolar)\n";
        cout << "2. (desencolar)\n";
        cout << "3. (frente)\n";
        cout << "4. Mostrar todos los elementos de la Cola\n";
        cout << "5. Verificar si la cola está vacía\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
    }

};

int main(){
    Cola miCola;
    int opcion, valor;

    do {
        miCola.menu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                miCola.encolar(valor);
                cout << "Elemento insertado." << endl;
                break;
            case 2:
                if (!miCola.vacia()) {
                    miCola.desencolar();
                    cout << "Elemento superior eliminado." << endl;
                } else {
                    cout << "La cola está vacía." << endl;
                }
                break;
            case 3:
                if (!miCola.vacia()) {
                    miCola.frente();
                } else {
                    cout << "La cola está vacía." << endl;
                }
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
        }
    } while (opcion != 6);
    return 0;
}

