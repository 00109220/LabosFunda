#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int pais, a=1, b=2, c=3, d=4;
    float dinero, iva1, iva2, iva3, iva4;
    cout<<endl;
    cout<<"Calcular el impuesto de IVA en diferentes paises"<<endl<<endl;
    cout<<"Ingresa el numero del pais que deseas conocer su IVA"<<endl;
    cout<<"1. El Salvador"<<endl;
    cout<<"2. Guatemala"<<endl;
    cout<<"3. Honduras"<<endl;
    cout<<"4. España"<<endl;
    cout<<"Ingrese el numero de tu pais: ";
    cin >> pais;
    cout<<"Ingresa la cantidad de dinero en dolares para conocer su IVA: ";
    cin >> dinero;
    iva1= dinero*0.13;
    iva2= dinero*0.09;
    iva3= dinero*0.15;
    iva4= dinero*0.20;

    if (pais==a)
    {
        cout <<"El IVA total son "<<iva1<<" dolares";
    }
    else if (pais==b)
    {
        cout <<"El IVA total son "<<iva2<<" dolares";
    }
    else if(pais==c)
    {
        cout<<"El IVA total son "<<iva3<<" dolares";
    }
    else if(pais==d)
    {
        cout<<"El IVA total son "<<iva4<<" dolares";
    }
    
    return 0;
}