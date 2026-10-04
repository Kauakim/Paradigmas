using System;
using System.Collections.Generic;

class Grimorio
{
    public string FeiticoFavorito { get; private set; }

    public Grimorio()
    {
        FeiticoFavorito = "Nenhum";
    }

    public void Abrir()
    {
        Console.WriteLine("Feitico favorito: " + FeiticoFavorito);
    }

    public void DefinirFeitico(string feitico)
    {
        FeiticoFavorito = feitico;
    }
}

class Companheiro
{
    public string Nome { get; set; }
    public string Funcao { get; set; }

    public Companheiro(string nome, string funcao)
    {
        Nome = nome;
        Funcao = funcao;
    }

    public void Apresentar()
    {
        Console.WriteLine("Companheiro: " + Nome);
        Console.WriteLine("Funcao: " + Funcao);
    }
}

class Maga
{
    public string Nome { get; private set; }

    private Grimorio grimorio;
    private List<Companheiro> companheiros;

    public Maga(string nome)
    {
        Nome = nome;

        // COMPOSICAO
		// O Grimorio e criado dentro da propria Maga, o que o torna parte e criação de responsabilidade da classe Maga
        grimorio = new Grimorio();

        // A lista tambem e criada pela Maga para armazenar os companheiros que forem recrutados.
        companheiros = new List<Companheiro>();
    }

    public void Recrutar(Companheiro companheiro)
    {
        // AGREGACAO
        // O Companheiro ja existia antes de ser recrutado, com a Maga apenas recebendo o objeto e guardando sua referencia na lista
        companheiros.Add(companheiro);
    }

    public void MostrarGrupo()
    {
        Console.WriteLine("Maga: " + Nome);
        Console.WriteLine("Companheiros:");

        foreach (Companheiro companheiro in companheiros)
        {
            companheiro.Apresentar();
        }
		Console.WriteLine();
    }

    public void DefinirFeitico(string feitico)
    {
        grimorio.DefinirFeitico(feitico);
    }

    public void Abrir()
    {
        grimorio.Abrir();
    }
}

class Program
{
    static void Main()
    {
        Companheiro companheiro1 = new Companheiro("Stark", "Guerreiro");
        Companheiro companheiro2 = new Companheiro("Fern", "Maga");

        Maga maga = new Maga("Frieren");

        maga.Recrutar(companheiro1);
        maga.Recrutar(companheiro2);

        maga.DefinirFeitico("Zoltraak");

        maga.MostrarGrupo();

        maga.Abrir();
    }
}
