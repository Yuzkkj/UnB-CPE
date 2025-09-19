#include <iostream>

using namespace std;

int main()
{
    string palavra = "";
    cout << "Digite uma palavra para verificar se e palindromo: ";
    cin >> palavra;

    int length = palavra.length();
    int metade = length / 2;

    int certas = 0;

    for (int i = 0; i < metade; i++)
        {
            if (palavra[i] == palavra[length - 1 - i])
            {
                certas++;
            }
        }

        if (certas == metade)
        {
            cout << "A palavra e um palindromo." << endl;
        }
        else
        {
            cout << "A palavra nao e um palindromo" << endl;
        }

    system("pause");

    return 0;
}