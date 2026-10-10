class HeroiOverwatch:
    def __init__(self, codinome, funcao):
        self.codinome = codinome
        self.funcao = funcao

    def usar_suprema(self):
        print(f"{self.codinome} usa uma suprema genérica!")

class HeroiTanque(HeroiOverwatch):
    def usar_suprema(self):
        print(f"{self.codinome} ({self.funcao}) usa uma suprema defensiva!")

class HeroiSuporte(HeroiOverwatch):
    def usar_suprema(self):
        print(f"{self.codinome} ({self.funcao}) usa uma suprema de suporte!")

    def curar_equipe(self):
        print(f"{self.codinome} está curando toda a equipe!")

dps = HeroiOverwatch("Soldado", "Dano")
tanque = HeroiTanque("Reinhardt", "Tanque")
suporte = HeroiSuporte("Mercy", "Suporte")

herois = [dps, tanque, suporte]

for heroi in herois:
    heroi.usar_suprema()

    if isinstance(heroi, HeroiSuporte):
        heroi.curar_equipe()
