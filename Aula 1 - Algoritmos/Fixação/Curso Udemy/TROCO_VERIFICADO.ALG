algoritmo "troco_verificado"
var
   preco, dinheiroRecebido, troco, op1, op2: real
   quantidade: inteiro
inicio
      Escreva("Preço unitário do produto: ")
      Leia(preco)
      Escreva("Quantidade comprada: ")
      Leia(quantidade)
      Escreva("Dinheiro Recebido: ")
      Leia(dinheiroRecebido)
      op1 <- (quantidade * preco)
      troco <- (dinheiroRecebido - op1)
      Se (troco > 0) entao
         Escreva("TROCO = ", troco:5:2)
      Senao
           op2 <- (op1 - dinheiroRecebido)
           Escreva("DINHEIRO INSUFICIENTE. FALTAM ", op2:5:2," REAIS")
      Fimse
fimalgoritmo
