#include <iostream>
//iostream es la libreria de entrada y salida, osea q es la q nos permite imprimir y leer datos cout, cin 


int main() {
    
    //Alias y crear propios tipos de datos:
    typedef struct {
        int x;
        int y;
    } Punto;
    
    Punto p1;
    p1.x = 5;
    p1.y = 10;
    std::cout << "Punto p1: (" << p1.x << ", " << p1.y << ")" << std::endl;
    
    //Casr
    int x = 10;
    double y = (double)x + 12.4;  // C-style cast
    std::cout << "y: " << y << std::endl;

    
    //Constants
    const double pi = 3.1416;
    const int light_speed = 299792458;
    
    //Variables
    std::string name = "Miguel";
    bool power = true;
    int age = 20;
    float height = 1.70;
    std::string mood;
    double grade = 9.5;

    std::cout <<"Hello "<< name<<std::endl;std::cout<<"These are your data: "<<std::endl;
    std::cout <<"You are "<< age <<" years old"<<std::endl;
    std::cout <<"You are "<< height <<" meters tall"<<std::endl;
    std::cout <<"You have a grade of "<< grade <<std::endl;

    std::cout <<"How are you? ";
    std::cin >> mood;
    std::cout <<"You are "<< mood <<std::endl;

    return 0;

}


