#include <iostream>
#include <math.h>
using namespace std;
int main(){
    string producto;
    float precio, cantidad, total;
cout <<"Hola, yo te ayudare a calcular el total de tu compra"<< endl ;
cout <<"Ingresa el nombre del pruducto: ";
cin >> producto;
cout <<"Ingresa el precio del producto en dolar: ";
cin >> precio;
cout <<"ingresa la cantidad de productos en unidades: ";
cin >> cantidad;
cout <<"El total a pagar es: ";
total= precio*cantidad;
cout << total;


    return 0;
}