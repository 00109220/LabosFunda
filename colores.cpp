#include <iostream>
using namespace std;
int main(){
    int color, a=1, b=2, c=3, d=4, e=5;
    cout<<"Gana dinero seleccionando un color!"<<endl;
    cout<<"Selecciona el numero de los siguientes colores:"<<endl;
    cout<<"1. Azul"<<endl;
    cout<<"2. Rojo"<<endl;
    cout<<"3. Verde"<<endl;
    cout<<"4. Amarillo"<<endl;
    cout<<"5. Negro"<<endl;
    cout<<"Escribe el numero de tu color: ";
    cin>> color;
    if (color==a)
    {
        cout<<"Usted ha ganado 10 dolares";
    }
    else if (color==b)
    {
        cout<<"Usted ha ganado 20 dolares";
    }
    if (color==c)
    {
        cout<<"Usted ha ganado 30 dolares";
    }
    if (color==d)
    {
        cout<<"Usted ha ganado 50 dolares";
    }
    if (color==e)
    {
        cout<<"Usted ha ganado 100 dolares";
    }
    return 0;
}