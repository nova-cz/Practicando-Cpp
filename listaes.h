    #include <iostream>
    using namespace std;

    const int MAX = 5; // Definir el tamaño máximo de la lista

    class Lista {
    private:
        int* puntero;
        int arreglo[MAX];

    public:
        // Constructor que inicializa el puntero y el arreglo
        Lista() {
            puntero = new int[MAX];  // Asigna memoria para el puntero
            for (int i = 0; i < MAX; i++) {
                arreglo[i] = -1;  // Inicializa el arreglo con -1 para indicar posiciones vacías
            }
            *puntero = -1;  // Inicializa el puntero a -1 para indicar que la lista está vacía
        }

        // Destructor que libera la memoria asignada para el puntero
        ~Lista() {
            delete[] puntero;
        }

        // Verifica si la lista está vacía
        bool estaVacia() {
            return (*puntero == -1);  // La lista está vacía si el puntero es -1
        }

        // Verifica si la lista está llena
        bool estaLlena() {
            return (*puntero >= MAX - 1);  // La lista está llena si el puntero alcanza el tamaño máximo - 1
        }

        // Inserta un elemento al inicio de la lista
        void insertarAlInicio(int valor) {
            if (estaLlena()) {
                cout << "La pila está llena. No se puede insertar al inicio." << endl;
                return;
            }
            // Corrimiento a la derecha de los elementos
            for (int i = *puntero; i >= 0; i--) {
                arreglo[i + 1] = arreglo[i];
            }
            arreglo[0] = valor;  // Inserta el nuevo valor al inicio
            (*puntero)++;  // Incrementa el puntero
        }

        // Inserta un elemento al final de la lista
        void insertarAlFinal(int valor) {
            if (estaLlena()) {
                cout << "La pila está llena. No se puede insertar al final." << endl;
                return;
            }
            // Inserta el nuevo valor en la siguiente posición disponible
            arreglo[*puntero + 1] = valor;
            (*puntero)++;  // Incrementa el puntero, para indicar que hay un nuevo elemento
        }

        // Suprime el elemento al inicio de la lista
        void suprimirAlInicio() {
            if (estaVacia()) {
                cout << "La pila está vacía. No se puede suprimir al inicio." << endl;
                return;
            }
            // Mueve todos los elementos una posición a la izquierda
            for (int i = 0; i < *puntero; i++) {
                arreglo[i] = arreglo[i + 1];
            }
            arreglo[*puntero] = -1;  // Elimina el último elemento
            (*puntero)--;  // Decrementa el puntero
        }

        // Suprime el elemento al final de la lista
        void suprimirAlFinal() {
            if (estaVacia()) {
                cout << "La pila está vacía. No se puede suprimir al final." << endl;
                return;
            }
            arreglo[*puntero] = -1;  // Elimina el último elemento
            (*puntero)--;  // Decrementa el puntero
        }

        // Elimina todos los elementos duplicados en la lista
        void eliminarDuplicados() {
            for (int i = 0; i < *puntero; i++) {
                for (int j = i + 1; j <= *puntero; j++) {
                    if (arreglo[i] == arreglo[j]) {
                        // Mueve todos los elementos a la izquierda para eliminar el duplicado
                        for (int k = j; k < *puntero; k++) {
                            arreglo[k] = arreglo[k + 1];
                        }
                        arreglo[*puntero] = -1;  // Elimina el último elemento
                        (*puntero)--;  // Decrementa el puntero
                        j--;  // Verifica la nueva posición
                    }
                }
            }
        }

        // Recupera el elemento en la posición especificada
        void recuperarElemento(int posicion) {
            if (posicion >= 0 && posicion <= *puntero) {
                cout << "Elemento en la posición " << posicion << ": " << arreglo[posicion] << endl;
            } else {
                cout << "Posición inválida." << endl;
            }
        }

        // Recupera el primer elemento de la lista
        void recuperarPrimerElemento() {
            if (estaVacia()) {
                cout << "La pila está vacía." << endl;
            } else {
                cout << "Primer elemento: " << arreglo[0] << endl;
            }
        }

        // Recupera el último elemento de la lista
        void recuperarUltimoElemento() {
            if (estaVacia()) {
                cout << "La pila está vacía." << endl;
            } else {
                cout << "Último elemento: " << arreglo[*puntero] << endl;
            }
        }

        // Recupera el sucesor del elemento en la posición especificada
        void recuperarSucesorPorNumero(int numero) {
            bool encontrado = false;
            for (int i = 0; i <= *puntero; i++) {
                if (arreglo[i] == numero) {
                    encontrado = true;
                    if (i < *puntero - 1) {
                        cout << "Sucesor del elemento " << numero << ": " << arreglo[i + 1] << endl;
                    } else {
                        cout << "No hay sucesor disponible." << endl;
                    }
                    return;
                }
            }
            if (!encontrado) {
                cout << "No se encontró el elemento " << numero << " en el arreglo." << endl;
            }
        }

        // Recupera el antecesor del elemento en la posición especificada
        void recuperarAntecesorPorNumero(int numero) {
            bool encontrado = false;
            for (int i = 0; i <= *puntero; i++) {
                if (arreglo[i] == numero) {
                    encontrado = true;
                    if (i > 0) {
                        cout << "Predecesor del elemento " << numero << ": " << arreglo[i - 1] << endl;
                    } else {
                        cout << "No hay predecesor disponible." << endl;
                    }
                }
            }
            if (!encontrado) {
                cout << "No se encontró el elemento " << numero << " en el arreglo." << endl;
            }
        }

        // Muestra todos los elementos de la lista
        void mostrarLista() {
            if (estaVacia()) {
                cout << "La pila está vacía." << endl;
            } else {
                for (int i = 0; i <= *puntero; i++) {
                    cout << "[" << arreglo[i] << "] ";
                }
                cout << endl;
            }
        }
    };