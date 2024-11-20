#include <iostream>
#include <utility>

using namespace std;

int main() {
    // Crear un pair que almacena un entero y una cadena de texto
     pair<int, string> p(1, "Ejemplo");

    // Imprimir el valor del primer elemento
     cout << "First: " << p.first << endl;

    // Imprimir el valor del segundo elemento
     cout << "Second: " << p.second << endl;

     return 0;
}
