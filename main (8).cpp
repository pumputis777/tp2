
#include <iostream>
using namespace std;
int main()
{
    float A; // declaro la primera variable
    float B; // declaro la segunda variable
    float C; // declaro la tercera variable
    
    cout << "este programa ve cual es el mayor y cual el menor de 3 numeros" <<endl; //le indica al usuario lo que hace el programa
    // Solicitar al usuario que ingrese los 3 números
    cout << "ingrese el primer numero :";
    cin >> A;
    cout << "ingrese el segundo numero :";
    cin >> B;
    cout << "ingrese el tercer numero :";
    cin >> C;
    if (A==B and B==C) // verifica si A es igual B y a C
    {
        cout << "los tres numeros son iguales ingrese otros";
        return 0;
    }
    if (A>B and A>C and B>C) // si no se cumplio la anterior condicion va a verificar si A es mayor a B y a C y si B es mayor a C
    {
      cout << "el numero mas grande es: " << A << " y el menor es: " << C;
    }
    else if (B>A and B>C and C>A) // si no se cumplieron las anteriores condiciones va a verificar si B es mayor a A y a C y si C es mayor a A
    {
      cout << "el mayor numero es: " << B << " y el menor es: " << A;     
    }
    else if (C>A and C>B and A>B) // si no se cumplieron las anteriores condiciones va a verificar si C es mayor a A y a B y si A es mayor a B
    {
      cout << "el mayor es: " << C << " y el menor es: " << B;    
    }
     else if (B>A and B>C and A>C) // si no se cumplieron las anteriores condiciones va a verificar si B es mayor a A y a C y si A es mayor a C
    {
      cout << "el mayor es: " << B << " y el numero mas chico es: " << C;    
    }
     else if (A>C and A>B and C>B) // si no se cumplieron las anteriores condiciones va a verificar si A es mayor a C y a B y si C es mayor a B
    {
      cout << "el mas grande es: " << A << " y el mas chico es: " << B;    
    }
     else if (C>A and C>B and B>A) // si no se cumplieron las anteriores condiciones va a verificar si C es mayor a A y a B y si B es mayor a A
    {
      cout << "el mayor es: " << C << " y el mas chico es: " << A;    
    }
    return 0;
}
