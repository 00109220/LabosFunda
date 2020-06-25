#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Ingrese la dimension de su arreglo"<<endl;
cin>>a;
int numeros[a];
cout<<"Ingrese los numeros"<<endl;
for(int i=0;i<a;i++){
    cin>>numeros[i];
}
cout<<"Su arreglo es: "<<endl;
for(int i= 0;i<a;i++){
    cout<<numeros[i]<<endl;
}
 int suma=0;
 for(int i=0;i<a;i++){
     suma+=numeros[i];
 }
 cout<<"La suma es: "<<suma<<endl;
 float promedio=0;
 for (int i=0;i<5;i++){
     promedio = suma/a;
 }
 cout<<"El promedio es: "<<promedio;

    return 0;
}