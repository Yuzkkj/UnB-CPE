#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    
    srand(time(0)); // Semente para a geração de números aleatórios

    int numeroSecreto = 1 + rand() % 100; // Número aleatório entre 0 e 99
    int palpite;
    int tentativas = 0;
    int maxTentativas = 100;

    cout << "Bem-vindo ao jogo de adivinhação!" << "\n";
    cout << "Tente adivinhar o número entre 0 e 99." << "\n";

    while (tentativas < maxTentativas)
    {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas+= 1;

        if (palpite < numeroSecreto)
        {
            cout << "Muito baixo! Tente novamente." << "\n";
        }
        else if (palpite > numeroSecreto)
        {
            cout << "Muito alto! Tente novamente." << "\n";
        }
        else
        {
            cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas." << "\n";
            return 0;
        }
    }

    cout << "Suas tentativas acabaram. O número secreto era: " << numeroSecreto << "\n";

    return 0;
}