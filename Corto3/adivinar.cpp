#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
int intento=5, adivinar=45, numero;
    cout<<endl;
    //En este programa se podra jugar de adivinar un numero con 5 intentos//
    cout<<"Juega y adivina un numero"<<endl;
cout<<endl<<"Si ya no quieres jugar, ingresa el numero 0"<<endl;
//Usare do while para la repeticion de los intentos//
do{
//con if se encargara de dar pistas si el numero escogido es mayor o menor y tambien servira para poder salir del juego//
    cout<<"Piensa en un numero entre el 1 y el 100: ";
    cin>>numero;
    if(numero==0){
        break;
    }
    if(numero>adivinar){
        cout<<endl;
        cout<<"Ingresa un numero menor al que pensaste"<<endl;
        intento--;
    cout<<"Te quedan "<<intento<<" intentos"<<endl;
    }
    if(numero<adivinar){
        cout<<endl;
        cout<<"Ingresa un numero mayor al que pensaste"<<endl;
        intento--;
    cout<<"Te quedan "<<intento<<" intentos"<<endl;
    }
    if(numero==adivinar){
        cout<<"Felicidades, adivinaste el numero";
    }
//Aqui se sabra si gano o no adivino en los 5 intentos//
}while(intento>0 && numero!=adivinar);
    cout<<endl;
    system("pause");
    return 0;
}