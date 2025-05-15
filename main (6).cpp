/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
     // Declarar la variable para el número ingresado
    int numero;

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Verificar si el número es positivo, negativo o nulo
    if (numero > 0) 
    {
        cout << "El número es positivo." << endl;
    }
    else if (numero < 0) 
    {
        cout << "El número es negativo." << endl;
    } 
    else
    {
        cout << "El número es nulo (cero)." << endl;
    }


    return 0;
}