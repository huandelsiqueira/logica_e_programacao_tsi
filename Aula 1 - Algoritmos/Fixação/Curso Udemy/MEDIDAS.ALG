algoritmo "medidas"
var
   medidaA, medidaB, medidaC, areaQuadrado, areaTriangulo, areaTrapezio: real
inicio
      Escreva("Digite a medida A: ")
      Leia(medidaA)
      Escreva("Digite a medida B: ")
      Leia(medidaB)
      Escreva("Digite a medida C: ")
      Leia(medidaC)
      areaQuadrado <- medidaA^2
      areaTriangulo <- medidaA*medidaB / 2
      areaTrapezio <- ((medidaA+medidaB)*medidaC) / 2
      Escreval("Area do quadrado de lado A = ", areaQuadrado:6:4)
      Escreval("Area do triangulo de lado A e lado B = ", areaTriangulo:6:4)
      Escreva("Area do trapezio de lado A, B e C = ", areaTrapezio:6:4)
fimalgoritmo