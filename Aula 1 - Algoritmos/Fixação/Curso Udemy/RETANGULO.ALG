algoritmo "retangulo"
var
   base, altura, area, perimetro, diagonal: real

inicio
      Escreva("Base do retangulo: ")
      Leia(base)
      Escreva("Altura do retangulo: ")
      Leia(altura)
      area <- base * altura
      perimetro <- (2*base)+(2*altura)
      diagonal <- RaizQ((base^2)+(altura^2))
      Escreval("Area = ", area:6:4)
      Escreval("Perimetro = ", perimetro:6:4)
      Escreval("Diagonal = ", diagonal:6:4)

fimalgoritmo