#include <conio.h>
#include <stdio.h>
#include <iostream>
 using namespace std;
 
 int main()
 {
    //Mensaje de bienvenida
    cout << "Hola! Este programa 1.17 calculo de galones de una gasolinera" << "\n";
    
    float  galones , total;
    
    printf ( "\n  Introduzca cantida de galones: " );
    scanf(  "%f", &galones );
        
    total = galones*3.785*8.20;
    
    printf( "\n En %.2f galones son  %.2f pesos.", galones, total );
    
    getch(); /* Pausa */
    
    return 0;
}
