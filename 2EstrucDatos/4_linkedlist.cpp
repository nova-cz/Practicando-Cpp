#include "Librerias/linkedlist.h" // Incluye la cabecera de la lista dinámica
#include <iostream>          // Incluye la biblioteca estándar de entrada/salida

using namespace std; // Utiliza el espacio de nombres estándar

int main() {
    LinkedList mi_lista; // Crea una instancia de la lista enlazada
    int opcion, valor;   // Variables para almacenar la opción del menú y el valor

    do {
        // Muestra el menú de opciones
        cout << "\nMenu de opciones:\n";
        cout << "1. Insertar al inicio\n";
        cout << "2. Insertar al final\n";
        cout << "3. Eliminar inicio\n";
        cout << "4. Eliminar final\n";
        cout << "5. Buscar antecesor\n";
        cout << "6. Buscar sucesor\n";
        cout << "7. Imprimir primer elemento\n";
        cout << "8. Imprimir ultimo elemento\n";
        cout << "9. Eliminar duplicados\n";
        cout << "10. Mostrar lista\n";
        cout << "11. Recuperar elemento en la posición x\n";
        cout << "12. Comprobar si la lista está vacía\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opción: "; // Solicita al usuario una opción
        cin >> opcion; // Lee la opción ingresada

        // Maneja la opción seleccionada
        switch (opcion) {
            case 1: // Insertar al inicio
                cout << "Ingrese valor para insertar al inicio: ";
                cin >> valor; // Solicita el valor a insertar
                mi_lista.insertAtBeginning(valor); // Llama a la función para insertar
                break;

            case 2: // Insertar al final
                cout << "Ingrese valor para insertar al final: ";
                cin >> valor; // Solicita el valor a insertar
                mi_lista.insertAtEnd(valor); // Llama a la función para insertar
                break;

            case 3: // Eliminar inicio
                mi_lista.deleteFromBeginning(); // Llama a la función para eliminar
                break;

            case 4: // Eliminar final
                mi_lista.deleteFromEnd(); // Llama a la función para eliminar
                break;

            case 5: // Buscar antecesor
                cout << "Ingrese valor para buscar antecesor: ";
                cin >> valor; // Solicita el valor a buscar
                mi_lista.findPredecessor(valor); // Llama a la función para buscar
                break;

            case 6: // Buscar sucesor
                cout << "Ingrese valor para buscar sucesor: ";
                cin >> valor; // Solicita el valor a buscar
                mi_lista.findSuccessor(valor); // Llama a la función para buscar
                break;

            case 7: // Imprimir primer elemento
                mi_lista.printFirstElement(); // Llama a la función para imprimir
                break;

            case 8: // Imprimir último elemento
                mi_lista.printLastElement(); // Llama a la función para imprimir
                break;

            case 9: // Eliminar duplicados
                mi_lista.deleteDuplicates(); // Llama a la función para eliminar duplicados
                break;

            case 10: // Mostrar lista
                mi_lista.display(); // Llama a la función para mostrar la lista
                break;

            case 11: // Recuperar elemento por posición
                cout << "Ingrese posición para recuperar el elemento: ";
                cin >> valor; // Solicita la posición
                mi_lista.retrieveElementAtPosition(valor); // Llama a la función para recuperar
                break;

            case 12: // Comprobar si la lista está vacía
                mi_lista.checkIfEmpty(); // Llama a la función para comprobar
                break;

            case 0: // Salir
                cout << "Saliendo...\n"; // Mensaje de despedida
                break;

            default: // Opción no válida
                cout << "Opción inválida, por favor intente de nuevo.\n"; // Mensaje de error
        }
    } while (opcion != 0); // Continúa hasta que se elija salir

    return 0; // Fin del programa
}
