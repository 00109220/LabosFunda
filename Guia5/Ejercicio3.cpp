#include <iostream>

using namespace std; 
//Determinar si un año es bisiesto o no
    bool bisiesto (int year){
        if (year % 400==0 or year % 4==0 && year % 100!=0){
            return true;

        } else {
            return false; 
        }
    }
    int main()
    {
        int year; 
        cout<< "Por favor ingrese el año: ";
        cin>> year; 

        bool valor = bisiesto (year);

        if (valor){
            cout<< "El año es bisiesto"<< endl;
        }else{
            cout<< "El año no es bisiesto"<< endl; 
        
    }
    return 0;
}