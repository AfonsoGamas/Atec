def primo(a):
    while True:
        if a < 2:
            print("**Errado**\nEsse numero não é primo.")
            return
        
        for i in range(2, a):
            if a % i == 0:
                print("**Errado**\nEsse numero não é primo.")
                return
            
        print("**Correto**\nEsse numero é primo.")
        break
            
            
num = int(input("Insira um numero primo: "))

primo(num)