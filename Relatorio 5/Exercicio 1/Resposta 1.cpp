#include <iostream>

using namespace std;

int combinar_equipes(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return combinar_equipes(n - 1) + combinar_equipes(n - 2);
    }
}

int main() {
    int n;

    cout << "Digite o valor de n: " << endl;
    cin >> n;

    int resultado = combinar_equipes(n);

    cout << "Total de cenarios de confrontos possiveis: " << resultado << endl;

    return 0;
}
