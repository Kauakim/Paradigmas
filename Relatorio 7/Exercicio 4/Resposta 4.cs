using System;

class CombatenteDeGondor
{
    public string Nome { get; private set; }
    public string Povo { get; private set; }
    public string Posto { get; private set; }
    public string Armamento { get; private set; }

    public CombatenteDeGondor(string nome, string povo, string posto)
    {
        Nome = nome;
        Povo = povo;
        Posto = posto;
        Armamento = "Desarmado";
    }

    public void Equipar(string arma)
    {
        Armamento = arma;
    }

    public void ApresentarUnidade()
    {
        Console.WriteLine("Nome: " + Nome);
        Console.WriteLine("Povo: " + Povo);
        Console.WriteLine("Posto: " + Posto);

        if (Armamento != "Desarmado")
        {
            Console.WriteLine("Armamento: " + Armamento);
        }
    }
}

class Program
{
    static void Main()
    {
        CombatenteDeGondor combatente1 = new CombatenteDeGondor("Aragorn", "Homem", "Capitão");
        CombatenteDeGondor combatente2 = new CombatenteDeGondor("Legolas", "Elfo", "Arqueiro");
        CombatenteDeGondor combatente3 = new CombatenteDeGondor("Gimli", "Anão", "Guerreiro");

        combatente1.Equipar("Espada");
        combatente2.Equipar("Arco");
        combatente3.Equipar("Machado");

        combatente1.ApresentarUnidade();
        Console.WriteLine();

        combatente2.ApresentarUnidade();
        Console.WriteLine();

        combatente3.ApresentarUnidade();

        // combatente1.Posto = "General";
        // ERRO: Posto possui private set e só pode ser alterado dentro da classe.
    }
}
