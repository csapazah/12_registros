#include<bits/stdc++.h>
using namespace std;
struct Persona{
	char nombres[50];
	char DNI[10];
	int edad;
	
};
int main(){
    int n ;
	Persona Identidad[100];
	cout << "Nro de personas " << endl;
	cin >> n;
    cin.ignore();

    for(int i=0 ; i<n ; i++){
		cout << "Persona " << i+1 << endl;
		cout << "Nombre " << endl;
		cin.getline(Identidad[i].nombres,50);
		cout << "Nro de DNI " << endl;
		cin.getline(Identidad[i].DNI,10);
		cout << "Edad " << endl;
		cin >> Identidad[i].edad;
		cin.ignore();
		cout << "====================================" << endl;
	}
    int cont_edad = 0,prom,suma = 0;
    for(int j=0 ; j<n ; j++){
		if((Identidad[j].edad)>50){
			cont_edad++;
		}
		suma = suma + Identidad[j].edad;
    }
    prom = suma / n;
    
    cout << "Mayores de 50 " << endl << cont_edad << endl;
	cout << "Promedio de edades" <<endl << prom << endl;
	cout << "Participantes " << endl ;
	for(int k=0 ; k<n ; k++){
		cout << Identidad[k].nombres << endl;
	}

    return 0;
}