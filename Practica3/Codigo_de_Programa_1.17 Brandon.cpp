#include <stdio.h>
#include <math.h>
 #include <iostream>
  using namespace std;
  
int main()
{
	//Mensaje de bienvenida
	cout << "Hola! Este programa 1.17 calcula la distancia entre dos puntos en un plano" << "\n";
	
	float x1, x2, y1, y2;
	float distancia;
	
	 printf("\nPrimer punto;\n");
	 printf("X1: "); scanf("%f", &x1);
	 printf("Y1: "); scanf("%f", &y1);
	 
	 printf("\nSegundo punto;\n");
	 printf("X2: "); scanf("%f", &x2);
	 printf("Y2: "); scanf("%f", &y2);
	 
	 distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("\nDistancia: %.2f\n", distancia);
	
	return 0;
}
