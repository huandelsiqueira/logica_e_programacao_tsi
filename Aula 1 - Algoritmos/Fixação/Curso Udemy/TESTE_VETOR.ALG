algoritmo "teste_vetor"
var
   n, i: inteiro
   vet: vetor [0..9] de real
inicio
      Escreva("Quantos números você vai digitar:")
      Leia(n)
      Para i de 0 ate (n-1) faca
           Escreva("Digite um número:")
           Leia(vet[i])
      Fimpara
      Escreval
      Escreval("NÚMEROS DIGITADOS:")
      Para i de 0 ate (n-1) faca
           Escreval(vet[i])
      Fimpara
fimalgoritmo