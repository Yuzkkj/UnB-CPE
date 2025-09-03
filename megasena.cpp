#include <iostream>

using namespace std;

int main()
{
    srand(time(0)); // Semente para a geração de números aleatórios
    
    cout << "Mega Sena - Jogo de Apostas" << "\n";
    cout << "===========================" << "\n";

    int aposta[10];
    int numerosSorteados[6];

    cout << "Digite seus 10 números de aposta (entre 1 e 60):" << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Número " << (i + 1) << ": ";
        cin >> aposta[i];

        while (aposta[i] < 1 || aposta[i] > 60)
        {
            cout << "Número inválido. Digite um número entre 1 e 60: ";
            cin >> aposta[i];
        } 
    }

    for (int i = 0; i < 6; i++)
    {
        numerosSorteados[i] = 1 + rand() % 60;
    }

    cout << "===========================" << "\n";
    cout << "Números sorteados: " << "\n";
    for (int i = 0; i < 6; i++)
    {
        cout << numerosSorteados[i] << "\n";
    }

    int acertos = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numerosSorteados[i] == aposta[j])
            {
                acertos++;
            }
        }
    }

    cout << "===========================" << "\n";
    cout << "Acertos: " << "\n";
    cout << acertos << "\n";

    cout << "===========================" << "\n";
    if (acertos == 6)
    {
        cout << "Parabéns! Você ganhou o premio maximo!" << "\n";
    }
    else if (acertos == 5)
    {
        cout << "Parabéns! Você fez quina!" << "\n";
    }
    else if (acertos == 4)
    {
        cout << "Parabéns! Você fez quadra!" << "\n";
    }
    else
    {
        cout << "Que pena! Tente novamente." << "\n";
    }

    return 0;
}