#include <iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5};
  int *ptr;
  ptr = arr;

  for(int i =0; i < 5; i++){
    cout<<"EL valor de la posicion ["<<i<<"] es: "<<*ptr++<<endl;
    cout<<"La direccion["<<i<<"] es: "<<ptr<<endl;
  }
  
  return 0;
}