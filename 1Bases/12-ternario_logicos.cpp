#include <iostream>

int main(){

  //TERNARIO
  int edad = 20;
  std::string mensaje = (edad >= 18) ? "Adulto" : "Menor de edad";
  std::cout << mensaje << std::endl;

  //OPERADORES LOGICOS
  bool esMayor = (10 > 5) && (5 < 20); // true
  bool esFalso = !(10 == 10); // false
  bool esVerdadero = (10 == 10) || (10 > 20); // true

  
  return 0;
}