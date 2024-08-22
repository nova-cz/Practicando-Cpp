#include <iostream>
using namespace std;

//Declarar macro
#define MAX 10

int main(){

  int arr[MAX], *ptrNum;
  for (int i = 0; i < MAX; i++)
  {
    cout<<"Ingrese el valor de la posicion ["<<i<<"]: ";
    cin>>arr[i];
  }

  ptrNum = arr;

  for (int i = 0; i < MAX; i++)
  {
    if (*ptrNum % 2 == 0)
    {
      cout<<"EL numero ["<<*ptrNum<<"] es par"<<endl;
      cout<<"La direccion de memoria es: "<<ptrNum<<endl;
    }
    ptrNum++;
    
  }
  


  return 0;
}

