algoritmo "exercicio14"
var
   quantidade: inteiro
   valor: real
inicio
      escreva("digite a quantidade de frutas maçãs compradas:")
      leia (quantidade)
      Se (quantidade >= 12) entao
         valor <- (0.25 * quantidade)
      senao
           se (quantidade < 12) entao
              valor <- (0.30 * quantidade)
           fimse
      fimse
      escreva ("Valor total da compra: R$", valor:2:2)
fimalgoritmo
