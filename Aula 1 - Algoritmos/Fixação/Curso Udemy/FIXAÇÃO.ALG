algoritmo "fixação"
var
      produto1, produto2, genero: caractere
      preco1, preco2, idade, codigo: real
inicio
      produto1 <- "Computador"
      produto2 <- "TV"
      genero <- "F"
      preco1 <- 2100.5
      preco2 <- 1830.0
      idade <- 30
      codigo <- 5291
      
      Escreval("Produtos:")
      Escreval("O produto ", produto1, " custa R$", preco1:8:2)
      Escreval("O produto ", produto2, " custa R$", preco2:8:2)
      Escreval
      Escreval("Codigo =", codigo)
      Escreval
      Escreval("Dados da pessoa: genero ", genero," e idade", idade)
      
fimalgoritmo