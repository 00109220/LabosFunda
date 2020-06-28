#include <iostream>
using namespace std;
//Funcion para calcular la media de las 25 estaturas
float calcularMedia(float estatura []){
    float suma=0.0,promedio;
    for(int i=0;i<25;i++){
        suma = suma+estatura[i];
    }
    promedio = suma/25;
    cout<<"La media de estatura es: "<<promedio<<endl;
    return promedio;
}
//Funcion para saber que estaturas estan por debajo o arriba de la media
int calcularAbajoyArriba(float estatura [], float promedio){
    int menor=0, mayor=0,igual=0;
    for(int i=0;i<25;i++){
        if(estatura[i]<promedio){
            menor++;
        }
        if(estatura[i]>promedio){
            mayor++;
        }
    }
    cout<<"Estaturas menores a la media: "<<menor<<endl;
    cout<<"Estaturas mayores a la media: "<<mayor<<endl;
    return 0;
}
int main(){
    float estatura[25], promedio;
    cout<<endl<<"Calcular la media de la estatura de 25 estudiantes"<<endl;
    cout<<"Ingresa las estaturas en centimetros"<<endl;
     for(int i=0;i<25;i++){
        cout<<"Ingrese estatura "<<i+1<<endl;
        cin>>estatura[i];
    }
    promedio=calcularMedia(estatura);
    calcularAbajoyArriba(estatura,promedio);
    return 0;
}