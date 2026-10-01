#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Hobbit {
    protected:
        string nome;

    public:
        Hobbit(string nome) {
            this->nome = nome;
        }

        virtual void fazerAtividade() {
            cout << "O hobbit " << nome << " esta aproveitando um dia tranquilo na Comarca." << endl;
        }
};

class Jardineiro : public Hobbit {
    public:
        Jardineiro(string nome) : Hobbit(nome) {}

        void fazerAtividade() override {
            cout << "O jardineiro " << nome << " esta cuidando das flores e plantas ao redor das tocas!" << endl;
        }
};

class Cozinheiro : public Hobbit {
    public:
        Cozinheiro(string nome) : Hobbit(nome) {}

        void fazerAtividade() override {
            cout << "O cozinheiro " << nome << " esta preparando o segundo cafe da manha para os convidados!" << endl;
        }
};

class Fazendeiro : public Hobbit {
    public:
        Fazendeiro(string nome) : Hobbit(nome) {}

        void fazerAtividade() override {
            cout << "O fazendeiro " << nome << " esta colhendo vegetais e hortalicas em suas terras!" << endl;
        }
};

int main() {
    Jardineiro jardineiro("Sam");
    Cozinheiro cozinheiro("Pippin");
    Fazendeiro fazendeiro("Merry");

    vector<Hobbit*> hobbits;

    hobbits.push_back(&jardineiro);
    hobbits.push_back(&cozinheiro);
    hobbits.push_back(&fazendeiro);

    for (Hobbit* hobbit : hobbits) {
        hobbit->fazerAtividade();
    }

    return 0;
}
