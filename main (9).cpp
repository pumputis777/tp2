
#include <iostream>
using namespace std;
int main()
{
    int num1;
    float total;
    cout << "este programa ve si un numero es par o inpar"<<endl;
    cout << "ingrese un numero: ";
    cin >> num1;
    total = num1 % 2;
    if (total==0)
    {
    cout << num1 << " es un numero par";
    }
    else
    {
        cout << num1 << " es un numero inpar";
    }

    return 0;
}
