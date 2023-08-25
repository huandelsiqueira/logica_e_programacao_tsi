algoritmo "pares_consecutivos"
var
   x, soma: inteiro
inicio
      Escreva("Digite um número inteiro:")
      Leia(x)
      Enquanto (x <> 0) faca
               Se (x % 2 <> 0) entao
                  x <- x + 1
               fimse
               // soma = x + x + 2 + x + 4 + x + 6 + x + 8, ou seja, 5x + 20
               soma <- 5*x + 20
               Escreval("Soma = ", soma)
               Escreva("Digite um número inteiro:")
                Leia(x)
      fimenquanto
fimalgoritmo