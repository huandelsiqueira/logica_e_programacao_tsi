algoritmo "baskhara2"
var
   a, b, c, delta, x1, x2: real
inicio
      Escreval("Calculadora de Baskhara")
      Escreva("Digite o valor de a: ")
      Leia(a)
      Escreva("Digite o valor de b: ")
      Leia(b)
      Escreva("Digite o valor de c: ")
      Leia(c)
      Se (a = 0) ou (delta < 0) então
         Escreva("Esta equação não possui raízes reais")
      Senao
           delta <- Exp(b,2) - (4*a*c)
           x1 <- ((-b) + (RaizQ(delta))) / (2 * a)
           x2 <- ((-b) - (RaizQ(delta))) / (2 * a)
           Escreval("a= ", a," b= ", b," c= ",c)
           Escreval("Valor de delta", delta)
           Escreval("Valor de x1= ", x1)
           Escreva("Valor de x2= ", x2)
      Fimse
fimalgoritmo