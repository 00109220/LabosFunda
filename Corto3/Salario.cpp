#include <iostream>
using namespace std;
int main(){
    int i, empleados;
    float hora, hora_extra, valor_hora, valor_extra, sueldo_total, sueldo_real;
cout<<"Bienvenido a la planilla de salario"<<endl;
cout<<"Ingresa el numero de empleados de tu empresa: ";
cin>> empleados;
cout<<endl;
//Uso de la funcion for//
for (int i= 0; i < empleados; i++)
{
cout<<"Horas que ha trabajado el empleado"<<endl;
cout<<"Horas laborales: ";
cin>>hora;
cout<<"Horas extras: ";
cin>>hora_extra;
//Calcular el salario de las horas trabajadas//
valor_hora = 1.75*hora;
valor_extra = 2.50*hora_extra;
sueldo_total = valor_hora+valor_extra;
cout<<"El salario de horas laborales es: "<<valor_hora<<" y el salario de horas extras es: "<<valor_extra<<endl;
cout<<"El salario total de horas trabajadas es: "<< sueldo_total<<endl;
//Descuentos del salario total//
//Uso de if para saber si el salario es mayor a 500 dolares//
if(sueldo_total>=500){
    sueldo_real= sueldo_total-(sueldo_total*0.004)-(sueldo_total*0.0625)-(sueldo_total*0.1);
    cout<<"El salario real es: "<<sueldo_real<<" dolares"<<endl;
}
else{
    sueldo_real= sueldo_total-(sueldo_total*0.004)-(sueldo_total*0.0625);
    cout<<"El salario real es: "<<sueldo_real<<" dolares"<<endl;
}
}
    return 0;
}