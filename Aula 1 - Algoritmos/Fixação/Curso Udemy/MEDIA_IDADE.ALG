algoritmo "media_idade"
var
   idade, cont, soma: inteiro
   media: real
inicio
      soma <- 0
      cont <- 0
      Escreva("Digite as idades: ")
      Leia(idade)
      Enquanto (idade >= 0) faca
               soma <- soma + idade
               cont <- cont + 1
               leia(idade)
      fimenquanto
      Se (cont = 0) entao
         Escreva("IMPOSS�VEL CALCULAR")
      Senao
           media <- (soma)/cont
           Escreva("M�DIA = ", media)
      Fimse
fimalgoritmo