#include <iostream>
using namespace std;

int calcularPotencia(int x, int y){
  int pot;
  if(y == 1){
    pot = x;
  }
  else if(y > 1){
    pot = x * calcularPotencia( x, y - 1);
  }
  return pot;
}


int main(){

  int x, y, resultado;
  cout<<"Digite la base: ";
  cin>>x;
  cout<<"Digite la potencia: ";
  cin>>y;

  cout<<"El resultado de la base ["<<x<<"] "<<"al exponente [^"<<y<<"] es:"<<calcularPotencia(x,y)<<endl;

  return 0;
}