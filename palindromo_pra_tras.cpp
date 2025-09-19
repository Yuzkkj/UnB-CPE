#include <iostream>

using namespace std;

int main()
{
    string palavra = "";
    cout << "Digite uma palavra para verificar se e palindromo: ";
    cin >> palavra;

    string backwards = "";

    for (int i = palavra.length() - 1; i >= 0; i--)
    {
        backwards = backwards + palavra[i];
    }

    if (palavra == backwards)
    {
        cout << "A palavra " << palavra << " e um palindromo." << endl;
    }
    else
    {
        cout << "A palavra " << palavra << " nao e um palindromo." << endl;
    }

    system("pause");

    return 0;
}