algoritmo "senha_fixa"
var
   senha: inteiro
inicio
      Escreva("Escreva uma senha: ")
      Leia(senha)
      Se (senha <> 9129) entao
         Escreval("Senha inválida! Tente novamente.")
      Senao
           Escreval ("Acesso permitido")
      Fimse
      Enquanto (senha <> 9129) faca
      Leia(senha)
                 Se (senha <> 9129) entao
                    Escreval("Senha inválida! Tente novamente.")
                 Senao
                      Escreval ("Acesso permitido")
                 Fimse
      Fimenquanto
fimalgoritmo