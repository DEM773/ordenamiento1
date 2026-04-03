#include <iostream>
#include "Alumno.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct{
	char x[90], b[10];
	double c;
}AlumnoS;

int main (int argc, char** argv){
	cout << "tamaño de un entero" <<sizeof (argc) <<endl <<endl <<endl;
	Alumno a = Alumno ();
	cout << "tamaño de un entero -- " <<sizeof (a) <<endl <<endl <<endl;
	cout << "tamaño de un entero -- " <<sizeof (AlumnoS) <<endl <<endl <<endl;
	
	a.msg();
	return 0;
}
