#include <iostream>
using namespace std;

int vec[100], tam;

void pedirDatos(){
  cout << "Digite el tam del vector: ";
  cin>> tam;

  for(int i = 0; i < tam; i++){
    cout<<"Digite el valor del elemento ["<<i<<"]: ";
    cin>>vec[i];
  }

}

void cambiarSigno(int vec[], int tam){
  for(int i = 0; i < tam; i++)
    vec[i] *= -1;
}

void mostrarDatos(int vec[], int tam){
  cout<<"Mostrando datos del vector con signo cambiado: ";
  for (int i = 0; i < tam; i++){
    cout<<"["<<vec[i]<<"]";
  }
  
}


int main(){
  pedirDatos();
  cambiarSigno(vec, tam);
  mostrarDatos(vec, tam);
  
  return 0;
}

