#include <iostream>
#include <stdlib.h>

using namespace std;

int numCalif, *calif;

void pedirNotas(int numCalif, int *calif){
  for (int i = 0; i < numCalif ; i++)
    {
      cout<<"Ingrese la calificacion ["<<i<<"]: ";
      cin>>calif[i];
    }
}

void mostrarNotas(int numCalif, int *calif){
  cout<<"\nMostrando las calificaciones del usuario:\n";
  for (int i = 0; i < numCalif; i++)
  {
    cout<<"La calificacion ["<<i<<"] es: "<<calif[i]<<endl;
  }
}
  

int main(){

  cout<<"Ingrese el numero de calificaciones: ";
  cin>>numCalif;

  calif = new int(numCalif);

  pedirNotas(numCalif, calif);
  mostrarNotas(numCalif, calif);

  delete[] calif; //Liberar memomria en bytes

  return 0;
}