#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string frase = "";
    cout << "Digite uma frase para verificar se e palindromo: ";
    getline(cin, frase);

    float length = frase.length();
    float metade = length / 2;
    metade = ceil(metade);

    int certas = 0;

    for (int i = 0; i < metade; i++)
        {
            if (frase[i] == frase[frase.length() - 1 - i])
            {
                certas++;
            }
        }

        if (certas == metade)
        {
            cout << "A frase e um palindromo." << endl;
        }
        else
        {
            cout << "A frase nao e um palindromo" << endl;
        }

    system("pause");

    return 0;
}