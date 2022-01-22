/******************************************************************************

Realizar un programa que calcule el área y el perímetro de una circunferencia 
de radio R introducido por el usuario. 

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    //declarar la varibles
    float radio;
    //asignar el valor a la constante PI
    float pi=3.141592 ;
    //ingresar valor del radio
    cout<<"Introduzca radio: ";
    cin >> radio ;
    //realizar el calculo de area y permitero de la circunferencia
    cout<<"El area de la circunferencia es: "<<(pi* radio * radio)<<endl;
    cout<<"El perimetro de la circunferencia es: "<<2*pi* radio * radio<<endl;
   
    return 0;
}
