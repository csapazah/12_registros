#include<bits/stdc++.h>
using namespace std;
struct Atleta{
	char nombre[50];
	char pais[20];
	char disciplina[30];
	int medallas;
};
int main(){
    int n;
	Atleta Deportista[100];
	cout << "Nro de deportistas " << endl;
	cin >> n;
	cin.ignore();

    for(int i=0 ; i<n ; i++){
		cout << "Persona " << i+1 << endl;
		cout << "Digite su nombre" << endl;
		cin.getline(Deportista[i].nombre,50);
		cout << "Su Pais" << endl;
		cin.getline(Deportista[i].pais,20);
		cout << "Su disciplina" << endl ;
		cin.getline(Deportista[i].disciplina,30);
		cout << "Su Nro. de medallas" << endl;
		cin >> Deportista[i].medallas;
		cin.ignore();
		cout << "===========================================" << endl;
		
	}
    return 0;
}