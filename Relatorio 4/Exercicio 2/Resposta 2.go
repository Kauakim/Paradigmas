package main
import "fmt"

func main() {
	var venda1 int
	var venda2 int
	var venda3 int

	fmt.Println("Digite as vendas do 1º trimestre: ")
	fmt.Scanln(&venda1)

	fmt.Println("Digite as vendas do 2º trimestre: ")
	fmt.Scanln(&venda2)

	fmt.Println("Digite as vendas do 3º trimestre: ")
	fmt.Scanln(&venda3)

	total := venda1 + venda2 + venda3

	fmt.Printf("Total de vendas: %d unidades\n", total)

	if total < 100 {
		fmt.Println("Meta minima anual nao atingida!")
	} else if total >= 250{
		fmt.Println("Classificacao: Categoria Top Seller")
	} else if total >= 180{
		fmt.Println("Classificacao: Categoria Senior")
	} else {
		fmt.Println("Classificacao: Categoria Pleno")
	}
}
