#include <iostream>

using namespace std;

int main()
{
    string frase = "";
    cout << "Digite uma frase para checar se e palindromo: ";
    getline(cin, frase);

    string letras = "";
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] != ' ')
        {
            char lowered = tolower(frase[i]);
            letras += lowered;
        }
    }

    string backwards = "";
    for (int i = letras.length() - 1; i >= 0; i--)
    {
        backwards += letras[i];
    }

    if (backwards == letras)
    {
        cout << "A frase " << frase << " e um palindromo." << endl;
    }
    else
    {
        cout << "A frase " << frase << " nao e um palindromo." << endl;
    }

    system("pause");

    return 0;
}