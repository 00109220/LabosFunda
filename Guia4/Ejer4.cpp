#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int longitud;
    char palabra[25];
    cout<<"Verifica si la palabra es mayor a 10 caracteres y si es par o impar"<<endl;
    cout <<"Ingrese la palabra: ";
    cin>> palabra;
    cout<<"Su palabra tiene "<<strlen(palabra)<<" letras"<<endl;
    longitud= strlen(palabra);

    if(longitud>=10){
        cout<<"Su palabra es igual mayor a 10 caracteres";
    }
    else{
        cout<<"Su palabra es menor a 10 caracteres";
    }
    if(longitud%2==0){
        cout<<" y su longitud es par";
    }
    else{
        cout<<" y su longitud es impar";
    }

    return 0;
}