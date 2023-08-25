algoritmo "exercicio13"
var
   sexo: caracter
   altura, peso: real
inicio
      escreva("Digite seu sexo a seguir no formato(M/F):")
      leia(sexo)
      escreva("Digite sua altura em 'metro':")
      leia(altura)
      Se (sexo = "M") ou (sexo = "m") entao
         peso <- ((72.7 * altura) - 59)
         escreva("Seu peso ideal em Kg é: ",peso)
      senao
           se(sexo = "F") ou (sexo = "f") entao
              peso <-(62.1 * altura) - 44.7)
              escreva("Seu peso ideal em Kg é:", peso)
           fimse
      fimse
fimalgoritmo
