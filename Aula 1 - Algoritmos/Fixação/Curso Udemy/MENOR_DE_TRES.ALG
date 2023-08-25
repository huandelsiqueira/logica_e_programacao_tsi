algoritmo "menor_de_tres"
var
   valor1, valor2, valor3: inteiro
inicio
      Escreva("Primeiro valor: ")
      Leia(valor1)
      Escreva("Segundo valor: ")
      Leia(valor2)
      Escreva("Terceiro valor: ")
      Leia(valor3)
      Se (valor1 < valor2) e (valor1 < valor3) entao
         Escreva("MENOR = ", valor1)
      Senao
           Se (valor2 < valor1) e (valor2 < valor3) entao
              Escreva("MENOR = ", valor2)
           Senao
                Escreva("MENOR = ", valor3)
           fimse
      fimse
fimalgoritmo