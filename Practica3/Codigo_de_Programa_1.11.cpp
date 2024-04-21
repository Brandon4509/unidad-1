#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
	//mensaje de bienvenida 
	cout << "Hola! Este prgram 1.11 Calcula el cambio que se le entra a un cliente" <<"\n";
	
	
	float cantidad_de_dinero,cambios,_articulo;
	    
	    printf("ingrese el costo del articulo vendido:  ");
	    scanf("%f",&_articulo);
	    printf("ingrese la cantidad de dinero entregado por el cliente:  ");
	    scanf("%f",&cantidad_de_dinero);
	    cambios=cantidad_de_dinero-_articulo;
	    printf("El cambio que se debe entregar al cliente es de %.2f  ",cambios);
	   
	printf("\nPresione una tecla para continuar...");
	getch();
	return 0;
	
	
}
