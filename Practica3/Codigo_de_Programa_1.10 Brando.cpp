#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//Mensaje de bienvenida
	cout <<"Hola! Este programa 1.10 calcula la base y la altura de un rectangulo" <<"\n";
	
	float base, altura, area, perimetro;
	// Solicitar las medidas del rectángulo al usuario
	std::cout << "Ingrese la base del rectángulo: ";
	std::cin >> base;
	std::cout << "Ingrese la altura del rectángulo: ";
	std::cin >> altura;
	// Calcular el área y el perímetro
	area = base * altura;
	perimetro = 2 * (base + altura);
	// Mostrar los resultados
	std::cout << "El área del rectángulo es:  "<< fixed << setprecision(2)<<area << std::endl;
	std::cout << "El perímetro del rectángulo es: " << fixed << setprecision(2) <<perimetro << std::endl;
	

	return 0;
}
