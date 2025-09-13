#include <iostream>

using namespace std;

int main()
{
    // digitar a frase
    string frase;
    cout << "Digite uma frase: ";
    getline(cin, frase);

    // mostrar as vogais da frase
    int vogais = 0;
    
    cout << "Vogais na frase: " << endl;

    for (int i = 0; i < frase.length(); i++)
    {
        frase[i] = tolower(frase[i]);
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            vogais++;
            cout << frase[i] << endl;
        }

        i++;
    }

    cout << "A frase '" << frase << "' tem " << vogais << " vogais." << endl;

    return 0;
}