#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
    int n;
		cout << " ingrese el numero N: ";
	cin >> n;

	cout << " a) creciente"<<endl;
	cout << "b) decreciente" << endl;
	char opcion; cin>>opcion;
	
	if (opcion =='a'){
	cout<< " los numeros de forma creciente son" <<endl;
	int i =2;
		while (i<n){
			cout << i <<endl;
			i+=2;
		}
	}else { 
		(opcion =='b');
			cout<< " los numeros de forma creciente son" <<endl;
			int i =n;
			if (n%2==0) i-= 2; else i-=1;
			while (i>=2){
				cout << i <<endl;
				i-=2;
	}
	}
	return 0;
}

 
