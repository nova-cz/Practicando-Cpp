#include <iostream>

int main() {
    // While loop
    int i = 0;
    std::cout << "While loop:" << std::endl;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }

    // Do-While loop
    int j = 0;
    std::cout << "Do-While loop:" << std::endl;
    do {
        std::cout << j << std::endl;
        j++;
    } while (j < 5);

    // For loop
    std::cout << "For loop:" << std::endl;
    for (int k = 0; k < 5; k++) {
        std::cout << k << std::endl;
    }

    return 0;
}
