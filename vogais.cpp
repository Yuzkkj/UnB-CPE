#include <iostream>

using namespace std;

int main()
{
    // digitar uma palavra de 5 letras
    string palavra;
    cout << "Digite uma palavra de 5 letras: ";
    cin >> palavra;

    // mostrar as vogais da palavra
    cout << "Vogais na palavra: " << endl;

    if (palavra.length() != 5)
    {
        cout << "A palavra deve ter exatamente 5 letras." << endl;
        return 1;
    }
    
    // Convertendo para minúsculas para facilitar a comparação
    palavra[0] = tolower(palavra[0]);
    palavra[1] = tolower(palavra[1]);
    palavra[2] = tolower(palavra[2]);
    palavra[3] = tolower(palavra[3]);
    palavra[4] = tolower(palavra[4]);

    int vogais = 0;

    if (palavra[0] == 'a' || palavra[0] == 'e' || palavra[0] == 'i' || palavra[0] == 'o' || palavra[0] == 'u')
    {
        vogais++;
        cout << palavra[0] << endl;
    }
    if (palavra[1] == 'a' || palavra[1] == 'e' || palavra[1] == 'i' || palavra[1] == 'o' || palavra[1] == 'u')
    {
        vogais++;
        cout << palavra[1] << endl;
    }
    if (palavra[2] == 'a' || palavra[2] == 'e' || palavra[2] == 'i' || palavra[2] == 'o' || palavra[2] == 'u')
    {
        vogais++;
        cout << palavra[2] << endl;
    }
    if (palavra[3] == 'a' || palavra[3] == 'e' || palavra[3] == 'i' || palavra[3] == 'o' || palavra[3] == 'u')
    {
        vogais++;
        cout << palavra[3] << endl;
    }
    if (palavra[4] == 'a' || palavra[4] == 'e' || palavra[4] == 'i' || palavra[4] == 'o' || palavra[4] == 'u')
    {
        vogais++;
        cout << palavra[4] << endl;
    }

    cout << "A palavra '" << palavra << "' tem " << vogais << " vogais." << endl;

    return 0;
}