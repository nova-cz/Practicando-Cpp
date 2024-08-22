#include <iostream>

int main() {
    int numero;
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;

    // Usando if statements para determinar si el número es positivo, negativo o cero
    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

    // Usando switch para determinar el mensaje basado en el valor absoluto del número
    int valorAbsoluto = (numero < 0) ? -numero : numero; // Operador ternario para valor absoluto
    std::cout << "Valor absoluto: " << valorAbsoluto << std::endl;

    switch (valorAbsoluto) {
        case 0:
            std::cout << "El valor absoluto es cero." << std::endl;
            break;
        case 1:
            std::cout << "El valor absoluto es uno." << std::endl;
            break;
        case 2:
            std::cout << "El valor absoluto es dos." << std::endl;
            break;
        default:
            std::cout << "El valor absoluto es mayor que dos." << std::endl;
            break;
    }

    // Usando el operador ternario para determinar un mensaje sobre si el número es par o impar
    std::string parOImpar = (numero % 2 == 0) ? "par" : "impar";
    std::cout << "El número es " << parOImpar << "." << std::endl;

    return 0;
}

