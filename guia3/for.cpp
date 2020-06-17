#include <iostream>
using namespace std;
int main(){
string nombre;
int i, n;
cout << endl;
cout << "IMPRIMIR SU NOMBRE Y CONTEO DESCENDENTE" << endl << endl;
cout << "Digite su nombre: ";
cin >> nombre;
cout << "¿Cuantas veces desea imprimirlo? ";
cin >> n;
for (i = n; i >= 1; i = i - 1)
{
cout << i << " ";
cout << nombre << endl;
}
cout << endl;
return 0;
}