/******************************************************************************

Realizar un triángulo rectángulo de asteriscos con lado igual a n. .

*******************************************************************************/

#include <iostream>
using namespace std;

int main(void)
{
    //declaramos las variables
    int lineas,i,j;
    cout  <<"Ingresa la cantidad de asteriscos para elaborar triángulo: ";
    //ingresama el numero de linea con que se formara el triangulo con asteriscos
    cin >> lineas;
    //realizamos doble for para elaborar la forma del trazos del triangulo
    for (i = 1; i <= lineas; i++)
    {
       
        for (j = 0; j < i; j++)
        {
             cout  <<"*";
        }
         cout  <<"\n";
    }
    return 0;
}