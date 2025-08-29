#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y;
    
    cout << "Digite um numero inteiro: ";
    cin >> x;
    cout << "Digite um segundo numero inteiro: ";
    cin >> y;

    if (x > y) {
        cout << "x é maior que y.";
    }
    else if (x < y) {
        cout << "x é menor que y.";
    }
    else {
        cout << "x é igual a y.";
    }

    return 0;
}