#include <iostream>
using namespace std;
//Funcion para conocer cuantos estudiantes seran
//y cuales son las notas de cada uno
void llenarMatriz(float matriz [][5], int est){
    float nota;
    for(int i=0;i<est;i++){
        cout <<endl<< "Estudiante " << i+1 <<endl;
        for(int j=0;j<5;j++){
            cout << "Ingrese nota " << j+1 << ": ";
            cin >> nota;
            matriz[i][j]=nota;
        }
    }
}
//Funcion para sacar el promedio final de las notas
//y saber si aprobo o reprobo
void sacarNotaFinal(float matriz [][5], int est){
    float suma=0.0;
    for(int i=0;i<est;i++){
        for(int j=0;j<5;j++){
            suma+=matriz[i][j]*0.20;
        }
        if(suma>=6){
            cout <<endl<< "El estudiante " << i+1 << " aprobo con un nota de: "<<suma;
        }else{
            cout <<endl<< "El estudiante " << i+1 << " reprobo con una nota de: "<<suma;
        }
        suma=0.0;
        cout<<endl;
    }
}
int main(){ 
    int est;
    cout<<endl<<"Conocer el promedio de los estudiantes que desees";
    cout<<" y dado el promedio saber si aprobo o reprobo"<<endl;
    cout<<endl<<"Cuantos estudiantes seran: "<<endl;
    cin >> est;
    float matriz[est][5];
    
    llenarMatriz(matriz,est);
    sacarNotaFinal(matriz,est);
    
    return 0;
}