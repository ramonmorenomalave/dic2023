#include <iostream>

using namespace std;

/*! Clase Carro */
class Carro (
	public:
		string brand;
		string model;
		int year
)

/*! Main */
int main(){

	/*! Obhjeto Carro */
	Carro carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "XS";
	carObj1.year = 1999;
	
	/*! Objeto Carro */
	Carro carObj2;
	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 1969;
	
	/*! Impresion informacion */
	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
	return ;
}

