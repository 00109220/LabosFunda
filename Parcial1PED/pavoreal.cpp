#include <iostream>
#include <string>

using namespace std;

struct Pavos{
	string nombre1[6];
	char sexo[6];
	int edad[6];
	int peso[6];
};
struct Pavos reales;
void pedirnombre();
void pediredad();
void pedirpeso();
void pedirsexo();
int main(){
	pedirnombre();
	pediredad();
	pedirpeso();
	pedirsexo();
	
}
void pedirnombre(){
	for(int i=0; i<6; i++){
		cout<<"Ingresa el nombre del pavo "<<i+1<<":";
		getline(cin, reales.nombre1[i]);
	}
};
void pediredad(){
	cout<<endl;
	for(int i=0; i<6; i++){
		cout<<"Ingresa la edad del pavo "<<i+1<<" anios:";
		cin>>reales.edad[i];
	}
	
};
void pedirpeso(){
	cout<<endl;
	for(int i=0; i<6; i++){
		cout<<"Ingresa el peso del pavo "<<i+1<<" libras(numero entero):";
		cin>>reales.peso[i];
	}
	
};
void pedirsexo(){
	int macho=0, hembra=0;
	cout<<endl;
	for(int i=0; i<6; i++){
		cout<<"Ingresa la letra 'H' si es hembra o 'M' macho el pavo "<<i+1<<":";
		cin>>reales.sexo[6];
	
		switch(reales.sexo[i]){
			case 'h' : hembra = hembra+1; break;
			case 'm' : macho = macho+1; break;
		}
	}
	cout<<"Hay "<<hembra<<" pavos hembras";
	cout<<endl;
	cout<<"Hay "<<macho<<" pavos machos";
};


