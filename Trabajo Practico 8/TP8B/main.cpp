#include <cstdlib>
#include "Pila.h"
#include <iostream>

using namespace std;


int main() {
	Pila p;

	p.push(new Fecha(1,2,3));
	p.show();
	cout << endl;

	p.push(new Fecha(4,5,6));
	p.show();
	cout << endl;

	p.push(new Fecha(7,8,9));
	p.show();
	cout << endl;

	p.push(new Fecha(10,11,12));
	p.show();
	cout << endl;

	p.push(new Fecha(13,14,15));
	p.show();
	cout << endl;

	cout << "Eliminando Fecha '1,2,3': " << (p.pop(new Fecha(1,2,3)) == true ? "true" : "false") << endl;
	p.show();
	cout << endl;

	cout << "Eliminando Fecha '10,11,12': " << (p.pop(new Fecha(10,11,12)) == true ? "true" : "false") << endl;
	p.show();
	cout << endl;

	cout << "Eliminando Fecha '4,5,6': " << (p.pop(new Fecha(4,5,6)) == true ? "true" : "false") << endl;
	p.show();
	cout << endl;

	return 0;
}


