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

	Fecha* s = NULL;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->getdia() << "/" << s->getmes() << "/" << s->getanio() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->getdia() << "/" << s->getmes() << "/" << s->getanio() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->getdia() << "/" << s->getmes() << "/" << s->getanio() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->getdia() << "/" << s->getmes() << "/" << s->getanio() << endl;
        
	return 0;
}