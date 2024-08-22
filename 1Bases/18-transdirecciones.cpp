#include <iostream>

using namespace std;

void intercambio(float *num1, float *num2){
  float aux;

  aux = *num1;
  *num1 = *num2;
  *num2 = aux;
}


int main(){

  float num1  = 20.7, num2 = 4.8;

  cout<<"Valor del num1: "<< num1<<endl;
  cout<<"Valor del num2: "<< num2<<endl;

  intercambio(&num1,&num2);

  cout<<"Valor nuevo de num1: "<< num1<<endl;
  cout<<"Valor nuevo de num2: "<< num2<<endl;

  return 0;
}
