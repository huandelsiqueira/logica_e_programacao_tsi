algoritmo "exercicio16"
var
   n1, n2: real
inicio
      escreva("Digite o primeiro valor: ")
      leia (n1)
      escreva("Digite o segundo valor: ")
      leia (n2)
      Se (n1 > n2) e (n1 <> n2) entao
         escreva(n2, n1)
      senao
           se (n1 < n2) e (n1 <> n2) entao
              escreva(n1, n2)
           fimse
      fimse
fimalgoritmo