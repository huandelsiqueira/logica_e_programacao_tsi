algoritmo "consumo"
var
   combustivel, consumo: real
   distancia: inteiro
inicio
      Escreva("Distância percorrida: ")
      Leia(distancia)
      Escreva("Combustível gasto: ")
      Leia(combustivel)
      consumo <- distancia / combustivel
      Escreva("Consumo médio = ", consumo:6:3)
fimalgoritmo