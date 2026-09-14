#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float capacidade;
    float carga_atual = 0.0;
    int opcao;

    cout << "Informe a capacidade maxima de carga do drone (kg): " << endl;
    cin >> capacidade;

    do {
        cout << endl << "Sistema de Carga do Drone" << endl;
        cout << "1. Verificar Carga" << endl;
        cout << "2. Carregar Pacote" << endl;
        cout << "3. Descarregar Pacote" << endl;
        cout << "4. Encerrar Operacao" << endl;
        cout << "Escolha uma opcao: " << endl;
        cin >> opcao;

        if (opcao == 1) {
            cout << fixed << setprecision(2);
            cout << "Carga Atual: " << carga_atual << " kg / " << capacidade << " kg" << endl;
            cout << "Espaco Disponivel: " << capacidade - carga_atual << " kg" << endl;
        }

        else if (opcao == 2) {
            float peso;

            cout << "Digite o peso do pacote a ser carregado (kg): " << endl;
            cin >> peso;

            if (carga_atual + peso <= capacidade) {
                carga_atual += peso;
                cout << "Pacote adicionado com sucesso!" << endl;
            } else {
                cout << "Alerta: Peso maximo de decolagem excedido! Operacao cancelada." << endl;
            }
        }

        else if (opcao == 3) {
            float peso;

            cout << "Digite o peso a ser removido (kg): " << endl;
            cin >> peso;

            if (peso <= carga_atual) {
                carga_atual -= peso;
                cout << "Pacote descarregado com sucesso!" << endl;
            } else {
                cout << "Erro: Nao e possivel remover mais peso do que o carregado." << endl;
            }
        }
    
    } while (opcao != 4);

    cout << endl << "Encerrando sistema de telemetria..." << endl;

    return 0;
}
