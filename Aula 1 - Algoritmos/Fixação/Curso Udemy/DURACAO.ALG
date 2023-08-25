algoritmo "duracao"
var
   valorEmSegundos, horas, minutos, segundos: inteiro
inicio
      Escreva("Digite a duração em segundos: ")
      Leia(valorEmSegundos)
      horas <- valorEmSegundos \ 3600
      minutos <- valorEmSegundos % 3600 \ 60
      segundos <- valorEmSegundos % 60
      Escreva(horas,":",minutos,":",segundos)
fimalgoritmo