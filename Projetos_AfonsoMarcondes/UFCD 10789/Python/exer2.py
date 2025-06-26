def primo(a):
    if ((a % 2 == 0) or (a % 3 == 0)) and (a != 2) and (a != 3):
        print("**Errado**\nEsse numero não é primo.")
    else:
        print("**Correto**\nEsse numero é primo.")
         
resposta = int(input("Insere um numero primo: "))
primo(resposta)

