#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    
    cout<<"Verificar si un numero es divisible entre otro"<<endl;
    cout<<"Ingrese el primer numero: ";
    cin >>num1;
    cout<<"Ingrese el segundo numero: ";
    cin >> num2;
    if(num1%num2==0)
    cout<<"El numero es divisible";
    
    else 
    cout<<"El numero no es divisible";

    return 0;
}