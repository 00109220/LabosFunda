#include <iostream>
using namespace std;
int main(){
int num1, num2, residuo, mcd;
//Encontrar el MCD de dos numeros mediante el metodo de Euclides
    cout<<"Encontrar el MCD de dos numeros enteros"<<endl;
    cout<<"Ingresa el primero numero: ";
    cin>>num1;
    cout<<"Ingresa el segundo numero: ";
    cin>>num2;
    do //El metodo Euclides consiste en dividir el numero menor de los dos numeros entre el residuo
       //hasta llegar al residuo 0
    {
        residuo = num1 % num2;
        if(residuo != 0){
            num1 = num2;
            num2 = residuo;
        }
        else mcd= num2;
    } while (residuo != 0);
    cout<<"El MCD de los dos numeros es: "<<mcd;
    return 0;
}