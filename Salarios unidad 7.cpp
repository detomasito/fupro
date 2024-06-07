#include <iostream>
using namespace std;
//Una Empresa paga a sus 25 operarios semanalmente de acuerdo con la
	//cantidad de horas trabajadas, a razón de X pesos la hora hasta 40 hs. y un 50%
	//más por todas las horas que pasan de 40. Escriba un programa que permita
	//ingresar el costo inicial por hora (X), y luego la cantidad de horas trabajadas por
	//cada empleado e informe el salario que le corresponde cobrar. Finalmente, debe
	//informar a modo de resumen: a) los salarios máximo, mínimo y promedio, y b) el
	//monto total que la empresa pagó en concepto de salarios.
int main(int argc, char *argv[]) {
	double costoHora,salario,Minsalario = 9999,Maxsalario = 0,PromSalario = 0,TotalSalario = 0;
	int Horas;
	
	
	cout << " cual es el costo por hora? "; cin >> costoHora;
	
	for ( int i =0; i<25;++i){
		cout << "cuantas horas trabajo "<<i+1<<"? ";
	cin >>Horas;
	if (Horas <=40){
		salario =costoHora*Horas;
	}else{
		salario = 40* costoHora +(Horas-40)*costoHora*1.5;
    }
	Maxsalario = max(Maxsalario,salario);
	Minsalario = min(Minsalario,salario);
	PromSalario += salario;
	TotalSalario += salario;
	}
	PromSalario /25;
	
	cout << " el maximo de salario pagado es de "<<Maxsalario<<endl;
	cout << " el minimo de salario pagado es de " <<Minsalario<<endl;
	cout << " el promedio de los salarios es de "<<PromSalario<<endl;
	cout << " el total de los salarios pagados es de " <<TotalSalario<<endl;
	
	
	
	return 0;
}

