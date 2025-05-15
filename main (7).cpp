
#include <iostream>
using namespace std;
int main()
{

    float num1; // Declaro la primera variable
    float num2; // Declaro la segunda variable

    // Solicita la carga de dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Verifica si el primer número es mayor que el segundo
    if (num1 > num2) // Verifica si se cumple una condicion ( primer número es mayor que el segundo)
    {
        // Si es mayor, muestra la suma y la diferencia
        cout << "La suma de los dos números es: " << num1 + num2 << endl;
        cout << "La diferencia del primero respecto al segundo es: " << num1 - num2 << endl;
    }
    else // si no se cumplio la anterior condicion se ejecuta lo siguiente
    {
        // Si no es mayor, muestra el producto y la división
        cout << "El producto de los dos números es: " << num1 * num2 << endl;
        cout << "La división del primero respecto al segundo es: " << num1 / num2 << endl;
    }

    return 0;
}
