#include <iostream>
using namespace std;

int main()
{
	//mensaje de Bienvenida 
	cout <<"Hola :) Este programa 4 Unida 2" << "\n";
	
	//Se declara los nueros que se usaran (puede ser decimales)
	float SUELDO, aum, nsue;
	
	//Se pide el primer numero
	cout << "Por favor ingrese el suledo:  ";
	
	//se asigna el primer valor o SUELDO
	cin >> SUELDO;
	
if (SUELDO < 400000.00)
     {
       aum = SUELDO * 0.15;
       nsue = SUELDO + aum;
      }
    else
       nsue=SUELDO*1.08;
       
       
       
    //se muestra el resultado 
    cout << "El nuevo sueldo es   " <<nsue;
   
    
    return 0;

}
