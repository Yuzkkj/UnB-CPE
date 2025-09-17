#include <iostream>

using namespace std;

int main()
{
    int userNumber;
    cout << "Digite um numero inteiro: ";
    cin >> userNumber;
    if (userNumber <= 0)
    {
        cout << "O numero precisa ser maior do que 0.";
    }

    long long int result = userNumber;

    for (int i = userNumber - 1; i > 0; i--)
    {
        result *= i;
    }

    cout << "O resultado do fatorial de " << userNumber << ": " << result << endl;

    system("pause");

    return 0;
}