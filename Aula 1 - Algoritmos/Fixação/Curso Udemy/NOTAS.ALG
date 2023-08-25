algoritmo "notas"
var
   nota1, nota2, notaFinal: real
inicio
      Escreva("Digite a primeira nota: ")
      Leia(nota1)
      Escreva("Digite a segunda nota: ")
      Leia(nota2)
      notaFinal <- (nota1 + nota2)
      Se (notaFinal >= 60.00) entao
         Escreval("NOTA FINAL = ", notaFinal:4:1)
      senao
           Escreval("NOTA FINAL = ", notaFinal:4:1)
           Escreva("REPROVADO")
      fimse
fimalgoritmo