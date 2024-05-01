#include <iostream>

using namespace std;


int main()
{
	//mensaje de Bienvenida
	cout << "Hola :) Estre programa 3 de Unidad 2" << "\n";
	
	//Se declara los numeros que se sumaran (pueden ser decimales)
	float NOTA;
	
	//Se pide el primer numero 
	cout << "Por favor ingrese la calificacion:   ";
	
	//se asigna el primer valor de NOTA 
	cin >> NOTA;
	
	if (NOTA>=3.0)
	            cout << " Aprobado" ;
	    else
	            cout<<"Reprobado";
	//se muestra el resultado.
	
	return 0;

}
