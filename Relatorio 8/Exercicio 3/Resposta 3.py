class Persona:
    def __init__(self, nome, arcano):
        self.nome = nome
        self.arcano = arcano

    def invocar(self):
        print(f"Persona: {self.nome} | Arcano: {self.arcano}")

class Aliado:
    def __init__(self, nome, codinome):
        self.nome = nome
        self.codinome = codinome

    def apresentar(self):
        print(f"{self.nome} ({self.codinome})")

class Lider:
    def __init__(self, codinome):
        self.codinome = codinome

        # COMPOSIÇÃO:
        # A Persona é criada dentro do construtor do Lider, tratada como parte dessa classe, que é responsável por manter sua referência
        self.persona = Persona("Arsène", "Louco")

        # AGREGAÇÃO:
        # A equipe começa vazia e recebe objetos Aliado que foram criados fora da classe Lider, o que os permitem continuar existindo sem o Lider
        self._equipe = []

    def recrutar(self, aliado):
        self._equipe.append(aliado)

    def infiltrar(self, palacio):
        print(f"{self.codinome} está invadindo o Palácio de {palacio}!")

        self.persona.invocar()

        print("\nEquipe de infiltração:")
        for aliado in self._equipe:
            aliado.apresentar()

aliado1 = Aliado("Ryuji Sakamoto", "Skull")
aliado2 = Aliado("Ann Takamaki", "Panther")

lider = Lider("Joker")

lider.recrutar(aliado1)
lider.recrutar(aliado2)

lider.infiltrar("Kamoshida")

print("\nAliados continuam existindo:")
aliado1.apresentar()
aliado2.apresentar()
