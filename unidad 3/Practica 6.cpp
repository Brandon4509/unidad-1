#include <iostream>
using namespace std;

int main()
{
int A, B, C;
	//mensaje de Bienvenida 
	cout <<"Hola :) Este programa 6 Unida 2" << "\n";
 
    //Se ingresa 3 numeros
    cout << "Escribe un numero   " << "\n";
	cin>>A;
	
	cout << "Escribe otro numero   " << "\n";
	cin>>B;
	
	cout << "Escribe otro numero   " << "\n";
	cin>>C;
	
	if (A>B)
	        if (B>C)
	                if(B>C)  {
					         cout << A<<"  "<<B<<"  "<<C<< "\n"; }  
					else    
					        {cout << A<<"  "<<C<<"  "<<C<< "\n"; }
			else {cout << C<<"  "<<A<<"  "<<B<< "\n"; }
	else    
	        if (B>C)
	                if (A>C)
	                        {cout << B<<"  "<<A<<"  "<<C<< "\n"; }
	                else   {cout << B<<"  "<<C<<"  "<<A<< "\n"; }
	        else
	         {cout << C<<"  "<<B<<"  "<<A<< "\n"; }
   return 0 ;
}
