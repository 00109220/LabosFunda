#include <iostream>
#include <math.h>
using namespace std;
int main(){
int radio;
float area;
float perimetro;
cout <<"Bienvenidos al calculo de area y perimetro de un circulo"<<endl;
cout <<"Ingrese en cm el radio del circulo" << endl;
cout <<"El radio es: ";
cin >> radio;
cout <<"El area del circulo es: ";
area = 3.1415 * pow(radio, 2);
cout << area << endl;
cout <<"El perimetro del circulo es: ";
perimetro = 2 * 3.1415 * radio;
cout << perimetro;


    return 0;
}