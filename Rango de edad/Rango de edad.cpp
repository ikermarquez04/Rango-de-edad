#include <iostream>

using namespace std;

int main()
{
    int edad;

    cout << "digitesu edad: ";
    cin >> edad;

    if((edad>=18)&&(edad<=25))
    {
    
        cout << "su edad esta en el rango de 18 a 25";
    }
    else
    {
        cout << "su edad no esta en dicho rango";
    }
    return 0;
}
