algoritmo "consumo"
var
   combustivel, consumo: real
   distancia: inteiro
inicio
      Escreva("Dist�ncia percorrida: ")
      Leia(distancia)
      Escreva("Combust�vel gasto: ")
      Leia(combustivel)
      consumo <- distancia / combustivel
      Escreva("Consumo m�dio = ", consumo:6:3)
fimalgoritmo