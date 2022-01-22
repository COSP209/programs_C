/******************************************************************************
Determine la cantidad de cifras de un número. 
Ejemplo:  si n=58 -> el número de cifras es 2 
*******************************************************************************/

#include <iostream>
 
using namespace std;

int main()
{
    //declarar la variables 
        int n, cifras;
       //ingreso del numero analisar las cifras   
            cout << "\nN: ";
            cin >>n;
    //esta variable es el contador de cifras
            cifras= 0;   
    //mientras a n le queden cifras
            while(n!=0){  
    //le quitamos el último dígito            
                    n = n/10;    
    //sumamos 1 al contador de cifras
                   cifras++;          
            }
            
            cout << "El número de cifras de numero ingresado es  :" <<cifras<< endl;
            
}


