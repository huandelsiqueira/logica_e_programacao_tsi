algoritmo "combustivel"
var
   codigo, alcool, gasolina, diesel: inteiro
inicio
      Escreval("PESQUISA DE AVALIA��O DE PRODUTOS")
      Escreval("(1).�lcool,(2).Gasolina, (3).Diesel, (4). Fim")
      Escreval("")
      alcool <- 0
      gasolina <- 0
      diesel <- 0
      Escreva("Informe um c�digo (1, 2, 3) ou (4) para parar: ")
      Leia(codigo)
      Enquanto codigo <> 4 faca
               Escolha codigo
               Caso 1
                    alcool <- alcool + 1
               Caso 2
                    gasolina <- gasolina + 1
               Caso 3
                    diesel <- diesel + 1
               Fimescolha
               Escreva("Informe um c�digo (1, 2, 3) ou (4) para parar: ")
               Leia(codigo)
      Fimenquanto
      Escreval("MUITO OBRIGADO!")
      Escreval("�lcool: ", alcool)
      Escreval("Gasolina: ", gasolina)
      Escreva("Diesel: ", diesel)
fimalgoritmo