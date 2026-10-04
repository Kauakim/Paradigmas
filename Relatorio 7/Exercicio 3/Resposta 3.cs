using System;
using System.Collections.Generic;

class EntidadeCosmica
{
    public string Nome { get; set; }
    public string Origem { get; set; }

    public EntidadeCosmica(string nome)
    {
        Nome = nome;
        Origem = "Desconhecida";
    }

    public virtual void Manifestar()
    {
        if (Origem != "Desconhecida")
        {
            Console.WriteLine(Nome + " possui origem: " + Origem);
        }
    }
}

class Profundo : EntidadeCosmica
{
    public Profundo(string nome): base(nome) {}

    public override void Manifestar()
    {
        Console.WriteLine(Nome + " surgiu das profundezas cosmicas!");
    }
}

class MiGo : EntidadeCosmica
{
    public MiGo(string nome): base(nome) {}

    public override void Manifestar()
    {
        base.Manifestar();
        Console.WriteLine(Nome + " manifesta sua presenca alienigena!");
    }
}

class Pesquisador
{
    public string Nome { get; set; }

    private List<EntidadeCosmica> catalogo;

    public Pesquisador(string nome)
    {
        Nome = nome;
        catalogo = new List<EntidadeCosmica>();
    }

    public void Catalogar(EntidadeCosmica entidade)
    {
        catalogo.Add(entidade);
    }

    public void LerCatalogo()
    {
        Console.WriteLine("Pesquisador: " + Nome);
        Console.WriteLine("Catalogo de entidades:");

        foreach (EntidadeCosmica entidade in catalogo)
        {
            entidade.Manifestar();
        }
		Console.WriteLine();
    }
}

class Program
{
    static void Main()
    {
        EntidadeCosmica entidade1 = new Profundo("Cthulhu");
        EntidadeCosmica entidade2 = new MiGo("Mi-Go");
        EntidadeCosmica entidade3 = new EntidadeCosmica("Nyarlathotep");

        entidade1.Origem = "Oceano Profundo";
        entidade2.Origem = "Yuggoth";
        entidade3.Origem = "Desconhecida";

        Pesquisador pesquisador = new Pesquisador("Professor Armitage");

        pesquisador.Catalogar(entidade1);
        pesquisador.Catalogar(entidade2);
        pesquisador.Catalogar(entidade3);

        pesquisador.LerCatalogo();
    }
}
