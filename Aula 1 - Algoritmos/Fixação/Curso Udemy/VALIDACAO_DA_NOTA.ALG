algoritmo "validacao_da_nota"
var
   n1, n2, media: real
inicio
      Escreva("Digite a primeira nota: ")
      leia(n1)
      Enquanto (n1 <0) ou (n1>10) faca
               Escreva("Digite a primeira nota: ")
               leia(n1)
      Fimenquanto
      Escreva("Digite a segunda nota: ")
      leia(n2)
      Enquanto (n2 <0) ou (n2>10) faca
               Escreva("Digite a segunda nota: ")
               leia(n2)
      Fimenquanto
      media <- (n1+n2)/2
      Escreva("MÉDIA= ", media)
fimalgoritmo