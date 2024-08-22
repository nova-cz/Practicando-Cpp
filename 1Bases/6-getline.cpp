#include <iostream>
#include <string>

int main() {
    std::string nombreCompleto;
    std::string ciudad;

    std::cout << "Ingresa tu nombre completo: ";
    std::getline(std::cin, nombreCompleto);

    std::cout << "Ingresa tu ciudad: ";
    std::getline(std::cin, ciudad);

    std::cout << "Hola, " << nombreCompleto << " de " << ciudad << "!" << std::endl;


// PROBLEMA DE BUFFER

    int edad;
    std::string nombre;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    // Si no se limpia el buffer, getline se saltará la siguiente entrada
    std::cin.ignore(); // Limpia el buffer para evitar problemas

    std::cout << "Ingresa tu nombre completo: ";
    std::getline(std::cin, nombre);

    std::cout << "Tienes " << edad << " años y te llamas " << nombre<< "." << std::endl;

    return 0;
}




