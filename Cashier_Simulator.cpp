/******************************************************************************
Simular un cajero automático con 5 billetes de 50, 5 billetes de 20 y 5 billetes
de 10, en el cual se ingresará un número y determinara cuanto se entregó y cuantos
billetes de cada uno queda. Si el cajero no tiene la cantidad necesaria como para 
pagar, entonces se dará el monto que tiene el cajero como máximo. 

*******************************************************************************/


#include <iostream>
using namespace std;
// declaracion de la variables
int cien,cincuenta,veinte,diez,cinco,uno;
int main(){

//se inicializa las constantes con un valor 0  
    int dinero,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
    cout<<"Buenos dias ingrese el monto a retirar: ";
    cin>>dinero;
    
    //contar billetes de 100
    cien=dinero/100;
    dinero=dinero%100;
    //contar billetes de 150
    cincuenta=dinero/50;
    dinero=dinero%50;
    //contar billetes de 20
    veinte=dinero/20;
    dinero=dinero%20;
    //contar billetes de 10
    diez=dinero/10;
    dinero=dinero%10;
    //contar billetes de 5
    cinco=dinero/5;
    dinero=dinero%5;
    //contar billetes de 100
    uno=dinero;
    //mostrar la salida en pantalla la distribucion
    cout<<"Aquie esta la distribucion de billetes del monto seleccionado\n";
    cout<<"Cien:"<<cien<<"\n";
    cout<<"Cincuenta:"<<cincuenta<<"\n";
    cout<<"Veinte:"<<veinte<<"\n";
    cout<<"Diez:"<<diez<<"\n";
    cout<<"Cinco:"<<cinco<<"\n";
    cout<<"Uno:"<<uno<<"\n";
   
    return 0;
}