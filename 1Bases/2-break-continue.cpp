#include <iostream>

int main() {
    std::cout << "Break y Continue:" << std::endl;

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Sale del bucle cuando i es 5
        }
        if (i % 2 == 0) {
            continue; // Salta los números pares
        }
        std::cout << i << std::endl; // Solo imprime los números impares menores a 5
    }

    return 0;
}
