def detalhes(num):
    for i in range(num, 0, -1):
        
        print(f"******** {i} *****************************")
        # Vê se é um numero perfeito
        lista = []
        for y in range(1, i):
            if i % y == 0:
                lista.append(y)
                
        if sum(lista) == i:
            print(i, "é **NUMERO PERFEITO**")
        
        # Vê se o numero é Primo
        for y in range(2, i): 
            if i % y == 0:
                break
        else:
            print(i, "é **Primo**")
        
        # Lista os divisores do numero
        ls = []
        for y in range(1, i):
            if i % y == 0:
                ls.append(y)
        print("Os divisores de", i, "são:", ls)
        
        print("****************************************")
        print("")
        
        
        # Pergunta se quer parar
        if i % 10 == 0:
            escolha = input("\n[ENTER] para continuar...\n [PARA] para parar: ")
            if escolha.lower() == 'para':
                break

# Calculadora Simples
def calculadora():
    # O try garante que não sejam inseridos valores invalidos. #
    try:
        num1 = int(input("\nInsira o 1º numero: "))
    except ValueError:
            print("Entrada inválida! Insira um número válido.")
            
    while True:
        ls = ['+', '-', 'x', '/', 'X', '*']
        opr = input("[+] [-] [x] [/]: ")
        if not opr in ls:
            print("Opção Invalida")
        else:
            break
    try:
        num2 = int(input("Insira o 2º numero: "))
    except ValueError:
            print("Entrada inválida! Insira um número válido.")
            
    match opr:
        case '+':
            print(num1, '+', num2, '=', num1 + num2)
        case '-':
            print(num1, '-', num2, '=', num1 - num2)
        case 'x' | 'X' | '*':
            print(num1, 'x', num2, '=', num1 * num2)
        case '/':
            print(num1, '/', num2, '=', num1 / num2)

# Imprime a tabuada do 1 até á tabuada do numero inserido
def tab():
    
    # Garante que o numero seja de 1 a 1000
    while True:
        try:
            num = int(input("Insira um número para a tabuada (1 até 1000): "))
            if not (1 <= num <= 1000):
                print("Número fora do intervalo permitido (1 até 1000).")
                continue
            break
        except ValueError:
            print("Entrada inválida! Insira um número válido.")
            
    for i in range(1, num + 1):
        print(f"\n--- Tabuada do {i} ---")
        for j in range(1, 11):
            print(f"{i} x {j} = {i*j}")
        
        # Pergunta se quer parar
        if i % 20 == 0:
            escolha = input("\n[ENTER] para continuar...\n [PARA] para parar: ")
            if escolha.lower() == 'para':
                break

########## Menu Principal ##########
while True:
    print("\n****************************")
    print("*       **Escolhas**       *")
    print("*   1 - Insira um Numero   *")
    print("*   2 - Calculadora        *")
    print("*   3 - Tabuada            *")
    print("*   4 - Sair               *")
    print("*                          *")
    print("****************************\n")
    
    escolha = int(input("Insira a sua escolha: "))
    
    match escolha:
        case 1:
            # Garante que o numero esteja entre 1 e 30 000 #
            # e que não sejam inseridos valores invalidos. #
            while True:
                try:
                    num = int(input("Insira um numero: "))
                    if num < 1 or num > 30000:
                        continue
                    break
                
                except ValueError:
                    print("Entrada inválida! Insira um número válido.")
            detalhes(num)
            
        case 2:
            calculadora()
            
        case 3:
            tab()
            
        case 4:
            print("\n**Codigo Encerrado**")
            break
            
        
