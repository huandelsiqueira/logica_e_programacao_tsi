algoritmo "pagamento"
var
   nome: caractere
   valorHora, horasTrabalhadas, pagamento: real
inicio
      Escreva("Nome: ")
      Leia(nome)
      Escreva("Valor por hora: ")
      Leia(valorHora)
      Escreva("Horas trabalhadas: ")
      Leia(horasTrabalhadas)
      pagamento <- valorHora*horasTrabalhadas
      Escreva("O pagamento para ", nome," deve ser ", pagamento:6:2)
fimalgoritmo