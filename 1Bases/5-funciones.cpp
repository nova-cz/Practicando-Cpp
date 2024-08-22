#include <iostream>
using namespace std;

//Prototipo de la funciones

/*Para el problema ocupare dos funciones:\
  -Una para pedir datos.
  -Una para realizar la multiplicacion.
*/

void pedirDatos();
void mult(float x, float y);
float num1, num2;

int main(){
  
  pedirDatos();
  mult(num1, num2);

  return 0;
}

void pedirDatos(){
  cout<<"Ingres a y b, para multiplicarlos: ";
  cin>>num1>>num2;
}

void mult(float x, float y){
  float result = x * y;
  cout<< "El resulltado de la multiplicacion es: "<<result<<endl;
}