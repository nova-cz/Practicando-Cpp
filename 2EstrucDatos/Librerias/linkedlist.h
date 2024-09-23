#include <iostream>
using namespace std;

// Definición de la estructura del nodo
struct Node {
    int data;      // Variable para almacenar el valor del nodo
    Node *next;   // Puntero que apunta al siguiente nodo en la lista
};

// Definición de la clase LinkedList
class LinkedList {
    Node *head;  // Puntero que apunta al primer nodo de la lista

public:
    //! Inicializa la cabeza en NULL, indicando que la lista está vacía
    LinkedList() : head(NULL) {}

    // Función para insertar un nuevo nodo al inicio de la lista
    void insertAtBeginning(int value) {
        Node *newNode = new Node(); // Crea un nuevo nodo
        newNode->data = value;      // Asigna el valor al nuevo nodo
        newNode->next = head;       // El nuevo nodo apunta al nodo actual en la cabeza
        head = newNode;             // Actualiza la cabeza para que apunte al nuevo nodo
    }

    // Función para insertar un nuevo nodo al final de la lista
    void insertAtEnd(int value) {
        Node *newNode = new Node(); // Crea un nuevo nodo
        newNode->data = value;      // Asigna el valor al nuevo nodo
        newNode->next = NULL;       // El nuevo nodo será el último, así que su siguiente es NULL

        // Si la lista está vacía, establece la cabeza como el nuevo nodo
        if (!head) {
            head = newNode;          // La cabeza apunta al nuevo nodo
            return;                 // Sale de la función
        }

        Node *temp = head; // Puntero temporal para recorrer la lista

        // Recorre la lista hasta llegar al último nodo
        while (temp->next) {
            temp = temp->next; // Avanza al siguiente nodo
        }
        temp->next = newNode; // Establece el siguiente del último nodo al nuevo nodo
    }

    // Función para eliminar el primer nodo de la lista
    void deleteFromBeginning() {
        // Si la lista está vacía, imprime un mensaje y sale
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head; // Guarda el nodo a eliminar
        cout << temp->data << "\n"; // Imprime el valor del nodo que se va a eliminar
        head = head->next; // Actualiza la cabeza al siguiente nodo
        delete temp;      // Libera la memoria del nodo eliminado
    }

    // Función para eliminar el último nodo de la lista
    void deleteFromEnd() {
        if (!head) { // Si la lista está vacía, imprime un mensaje y sale
            cout << "List is empty." << endl;
            return;
        }

        // Si solo hay un nodo, lo elimina
        if (!head->next) {
            cout << head->data << "\n"; // Imprime el valor del único nodo
            delete head; // Libera la memoria del nodo
            head = NULL; // Establece la cabeza en NULL, ya que la lista estará vacía
            return;
        }

        Node *temp = head; // Puntero temporal para recorrer la lista

        // Recorre la lista hasta llegar al penúltimo nodo
        while (temp->next->next) {
            temp = temp->next; // Avanza al siguiente nodo
        }

        cout << temp->next->data << "\n"; // Imprime el valor del último nodo
        delete temp->next; // Libera la memoria del último nodo
        temp->next = NULL; // Establece el siguiente del penúltimo nodo en NULL
    }

    // Función para buscar e imprimir el antecesor de un valor dado
    void findPredecessor(int value) {
        if (!head) { // Si la lista está vacía, imprime un mensaje
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head; // Puntero para recorrer la lista
        if (temp->data == value) { // Si el primer nodo es el que buscamos
            cout << "No predecessor for the first element." << endl; // No hay antecesor
            return;
        }

        while (temp->next) { // Recorre la lista hasta encontrar el nodo
            if (temp->next->data == value) { // Si el siguiente nodo es el que buscamos
                cout << "The predecessor of " << value << " is " << temp->data << endl; // Imprime el antecesor
                return; // Sale de la función
            }
            temp = temp->next; // Avanza al siguiente nodo
        }
        cout << "Value not found." << endl; // Imprime un mensaje si el valor no se encuentra
    }

    // Función para buscar e imprimir el sucesor de un valor dado
    void findSuccessor(int value) {
        if (!head) { // Si la lista está vacía, imprime un mensaje
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head; // Puntero para recorrer la lista
        while (temp) { // Recorre la lista
            if (temp->data == value) { // Si encontramos el nodo
                if (temp->next) { // Si hay un siguiente nodo
                    cout << "The successor of " << value << " is " << temp->next->data << endl; // Imprime el sucesor
                } else {
                    cout << "No successor." << endl; // Si no hay sucesor
                }
                return; // Sale de la función
            }
            temp = temp->next; // Avanza al siguiente nodo
        }
        cout << "Value not found." << endl; // Imprime un mensaje si el valor no se encuentra
    }

    // Función para imprimir el primer elemento de la lista
    void printFirstElement() {
        if (!head) { // Si la lista está vacía, imprime un mensaje
            cout << "List is empty." << endl;
            return;
        }
        cout << "First element: " << head->data << endl; // Imprime el primer elemento
    }

    // Función para imprimir el último elemento de la lista
    void printLastElement() {
        if (!head) { // Si la lista está vacía, imprime un mensaje
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head; // Puntero para recorrer la lista
        while (temp->next) { // Recorre la lista hasta llegar al último nodo
            temp = temp->next; // Avanza al siguiente nodo
        }
        cout << "Last element: " << temp->data << endl; // Imprime el último elemento
    }

    // Función para eliminar nodos duplicados de la lista
    void deleteDuplicates() {
        if (!head) { // Si la lista está vacía, imprime un mensaje
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head; // Puntero para recorrer la lista
        while (current) { // Recorre la lista
            Node *runner = current; // Puntero para verificar duplicados
            while (runner->next) { // Verifica el siguiente nodo
                if (runner->next->data == current->data) { // Si encuentra un duplicado
                    Node *duplicate = runner->next; // Guarda el nodo duplicado
                    runner->next = runner->next->next; // Salta el nodo duplicado
                    delete duplicate; // Libera la memoria del duplicado
                } else {
                    runner = runner->next; // Avanza al siguiente nodo
                }
            }
            current = current->next; // Avanza al siguiente nodo
        }
    }

    // Función para recuperar e imprimir el elemento en una posición específica
    void retrieveElementAtPosition(int position) {
        if (position < 1) { // Verifica si la posición es válida
            cout << "Position should be >= 1." << endl;
            return;
        }

        Node *temp = head; // Puntero para recorrer la lista
        for (int i = 1; i < position && temp; i++) { // Recorre la lista hasta la posición deseada
            temp = temp->next; // Avanza al siguiente nodo
        }

        if (temp) { // Si encontramos un nodo en la posición
            cout << "Element at position " << position << ": " << temp->data << endl; // Imprime el elemento
        } else {
            cout << "Position out of range." << endl; // Si la posición está fuera de rango
        }
    }

    // Función para comprobar si la lista está vacía
    void checkIfEmpty() {
        if (!head) { // Si la cabeza es NULL, la lista está vacía
            cout << "List is empty." << endl;
        } else {
            cout << "List is not empty." << endl; // Si la cabeza no es NULL, la lista no está vacía
        }
    }

    // Función para mostrar todos los elementos de la lista
    void display() {
        if (!head) { // Si la lista está vacía, imprime un mensaje
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head; // Puntero para recorrer la lista
        while (temp) { // Recorre la lista
            cout << temp->data << " -> "; // Imprime el valor del nodo actual
            temp = temp->next; // Avanza al siguiente nodo
        }
        cout << "NULL" << endl; // Indica el final de la lista
    }
};
