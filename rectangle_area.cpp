/******************************************************************************

Realizar un programa que calcule el área y el perímetro de un rectángulo y
muestre el resultado en pantalla, sabiendo que: .

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    
    //declaracion de varibles
    int base, altura;
    cout<<"Ingrese la base "<<endl;
    //ingreso de las valores de las variables base y altura
    cin>>base;
    cout<<"Ingrese la altura"<<endl;
    cin>>altura;
    //relaizar las operaciones calculo area y perimetro
    cout<<"El area del Rectangulo es :"<<(base*altura)<<endl;
    cout<<"El perimetro es :"<<(2 * base )+ (2 * altura)<<endl;
    return 0;
}