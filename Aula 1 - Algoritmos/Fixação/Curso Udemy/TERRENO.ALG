algoritmo "terreno"
var
   largura, comprimento, area, metroQuadrado, preco: real
inicio
      Escreva("Digite a largura do terreno: ")
      Leia(largura)
      Escreva("Digite o comprimento do terreno: ")
      Leia(Comprimento)
      Escreva("Digite o valor do metro quadrado: ")
      Leia(metroQuadrado)
      area <- largura * comprimento
      preco <- area * metroQuadrado
      Escreval("Area do terreno = ", area:6:2)
      Escreva("Preco do terreno = ", preco:6:2)
fimalgoritmo