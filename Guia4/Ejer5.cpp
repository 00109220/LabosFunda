#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char palabra[25];
    int inicio_fin;
    cout<<"Verifica si una palabra empieza y termina con la misma letra"<<endl;
    cout<<"Ingresa tu palabra: ";
    cin>>palabra;
    inicio_fin=strlen(palabra);
    
    cout<< "la primer letra digitada es: "  << palabra[0]<< endl;
    
    cout<< "la ultima letra digitada es: "  << palabra[inicio_fin-1] << endl;
    if(palabra[0]==palabra[inicio_fin-1]){
        cout<<"La palabra si inicia y termina con la misma letra";
    }
    else{
        cout<<"La palabra no inicia ni termina con la misma letra";
    }




    return 0;
}