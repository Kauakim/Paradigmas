#include <iostream>

using namespace std;

int main() {
    int matriz_solar[5][5] = {0};
    int opcao;

    do {
        cout << endl << "Sistema de Controle dos Paineis Solares" << endl;
        cout << "1. Ativar Celula" << endl;
        cout << "2. Ver Mapa da Matriz" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opcao: " << endl;
        cin >> opcao;

        if (opcao == 1) {
            int fileira;
            int coluna;

            cout << "Digite a fileira do painel solar (0-4): " << endl;
            cin >> fileira;

            cout << "Digite a coluna do painel solar (0-4): " << endl;
            cin >> coluna;

            if (matriz_solar[fileira][coluna] == 0) {
                matriz_solar[fileira][coluna] = 1;
                cout << "Sucesso: Celula solar ativada!" << endl;
            } else {
                cout << "Erro: Celula solar ja esta em operacao!" << endl;
            }
        }

        else if (opcao == 2) {
            cout << endl << "Mapa da Matriz Solar" << endl;

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << "[" << matriz_solar[i][j] << "] ";
                }
                cout << endl;
            }
        }

        else if (opcao == 3) {
            break;
        }
    } while (opcao != 3);

    int ativas = 0;
    int inativas = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz_solar[i][j] == 1) {
                ativas++;
            } else {
                inativas++;
            }
        }
    }

    float percentual = (ativas * 100.0) / 25;

    cout << endl << "Relatorio Final dos Paineis Solares" << endl;
    cout << "Total de celulas ATIVAS: " << ativas << endl;
    cout << "Total de celulas INATIVAS: " << inativas << endl;
    cout << "Capacidade Operacional: " << percentual << "%" << endl;

    return 0;
}
