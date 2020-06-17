#include <iostream>
using namespace std;
int main(){
    int hora, minuto, segundo;
    char c;
    cout<<"En este programa se sumara un segundo a la hora ingresada"<<endl;
    //Por ejemplo: 13:45:28 | 16:23:59 |  09:59:59
    //Se veria:    13:45:29 | 16:24:00 |  10:00:00
    cout<<"Ingresa la hora que deseas en formato de 24 horas"<<endl;
    cout<<"Ingresa la hora en este formato <hora:minutos:segundos>: ";
    cin>>hora>>c>>minuto>>c>>segundo;
    segundo = segundo + 1;
    if(segundo>=60){
        segundo=00;
    minuto = minuto + 1;
    if(minuto>= 60){
        minuto=00;
    hora = hora + 1;
    if(hora>=24){
        hora=00;
    }}}
    
    cout<<"La hora con un segundo agregado es: "<<hora<<c<<minuto<<c<<segundo;
    

    return 0;
}