using System;
using System.Collections.Generic;

class Pokemon
{
    public string Especie { get; set; }
    public int Nivel { get; set; }

    public Pokemon(string especie, int nivel)
    {
        Especie = especie;
        Nivel = nivel;
    }

    public virtual void Atacar()
    {
        Console.WriteLine(Especie + " realizou um ataque generico!");
    }
}

class TipoPlanta : Pokemon
{
    public TipoPlanta(string especie, int nivel): base(especie, nivel) {}

    public override void Atacar()
    {
        Console.WriteLine(Especie + " usou um ataque de Planta!");
    }
}

class TipoEletrico : Pokemon
{
    public TipoEletrico(string especie, int nivel): base(especie, nivel) {}

    public override void Atacar()
    {
        base.Atacar();
        Console.WriteLine(Especie + " soltou uma descarga eletrica!");
    }
}

class Program
{
    static void Main()
    {
        Pokemon planta = new TipoPlanta("Bulbasaur", 10);
        Pokemon eletrico = new TipoEletrico("Pikachu", 15);
        Pokemon normal = new Pokemon("Eevee", 12);

        List<Pokemon> pokemons = new List<Pokemon>();

        pokemons.Add(planta);
        pokemons.Add(eletrico);
        pokemons.Add(normal);

        foreach (Pokemon pokemon in pokemons)
        {
            pokemon.Atacar();
            Console.WriteLine();
        }
    }
}
