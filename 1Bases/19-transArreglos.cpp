#include <iostream>
using namespace std;

int calcularMax(int *ptr, int tam){
    int max = 0;

    for (int i = 0; i < tam; i++)
    {
        if (*(ptr + i ) > max)
        {
            max = *(ptr + i);
        }
        
    }
    
    return max;
}

int main(){
    const int tam = 5;
    int arreglo[tam] = {111,32,-3,4,5};

    cout<<"El mayor elemento del arrglo es: "<< calcularMax(arreglo, tam)<<endl;


    return 0;
}