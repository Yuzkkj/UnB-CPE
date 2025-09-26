#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    cout << "Digite um numero pra checar se e triangular: ";
    cin >> numero;

    string soma = "";
    int total = 0;
    
    for (int i = 1; i < numero; i++)
    {
        total += i;
        soma += to_string(i);

        if (total == numero)
        {
            cout << "O numero " << numero << " e triangular." << endl;
            cout << soma << endl;
            return 1;
        }
        else
        {
            soma += '+';
        }
    }

    cout << "O numero " << numero << " nao e triangular." << endl;

    return 0;
}