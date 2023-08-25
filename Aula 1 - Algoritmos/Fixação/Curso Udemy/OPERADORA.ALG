algoritmo "operadora"

var
   quantidadeDeMinutos: inteiro
   fixo, flutuante: real
inicio
      Escreva("Digite a quantidade de minutos:")
      Leia(quantidadeDeMinutos)
      fixo <- 50.00
      Se (quantidadeDeMinutos <= 100.00) então
         Escreva("Valor a pagar: R$ ", fixo:5:2)
      Senão
           Se (quantidadeDeMinutos > 100.00) entao
              flutuante <- (quantidadeDeMinutos - 100.00)*2 + fixo
              Escreva("Valor a pagar: R$ ", flutuante:5:2)
           fimse
      fimse
fimalgoritmo