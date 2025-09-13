#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    // primeiro jogador digita a palavra
    string palavra;
    cout << "Jogador 1, digite a palavra secreta: ";
    cin >> palavra;



    for (int i = 0; i < palavra.length(); i++)
    {
        palavra[i] = toupper(palavra[i]);
    }

    bool acertos[palavra.length()];
    for (int i = 0; i < palavra.length(); i++)
    {
        acertos[i] = false;
    }

    // apagar a tela
    system("cls");

    // mostrar o tamanho da palavra
    cout << "A palavra tem " << palavra.length() << " letras." << endl;

    // segundo jogador tenta adivinhar a palavra
    int total = 0;

    while (true)
    {
        char letra;
        cout << "Digite uma letra: ";
        cin >> letra;
        letra = toupper(letra);

        for (int i = 0; i < palavra.length(); i++)
        {
            if (letra == palavra[i])
            {
                acertos[i] = true;
            }
        }

        string temp;
        for (int i = 0; i < palavra.length(); i++)
        {
            if (acertos[i])
            {
                temp.push_back(palavra[i]);
            }
            else
            {
                temp.push_back('_');
            }
        }

        cout << temp << endl;

        string tentativa;
        cout << "Digite uma palavra: ";
        cin >> tentativa;

        total++;
        for (int i = 0; i < tentativa.length(); i++)
        {
            tentativa[i] = toupper(tentativa[i]);
        }

        if (tentativa == palavra)
        {
            cout << "Parabens, voce acertou a palavra em " << total << " tentativas!" << endl;
            break;
        }
        else
        {
            cout << "Errou, tente novamente!" << endl;
        }
    }

    return 0;
}
