
#include <iostream>
using namespace std;
int main()
{
    int num1; // declaro la primera variable
    float total; // declaro la segunda variable
    
    cout << "este programa ve si un numero es par o inpar"<<endl; //le indica al usuario lo que hace el programa
    // Solicita al usuario que ingrese un numero
    cout << "ingrese un numero: ";
    cin >> num1;
    
    total = num1 % 2; // hace una operacion al num1 y guarda el resultado en la variable total
    if (total==0) // verifica si lavariable total es igual 0
    {
    cout << num1 << " es un numero par";
    }
    else //si no se cumplio la anterior funcion se ejecutara esto
    {
        cout << num1 << " es un numero inpar";
    }

    return 0;
}
