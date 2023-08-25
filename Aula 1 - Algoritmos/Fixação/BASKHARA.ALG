algoritmo "baskhara"
var
   valorA, valorB, valorC: inteiro
   delta, x1, x2: real
inicio
      Escreval("Calculadora de Baskhara")
      Escreva("Digite o valor de A: ")
      Leia(valorA)
      Escreva("Digite o valor de B: ")
      Leia(valorB)
      Escreva("Digite o valor de C: ")
      Leia(valorC)
      delta <- (valorB^2) - (4*valorA*valorC)
      x1 <- (-valorB + RaizQ(delta)) / 2*valorA
      x2 <- (-valorB - RaizQ(delta)) / 2*valorA
      Escreval("Valor de delta: ", delta)
      Escreval("Valor de x1: ", x1)
      Escreva("Valor de x2: ", x2)
fimalgoritmo