from abc import ABC, abstractmethod

class IUnidadeDeRede(ABC):
    def __init__(self, nome):
        self.nome = nome

    @abstractmethod
    def executar_invasao(self):
        pass

class Cyberdeck:
    def __init__(self, modelo):
        self.modelo = modelo

    def __str__(self):
        return self.modelo

class OperadorNetrunner(IUnidadeDeRede):
    def __init__(self, nome, modelo):
        super().__init__(nome)
        self.cyberdeck = Cyberdeck(modelo)

    def executar_invasao(self):
        print(f"{self.nome} está usando o cyberdeck {self.cyberdeck.modelo} para quebrar o ICE de um servidor.")

class DroneDeVigilancia(IUnidadeDeRede):
    def __init__(self, codigo, identificacao):
        super().__init__(codigo)
        self.identificacao = identificacao

    def executar_invasao(self):
        print(f"Drone {self.nome} ({self.identificacao}) está interceptando o sinal da rede.")

class CelulaHacker:
    def __init__(self, nome, membros):
        self.nome = nome
        self.membros = list(membros)

    def iniciar_ataque(self):
        print(f"Célula hacker {self.nome} iniciando o ataque!")

        for membro in self.membros:
            membro.executar_invasao()

netrunner = OperadorNetrunner("V", "Militech Paraline")
drone = DroneDeVigilancia("D-01", "Vigilância aérea")

celula = CelulaHacker("Afterlife", [netrunner, drone])

celula.iniciar_ataque()

# Uma interface abstrata não pode ser instanciada diretamente
# unidade = IUnidadeDeRede("Unidade genérica")
