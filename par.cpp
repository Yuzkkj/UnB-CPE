// Programa que lê um número inteiro e informa se ele é par ou ímpar.
#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Digite um numero inteiro: ";
    cin >> x;

    // Checa se o módulo de x por 2 é zero
    if (x % 2 == 0) {
        cout << x << " é par.";
    } else {
        cout << x << " é impar.";
    }

    return 0;
};