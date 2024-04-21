#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define pi 3.141593
 using namespace std;
 
 int main()
 {
    //Mensaje de bienvenida
    cout << "Hola! Este programa 1.14 calcula la altura y el radio de un cilindro" << "\n";
    
    const double Pi = 3.141593;
    double  H, R, V, A;
    printf(" ** CALCULO DEL VOLUMEN DE UN CILINDRO  **\n\n");
    printf (" Introduzca el RADIO, en metros: ");
    scanf (" %lf", &R);
    printf ("\n  Introduzca la altura, en metros: ");
    scanf (" %lf", &H);

    V =Pi *pow(R,2) * H;
    A = 2*pi*R*H;
    printf ("\n\n El volumen del cilindro es de %.2f metros cubicos", V);
    printf ("\n\n El Area del cilindro es de %.2f metros cubicos", A);
    
    return 0;
}
