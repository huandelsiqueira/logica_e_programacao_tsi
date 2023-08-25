algoritmo "troco"
var
   precoUnidade, dinheiroRecebido, troco: real
   quantidade: inteiro
inicio
      Escreva("Preço unitário do produto: ")
      Leia(precoUnidade)
      Escreva("Quantidade comprada: ")
      Leia(quantidade)
      Escreva("Dinheiro recebido: ")
      Leia(dinheiroRecebido)
      troco <- DinheiroRecebido - precoUnidade*quantidade
      Escreva("TROCO = ", troco:5:2)
      
fimalgoritmo