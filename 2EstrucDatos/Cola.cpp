#include <iostream>
#include <listaes.h>

using namespace std;

struct NODO{
    int dato;
    NODO *siguiente;
};

class Cola
{
private:
    NODO* frente;
    NODO* final;

public:
    Cola(){
        frente = nullptr;
        final = nullptr;
    }
};

bool estaVacia(){
    return (frente == NULL);
}

void encolar(int valor){
    NODO* nuevo = new NODO();
    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if(estaVacia()){
        frente = nuevo;
        final = nuevo;
    }else{
        final->siguiente = nuevo;
        final = nuevo;
    }
}

void desencolar(){
    if(estaVacia()){
        cout << "La cola está vacía" << endl;
    }else{
        NODO* aux = frente;
        frente = frente->siguiente;
        delete aux;
    }
}

void mostrarCola(){
    if(estaVacia()){
        cout << "La cola está vacía" << endl;
    }else{
        NODO* aux = frente;
        while(aux != NULL){
            cout << aux->dato << " ";
            aux = aux->siguiente;
        }
        cout << endl;
    }
}

void mostrarMenu() {
    cout << "\n--- Menu de Cola ---\n";
    cout << "1. (encolar)\n";
    cout << "2. (desencolar)\n";
    cout << "3. (Cola Vacia)\n";
    cout << "4. (Cola llena)";
    cout << "5. Mostrar todos los elementos de la Pila\n\n";
    cout << "6. Salir\n";
    cout << "Seleccione una opción: ";
}


int main(){
    Cola cola;
    int opcion, valor;

    
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                cola.encolar(valor);
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
                cout << "Elementos en la pila: ";
                miPila.mostrarPila();
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


}