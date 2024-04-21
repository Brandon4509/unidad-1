#include "iostream"
#include "string"
#include "math.h"

using namespace std;
int main ()
{
	//mensaje de  bienvenida 
	cout << "hola! este program 1.8 imprime la escritura de la matricula y el promedio  de 5 notas de un alumno" << "\n";
	float matricula, a, b, c, d, e;
	
     cout<<"introduzca el numero de matricula del alumno:   ";
	 cin>>matricula;
	 
	 cout<<"introdusca la primera calificacion:   ";
	 cin>>a;
	 
	 cout<<"introdusca la segunda calificacion:   ";
	 cin>>b;
	  
	 cout<<"introdusca la tercera calificacion:   ";
	 cin>>c;
	 
	 cout<<"introdusca la cuarta calificacion:   ";
	 cin>>d;
	
	 cout<<"introdusca la quinta calificacion:   ";
	 cin>>e;
	 
	 cout<<"la matricula del alumno es  " <<matricula<<endl;
	 
	 cout<<"el proimedio es:     "<<((a+b+c+d+e)/5)<<endl;
	 
	 cin.get();cin.get();
	
return 0;
}
