
#include <iostream>
using namespace std;
int main()
{
     // Declarar la variable para el número ingresado
    int numero; // Declaro una variable

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero > 0) // Verifica si se cumple una condicion (que la variable numero se a mayor a 0)
    {
        cout << "El número es positivo." << endl;
    }
    else if (numero < 0) // si no se cumplio la anterior condicion aca va a verificar que se cumpla otra condicion (que la variable numero se a menor a 0)
    {
        cout << "El número es negativo." << endl;
    } 
    else // si no se cumplio ninguna de las anteriores condiciones se va a ejecutar lo siguiente
    {
        cout << "El número es nulo (cero)." << endl;
    }


    return 0;
}
