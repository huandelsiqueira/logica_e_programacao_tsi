algoritmo "crescente"
var
   x, y: inteiro
inicio
      escreva("Digite dois números: ")
      Leia(x)
      Leia(y)
      Se (x < y) entao
         Escreval("CRESCENTE")
      Senao
           Se (x > y) entao
              Escreval("DECRESCENTE")
           Fimse
      Fimse
      Enquanto (x <> y) faca
               Escreva("Digite outros dois números: ")
               Leia(x)
               Leia(y)
                      Se (x < y) entao
                         Escreval("CRESCENTE")
                      Senao
                           Se (x > y) entao
                              Escreval("DECRESCENTE")
                           Fimse
                      Fimse
      Fimenquanto
fimalgoritmo