#include<bits/stdc++.h>
using namespace std;
struct Empleado {
	char nombre[50];
	char sexo[10];
	float sueldo;
	
};
int main(){
    int n;
	Empleado empleados[100];
	cout << "Nro de empleados " << endl;
	cin >> n;
	cin.ignore();

    for(int i=0 ; i<n ; i++){
		cout << "Empleado " << i+1 << endl;
		cout << "Nombre" << endl;
		cin.getline(empleados[i].nombre,50);
		cout << "sexo" << endl;
		cin >> empleados[i].sexo;
		cout << "sueldo " << endl;
		cin >> empleados[i].sueldo;
		cin.ignore();
		cout << "=======================================" << endl;
	}
    float mayor = empleados[0].sueldo;
	float menor = empleados[0].sueldo;

    for(int j=1 ; j<n ; j++){
		if(mayor < (empleados[j].sueldo)){
			mayor = empleados[j].sueldo;
		}
		if(menor > (empleados[j].sueldo)){
			menor = empleados[j].sueldo;
		}
	}
    cout << "El mayor sueldo es de " <<  mayor << endl << "El menor sueldo es de "<< menor;
    return 0;
}