/******************************************************************************
Calcular y mostrar la suma de los primeros n números impares. 

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
//declarar las variables    
int i,n,suma;
//ingresar la cantidad de numeros impares
cout <<"Ingrese la cantidad de numeros impares a sumar :";
cin >> n;

suma=0;
//recorrer los n numeros impares
for(i=1;i<=n;i++)
//realizar la identificacion de los n impares para realizar la suma
suma = suma + (2*i-1);
//mostrar en pantalla la suma  de n numeros impares

cout<<"La suma de los primeros numeros impares es :"<<suma;

return 0;
}
