#include <conio.h>
#include <stdio.h>
#include <iostream>
 using namespace std;
 
 int main()
 {
    //Mensaje de bienvenida
    cout << "Hola! Este programa 1.15 calcula el cuantos segundo han pasado en un dia" << "\n";
    
    float  dias,horas , total;
    
    printf ( "\n  Introduzca dias: " );
    scanf(  "%f", &dias );
        
    total = dias*24 * 60 * 60;
    
    printf( "\n En %.0f dias hay %.0f segundos.", dias, total );
    
    getch(); /* Pausa */
    
    return 0;
}
