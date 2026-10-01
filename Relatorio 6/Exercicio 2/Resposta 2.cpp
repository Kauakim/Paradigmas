#include <iostream>
#include <string>

using namespace std;

class LinkSocial {
    private:
        string nome;
        string arcana;
        int rank;

    public:
        void setNome(string nome) {
            this->nome = nome;
        }
        void setArcana(string arcana) {
            this->arcana = arcana;
        }
        void setRank(int rank) {
            this->rank = rank;
        }

        string getNome() {
            return nome;
        }
        string getArcana() {
            return arcana;
        }
        int getRank() {
            return rank;
        }

        void subirRank() {
            rank++;
        }
};

int main() {
    LinkSocial link;

    link.setNome("Ryuji");
    link.setArcana("Chariot");
    link.setRank(1);

    cout << "Link Social" << endl;
    cout << "Nome: " << link.getNome() << endl;
    cout << "Arcana: " << link.getArcana() << endl;
    cout << "Rank: " << link.getRank() << endl << endl;

    link.subirRank();

    cout << "Link Social apos a subida do ranking" << endl;
    cout << "Nome: " << link.getNome() << endl;
    cout << "Arcana: " << link.getArcana() << endl;
    cout << "Rank: " << link.getRank() << endl;

    return 0;
}
