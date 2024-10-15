#include <iostream>
#include <vector>

using namespace std;

void insertData(vector<vector<int> >&matriz, int n){
    cout<<"Ingrese los valores de la matriz: "<<endl;
    for (int  i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    cout<<"Matriz ingresada correctamente"<<endl;
}

void printMatrix(vector<vector<int> >&matriz){
    cout<<"Matriz: "<<endl;
    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz.size(); j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

void menu(int &op){
    cout<<"\n**********  MENU  **********";
    cout<<"\nIngrese su opcion: \n";
    cout<<"1. Insertar datos"<<endl;
    cout<<"2. Imprimir Matriz"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>op;
}

int main(){
    int n, op;
    cout<<"Ingrese el tamaño de la matriz: ";
    cin>>n;

    vector<vector<int> >matriz(n, vector<int>(n));
    
    do {
        menu(op);
        switch (op)
        {
        case 1:
            insertData(matriz, n);
            break;
        case 2: 
            printMatrix(matriz);
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
        }
    } while (op != 3);
    
    return 0;
}
