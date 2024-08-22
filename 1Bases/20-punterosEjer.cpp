#include <iostream>
#include <stdlib.h>
using namespace std;

/*Pedir al usuario n-numeros
    Almacenarlos en un arreglo dinamico
    ordenar los numeros de manera ascendente
    mostrar en pantalla los numeros
  */


int numEle, *ptrEle;

void pedirDatos(){
    cout<<"Ingrese el numero de elementos de su arreglo: ";
    cin>>numEle;

    ptrEle = new int [numEle]; //-> Creando el arreglo dinamico 

    for (int i = 0; i < numEle; i++)
    {
        cout<<"Ingrese el valor del elemento ["<<i<<"]: ";
        cin>> *(ptrEle+i); //elemento[i]
    }
    

}

void ordenarArreglo(int *ptr, int numEle){
    int aux;
    for (int i = 0; i < numEle; i++)
    {
        for (int j = 0; j < numEle - 1; j++)
        {
            if (*(ptr+j) > *(ptr+j+1))
            {
                aux = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = aux;
            }
            
        }
        
        
    }
}

void mostrarArreglo(int *ptr, int numELementos){
    cout<<"\nMostrando arreglo ordenado"<<endl;
    for (int i = 0; i < numELementos; i++)
    {
        cout<<"Elemento ["<<i<<"] su valor es: "<< *(ptr + i)<<endl;
    }
    
}

int main(){
    pedirDatos();
    ordenarArreglo(ptrEle, numEle);
    mostrarArreglo(ptrEle, numEle);

    delete [] ptrEle;

    return 0;
}