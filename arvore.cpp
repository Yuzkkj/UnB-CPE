#include <iostream>

using namespace std;

int main()
{
    int altura = 0;
    cout << "Digite a altura da arvore: ";
    cin >> altura;

    int lastRow = altura * 2;

    for (int i = 1; i <= altura; i++)
    {
        int numAst = i * 2;
        int numEspaces = lastRow - numAst;
        int half = numEspaces / 2;

        string line = "";
        for (int o = 0; o < half; o++)
        {
            line += ' ';
        }

        for (int o = 0; o < numAst; o++)
        {
            line += '*';
        }
        for (int o = 0; o < half; o++)
        {
            line += ' ';
        }

        cout << line << endl;
    }

    system("pause");

    return 0;
}