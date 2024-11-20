#include <iostream>

#define range(it, a, b) for (int it = a; it < b; it++)

typedef long long int ll;
int main() {
    // While loop
    ll i = 0;
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
    range(k, 0, 5) {
        std::cout << k << std::endl;
    }

    return 0;
}
