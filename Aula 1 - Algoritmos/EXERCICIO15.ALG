algoritmo "exercicio15"
var
   numero: inteiro
inicio
      escreva("Digite um número inteiro: ")
      leia (numero)
      se ((numero%2) = 0) e (numero > 0) entao
         escreva("Número PAR")
      senao
           se ((numero%2) = 1) e (numero > 0) entao
              escreva("Número íMPAR")
           fimse
      fimse
fimalgoritmo