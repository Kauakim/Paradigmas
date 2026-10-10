class MortoVivo:
    def __init__(self, nome, almas, estus):
        self.nome = nome
        self._almas = almas
        self.__estus = estus

    def get_estus(self):
        return self.__estus

    def set_estus(self, quantidade):
        if 0 <= quantidade <= 10:
            self.__estus = quantidade
        else:
            print("Quantidade de Estus inválida!")

    def mostrar_status(self):
        return (
            f"Morto-vivo {self.nome} | "
            f"Almas: {self._almas} | "
            f"Estus: {self.__estus}"
        )

class Clerigo(MortoVivo):
    def __init__(self, nome, almas, estus, milagre):
        super().__init__(nome, almas, estus)

        self.milagre = milagre

    def mostrar_status(self):
        return f"{super().mostrar_status()} | Milagre: {self.milagre}"

clerigo = Clerigo("Petrus", 2000, 5, "Lança de Luz")

print(clerigo.mostrar_status())

# Alteração inválida
clerigo.set_estus(15)
print(clerigo.mostrar_status())

# Alteração válida
clerigo.set_estus(10)
print(clerigo.mostrar_status())

# O atributo privado não deve ser acessado diretamente:
# print(clerigo.__estus)  # AttributeError

print("Estus atual:", clerigo.get_estus())
