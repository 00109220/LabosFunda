#include <iostream>
using namespace std;
//Este apartado es para condicionar los meses que tienen 30 o 31 dias
//En el caso de febrero, saber si es en año bisiesto o no
int diasmes(int mes, int year){
    int dias = 31;
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        dias = 30;
    }
    else if (mes == 2){
        if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0){
        dias = 29;
        }
        else dias = 28;
    }
    return dias;
}
//El fin de este programa es sumar un dia a la fecha ingresada
int main(){
int dia, mes, year;
char barra;
cout<<"Se sumara un dia a la fecha que ingreses"<<endl;
cout<<"Ingresa la fecha en este formato <00/00/0000>: ";
cin>>dia>>barra>>mes>>barra>>year;
dia++;
if(dia>diasmes(mes, year)){
    dia=1;
    mes++;
    if(mes>12){
        mes=1;
        year++;
    }
    
}
cout<<"La fecha es: "<<dia<<barra<<mes<<barra<<year;
return 0;
}