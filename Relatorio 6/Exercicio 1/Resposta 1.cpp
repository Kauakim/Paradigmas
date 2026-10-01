#include <iostream>
#include <string>

using namespace std;

class Banda {
    public:
        string nome;
        int integrantes;
        float potenciaSom;
        int energia;

        void duelar(Banda &rival) {
            cout << nome << " esta duelando contra " << rival.nome << "!" << endl << endl;
            rival.energia = rival.energia - potenciaSom;
        }

        void exibirStatus() {
            cout << "Nome: " << nome << endl;
            cout << "Integrantes: " << integrantes << endl;
            cout << "Potencia do som: " << potenciaSom << endl;
            cout << "Energia: " << energia << endl << endl;
        }
};

int main() {
    Banda banda1, banda2;

    banda1.nome = "Mataveia";
    banda1.integrantes = 5;
    banda1.potenciaSom = 50.0;
    banda1.energia = 100;

    banda2.nome = "B4";
    banda2.integrantes = 4;
    banda2.potenciaSom = 40.0;
    banda2.energia = 100;

    banda1.duelar(banda2);

    cout << "Status da Banda 1" << endl;
    banda1.exibirStatus();
    cout << "Status da Banda 2" << endl;
    banda2.exibirStatus();

    return 0;
}
