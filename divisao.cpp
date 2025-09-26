#include <iostream>

using namespace std;

int main()
{
    int dividendo = 0;
    cout << "Informe o dividendo: ";
    cin >> dividendo;

    int divisor = 0;
    cout << "Informe o divisor: ";
    cin >> divisor;

    int temp = dividendo;
    int total = 0;
    
    while (temp >= divisor)
    {
        temp -= divisor;
        total += 1;
    }

    cout << "O resultado inteiro da divisao " << dividendo << "/" << divisor << ": " << endl;
    cout << total << endl;

    system("pause");

    return 0;
}