#include <iostream>
#include <string>
using namespace std;
string cadena(string);
int main(){
   string codigo;
   cout<<"Ingresa el texto que deseas"<<endl;
   getline(cin, codigo);
   cout<<cadena(codigo)<<endl;
}
    string cadena(string cade){
        string codi;
        int palabra = cade.length();
        for(int i=0;i<palabra;i++){
            string selec;
            char leer=cade.at(i);
            selec = leer;
        switch(leer){
            case 'm':
            selec = "0";
            break;
            case 'u':
            selec = "1";
            break;
             case 'r':
            selec = "2";
            break;
            case 'c':
            selec = "3";
            break;
             case 'i':
            selec = "4";
            break;
            case 'e':
            selec = "5";
            break;
             case 'l':
            selec = "6";
            break;
            case 'a':
            selec = "7";
            break;
             case 'g':
            selec = "8";
            break;
            case 'o':
            selec = "9";
            break;
            default:
            break;
        }
        codi = codi.append(selec);
        }
    return codi;
}