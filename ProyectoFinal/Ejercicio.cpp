#include <iostream>
#include <string.h>
#include <iomanip> 

using namespace std;

void llenarMatriz(int cantidad, string articulos[][4]){
    string cant, precio;
    char nombre[20];
    for(int i =0;i<cantidad;i++){
        cout << "Articulo #"<<i+1 <<endl;
        for(int j =0;j<3;j++){
            if(j==0){
                cout << "Nombre: ";
                cin.getline(nombre,20);
                articulos[i][j] = nombre;
            }
            if(j==1){
                cout << "Cantidad: ";
                cin >> cant;
                articulos[i][j] = cant;
            }
            if(j==2){
                cout << "Precio: ";
                cin >> precio;
                articulos[i][j] = precio;
                cin.ignore(500,'\n');
            }
        }
    }
}
void calcularTotal(int cantidad,string articulos[][4]){
    
    for(int i =0;i<cantidad;i++){
        articulos[i][3] = to_string(stof(articulos[i][2])*stof(articulos[i][1]));
    }
}

void desplegarCompra(int cantidad,string articulos[][4]){
    for(int i =0;i<cantidad;i++){
        cout <<endl<< "Articulo #"<<i+1 <<endl;
        cout << "Nombre: " << articulos[i][0];
        cout << "Cantidad: " << articulos[i][1];
        cout << "Precio Unitario: " << articulos[i][2];
        cout << "Precio total: " <<articulos[i][3]<<endl;
        
    }
}

void desplegarCompra2(int cantidad,string articulos[][4]){
    cout<<endl<<"Nombre      | Cantidad | Precio Unitario | Total"<<endl;
    for(int i =0;i<cantidad;i++){
        for(int j =0;j<4;j++){
            cout << articulos[i][j]<<"    |     ";
        }cout << endl;
        
    }
}

float costoTotalCompra(int cantidad,string articulos[][4] ){
    float tot = 0.0;
    for(int i =0;i<cantidad;i++){
        tot+=stof(articulos[i][3]);
    }
    
    return tot;
}

int main(){
    int cantidad;
    float costoTotal;
    cout <<endl<< "Ingrese cantidad de articulos a comprar: ";
    cin >> cantidad;
    cout<<endl;
    cin.ignore(500,'\n');
    string articulos [cantidad][4];
    
    llenarMatriz(cantidad, articulos);
    calcularTotal(cantidad,articulos);
    desplegarCompra2(cantidad,articulos);
    
    costoTotal = costoTotalCompra(cantidad,articulos);
    
    cout<<endl << "Total de la compra fue de: $"<<costoTotal<<endl;
    cout<<"*GRACIAS POR SU COMPRA*"<<endl;
}