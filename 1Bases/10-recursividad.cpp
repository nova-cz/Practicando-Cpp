
//!RECURSIVIDAD

#include <iostream>
using namespace std;

int factorial(int n);
int n;

int main(){
  
  cout<<"Ingrese un numero: ";
  cin>>n;

  cout<<"El factorial del numero ingresado es: "<<factorial(n)<<endl;  

}

int factorial(int n){
  if(n == 0){
    n = 1;
  }
  else{
    n = n * factorial(n-1);
  }
  return n;
}                                           