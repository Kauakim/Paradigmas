#include <iostream>

using namespace std;

float calcular_confiabilidade_sistema(float probabilidades[], int tamanho) {
    float resultado = 1.0;

    for (int i = 0; i < tamanho; i++) {
        resultado = resultado * probabilidades[i];
    }

    return resultado;
}

int main() {
    int tamanho;

    cout << "Digite a quantidade de componentes do sistema: " << endl;
    cin >> tamanho;

    float probabilidades[tamanho];

    cout << "Digite a probabilidade dos componentes do sistema (Entre 0 e 1.0): " << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> probabilidades[i];
    }

    float confiabilidade = calcular_confiabilidade_sistema(probabilidades, tamanho);
    cout << "Confiabilidade do sistema: " << confiabilidade << " (" << confiabilidade * 100 << "%)" << endl;

    return 0;
}
