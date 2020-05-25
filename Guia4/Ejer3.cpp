#include <iostream>
using namespace std;
int main(){
    int numero;

    cout <<"Determinar si un numero es positivo, negativo o cero"<<endl;
    cout <<"Ingrese el numero: ";
    cin >> numero;
    if(numero>0)
    cout <<"El numero "<<numero<<", es positivo"<<endl;
    else if(numero<0)
    cout <<"El numero "<<numero<<", es negativo"<<endl;
    else
    cout<<"El numero "<<numero<<", es cero";

   


    return 0;
}
