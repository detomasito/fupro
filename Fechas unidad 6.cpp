#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int fecha,fecha1;
	string nombre,nombre1;
	cout<< " ingrese su nombre "; cin >> nombre;
	cout << "ingrese la fecha en el siguiente formato aaaammdd "; cin >> fecha;
	
	cout<< " ingrese su nombre "; cin >> nombre1;
		cout << "ingrese la fecha en el siguiente formato aaaammdd "; cin >> fecha1;
		
		int dia1 = fecha%100;
		int dia2 = fecha1%100;
		int anio1 = fecha/10000;
		int anio2 = fecha/10000;
		int mes1 = (fecha%10000)/100;
		int mes2 = (fecha%10000)/100;
		
		cout << nombre <<"...."<< dia1<< "/"<< mes1<< "/"<<anio1<<endl;
		cout << nombre1 <<"...."<< dia2 <<"/"<< mes2<< "/"<<anio2<<endl;
	return 0;
}

