#include<iostream>
using namespace std;
void cuadrado (int &x);
void cubo(int &x);

void cuadrado(int &x){
	x=x*x;
}

void cubo(int &x){
	x=x*x*x;

}
int main(){

    //mensaje de bievenida 
    cout <<"hola! Este programa 1.9 calcula el cuadrado y el cubo de numero entero positivos"<< "\n";
 
    int n;
    cout<<"ingresa un numero: ";
    cin>> n;
    cuadrado (n);
    cout<< "El numero elevado al cuadrado es: "<<n;
    cout<<"\n ingresa un numero:  ";
    cin>>  n;
    cubo(n);
    cout<< "El numero elevado al cubo es:  "<<n;
    return(0);
}
