#include <iostream>
#include <cmath>

int main() {
    double x = 25.0;
    double y = -9.7;
    double z = 0.5;
    
    // sqrt: Raíz cuadrada
    double raiz = sqrt(x);
    std::cout << "Raíz cuadrada de " << x << " es " << raiz << std::endl;

    // pow: Potencia
    double potencia = pow(x, z);
    std::cout << x << " elevado a " << z << " es " << potencia << std::endl;

    // abs: Valor absoluto
    double valorAbsoluto = abs(y);
    std::cout << "Valor absoluto de " << y << " es " << valorAbsoluto << std::endl;

    // ceil: Redondeo hacia arriba
    double redondeoArriba = ceil(y);
    std::cout << "Redondeo hacia arriba de " << y << " es " << redondeoArriba << std::endl;

    // floor: Redondeo hacia abajo
    double redondeoAbajo = floor(y);
    std::cout << "Redondeo hacia abajo de " << y << " es " << redondeoAbajo << std::endl;

    // round: Redondeo al entero más cercano
    double redondeoCercano = round(y);
    std::cout << "Redondeo al entero más cercano de " << y << " es " << redondeoCercano << std::endl;

    // sin: Seno de un ángulo (en radianes)
    double seno = sin(z);
    std::cout << "Seno de " << z << " radianes es " << seno << std::endl;

    // cos: Coseno de un ángulo (en radianes)
    double coseno = cos(z);
    std::cout << "Coseno de " << z << " radianes es " << coseno << std::endl;

    // tan: Tangente de un ángulo (en radianes)
    double tangente = tan(z);
    std::cout << "Tangente de " << z << " radianes es " << tangente << std::endl;

    // log: Logaritmo natural (base e)
    double logaritmo = log(x);
    std::cout << "Logaritmo natural de " << x << " es " << logaritmo << std::endl;

    // log10: Logaritmo base 10
    double logaritmoBase10 = log10(x);
    std::cout << "Logaritmo base 10 de " << x << " es " << logaritmoBase10 << std::endl;

    // exp: Exponencial (e^x)
    double exponencial = exp(z);
    std::cout << "e elevado a " << z << " es " << exponencial << std::endl;

    return 0;
}
