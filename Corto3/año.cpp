#include <iostream>
#include <clocale>
using namespace std;
//En este programa se podra saber si un año es bisiesto o no//
int main(){
int a;
cout<<"Determinar si un año es bisiesto o no"<<endl;
cout<<"Ingresa el año: ";
cin>>a;
//En esta ocasion usare if//
if(a%4 != 0){ //Se sabe que si no es divisible entre 4 no es bisiesto//
cout<<"El año no es bisiesto";
}
else if(a%100 != 0){//Si al dividirlo entre 100 da residuo 0, si es bisiesto//
cout<<"El año si es bisiesto";
}
else if(a%400 != 0){//Si no es divisible entre 400 no es bisiesto//
    cout<<"El año no es bisiesto";
}
else cout<<"El año es bisiesto";
return 0;
}