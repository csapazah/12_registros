#include<bits/stdc++.h>
using namespace std;
struct Persona{
	char nombre[50];
	int dia;
	int mes;
	int anio;
};
int main(){
    int n;
	Persona Datos[100];
	cout << "Nro de personas " << endl;
	cin >> n;
	cin.ignore();

    for(int i=0 ; i<n ; i++){
		cout << "Persona " << i+1 << endl;
		cout << "Digite su nombre" << endl;
		cin.getline(Datos[i].nombre,50);
		cout << "Anio de ancimiento" << endl;
		cin >> Datos[i].anio;
		cout << "Mes de nacimiento" << endl ;
		cin >> Datos[i].mes;
		cout << "Dia de nacimiento" << endl;
		cin >> Datos[i].dia;
		cin.ignore();
		cout << "===========================================";
		
	}

    int Mes_leer;
	cout << "DIGITE UN MES" << endl;
	cin >> Mes_leer;
    return 0;
}