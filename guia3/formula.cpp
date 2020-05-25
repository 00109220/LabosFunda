#include <iostream>
#include <math.h>
using namespace std;
float a, b, c, x_1, x_2, det;
int main(){
   
cout <<"Bienvenido, ingresa tu ecuacion" << endl;
cout <<"ax2 + bx + c = 0" << endl;
cout <<"Ingrese a: ";
cin >> a;
cout <<"Ingrese b: ";
cin >> b;
cout <<"Ingrese c: ";
cin >> c;
det = b*b - 4.00*a*c;
if (det>0){
   x_1 = (-b+(pow(det, 0.5)))/(2*a);
   x_2 = (-b-(pow(det, 0.5)))/(2*a); 
   cout << "x_1: " << x_1 << endl;
   cout << "x_2: " << x_2 << endl;
}
if (det==0){
    x_1 = (-b)/(2*a);
    x_2 = x_1;
    cout << endl<< "x_1 = x_2 = " << x_1;
}


      return 0;
}