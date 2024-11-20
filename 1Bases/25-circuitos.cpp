#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;

void deltaAEstrella(double R1, double R2, double R3) {
    double suma = R1 + R2 + R3;
    double Ra = (R1 * R2) / suma;
    double Rb = (R2 * R3) / suma;
    double Rc = (R3 * R1) / suma;

    cout << fixed << setprecision(4); 
    cout << "Equivalente en configuración Estrella:\n";
    cout << "Ra = " << Ra << "\n";
    cout << "Rb = " << Rb << "\n";
    cout << "Rc = " << Rc << "\n";
}

void estrellaADelta(double Ra, double Rb, double Rc) {
    double suma = Ra * Rb + Rb * Rc + Rc * Ra;
    double R1 = suma / Rc;
    double R2 = suma / Ra;
    double R3 = suma / Rb;

    cout << fixed << setprecision(4);
    cout << "Equivalente en configuración Delta:\n";
    cout << "R1 = " << R1 << "\n";
    cout << "R2 = " << R2 << "\n";
    cout << "R3 = " << R3 << "\n";
}

void resistenciaSerie(const vector<double>& resistencias) {
    double Req = 0;
    for (double R : resistencias) {
        Req += R;
    }
    cout << fixed << setprecision(4);
    cout << "Resistencia equivalente en serie: " << Req << "\n";
}

void resistenciaParalelo(const vector<double>& resistencias) {
    double Req_inv = 0;
    for (double R : resistencias) {
        Req_inv += 1 / R;
    }
    double Req = 1 / Req_inv;
    cout << fixed << setprecision(4);
    cout << "Resistencia equivalente en paralelo: " << Req << "\n";
}

int main() {
    int opcion;

    while (true) {
        cout << "\nSeleccione una opción:\n";
        cout << "1. Convertir de Delta a Estrella\n";
        cout << "2. Convertir de Estrella a Delta\n";
        cout << "3. Calcular resistencia en Serie\n";
        cout << "4. Calcular resistencia en Paralelo\n";
        cout << "5. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 5) {
            cout << "Saliendo del programa...\n";
            break;
        }

        switch (opcion) {
            case 1: {
                double R1, R2, R3;
                cout << "Ingrese las resistencias R1, R2, R3 en configuración Delta:\n";
                cout << "R1: ";
                cin >> R1;
                cout << "R2: ";
                cin >> R2;
                cout << "R3: ";
                cin >> R3;
                deltaAEstrella(R1, R2, R3);
                break;
            }
            case 2: {
                double Ra, Rb, Rc;
                cout << "Ingrese las resistencias Ra, Rb, Rc en configuración Estrella:\n";
                cout << "Ra: ";
                cin >> Ra;
                cout << "Rb: ";
                cin >> Rb;
                cout << "Rc: ";
                cin >> Rc;
                estrellaADelta(Ra, Rb, Rc);
                break;
            }
            case 3: {
                int n;
                cout << "Ingrese el número de resistencias en serie: ";
                cin >> n;
                vector<double> resistencias(n);
                for (int i = 0; i < n; ++i) {
                    cout << "Resistencia R" << i + 1 << ": ";
                    cin >> resistencias[i];
                }
                resistenciaSerie(resistencias);
                break;
            }
            case 4: {
                int n;
                cout << "Ingrese el número de resistencias en paralelo: ";
                cin >> n;
                vector<double> resistencias(n);
                for (int i = 0; i < n; ++i) {
                    cout << "Resistencia R" << i + 1 << ": ";
                    cin >> resistencias[i];
                }
                resistenciaParalelo(resistencias);
                break;
            }
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
                break;
        }
    }

    return 0;
}
