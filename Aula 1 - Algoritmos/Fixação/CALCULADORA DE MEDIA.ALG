algoritmo "calculadora de media"
var
valor1,valor2,valor3,valor4,media: real

inicio
Escreval("==Calculadora de Média==")
Escreval("Coloque o valor 1: ")
Leia(valor1)

Escreval("Coloque o valor 2: ")
Leia(valor2)

Escreval("Coloque o valor 3: ")
Leia(valor3)

Escreval("Coloque o valor 4: ")
Leia(valor4)

media <- (valor1+valor2+valor3+valor4)/4
Escreval("Média =", media)
Se media >= 8.5 entao
Escreval("==Média ótima==")
Fimse
Se media < 8.5 entao
Escreval("==Média baixa==")
Fimse

fimalgoritmo