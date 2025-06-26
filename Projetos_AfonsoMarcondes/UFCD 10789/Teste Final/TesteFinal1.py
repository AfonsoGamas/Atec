def menu():
    print("\n********************************")
    print("*          |Opções|            *")
    print("*                              *")
    print("*    1 - Insira um Numero      *")
    print("*    2 - Calculadora           *")
    print("*    3 - Calcular Tabuada      *")
    print("*    x - Parar Programa        *")
    print("*                              *")
    print("********************************")

# Ver se o numero é primo
def numPrimo(num):
    if num == 1:
        return 0
    for y in range(2, num):
        if num % y == 0:
            return 0
    return 1

# Detelha um Numero
def lerNumero(num):
    # Declaração de variaveis
    cont = 0
    
    # Garante que a Entrada Esteja Entre 1 e 30 000
    if num > 30000 or num < 1:
        print("\n** Numero Invalido **")
        return
    
    for i in range(num, 0, -1):
        cont += 1
        
        # Declaração de variaveis
        divisores = 0
        numDivisores = []
        somaDivisores = 0
        
        print(f"|Numero {i}|")
        
        # Ver se o Numero é Primo
        primo = numPrimo(i)
        if primo == 1:
            print(f"** Numero Primo **")
        
        # Calcula o Numero de Divisores
        for y in range(1, i):
            if i % y == 0:
                divisores += 1
                numDivisores.append(y)
                
        print(f"** Tem {divisores} Divisores **")
        
        # Ver se é um Numero Perfeito
        for y in range(len(numDivisores)):
            somaDivisores += numDivisores[y]
            
        if i == somaDivisores:
            print(f"** Numero Perfeito **")
        
        print("____________________________________")
        
        # Para de 10 em 10
        if cont == 10:
            cont = 0
            parar = input("\nInsira [PARA] para parar, qualquer tecla para continuar: ")
            if parar.lower() == "para":
                return

# Calculador Simples
def calculadora():
    # Declaração de variaveis
    escolha = " "
    num1 = 0
    num2 = 0
    
    # Garante o Programa não Pare ao Inserir um Valor Invalido
    try:
        num1 = int(input("\nInsira um Numero para Carcular: "))
        
    except ValueError:
        print("\n** Valor Invalido **")
        return
    
    # Garante que a Entrada Esteja Entre 1 e 1 000
    if num1 > 1000 or num1 < 1:
        print("\n** Numero Invalido **")
        return
    
    print("**************************************")
    print("*      |Operações Aritméticas|       *")
    print("*                                    *")
    print("*   [+]      [-]      [x]      [/]   *")
    print("*                                    *")
    print("**************************************")
    
    escolha = input("Insira a Operação que Deseja: ")
    
    # Garante o Programa não Pare ao Inserir um Valor Invalido
    try:
        num2 = int(input("\nInsira o Outro Numero para Carcular: "))
        
    except ValueError:
        print("\n** Valor Invalido **")
        return
    
    # Garante que a Entrada Esteja Entre 1 e 1 000
    if num2 > 1000 or num2 < 1:
        print("\n** Numero Invalido **")
        return
    
    match escolha.lower():
        case "+":
            print(f"{num1} + {num2} = {num1 + num2}")
        
        case "-":
            print(f"{num1} - {num2} = {num1 - num2}")
        
        case "x" | "*":
            print(f"{num1} x {num2} = {num1 * num2}")
        
        case "/":
            print(f"{num1} / {num2} = {num1 / num2}")
        
        case _:
            print("\n** Opção Invalida **")

def tabuada():
    # Declaração de variaveis
    num = 0
    cont = 0
    
    # Garante o Programa não Pare ao Inserir um Valor Invalido
    try:
        num = int(input("\nInsira um Numero: "))
        
    except ValueError:
        print("\n** Valor Invalido **")
        return
    
    for i in range(1, num):
        cont += 1
        
        print(f"| Tabuada do {i} |")
        
        for y in range(1, 11):
            print(f"   {i} x {y} = {i * y}")
            
        print("_________________")
        
        # Para de 20 em 20
        if cont == 20:
            cont = 0
            parar = input("\nInsira [PARA] para parar, qualquer tecla para continuar: ")
            if parar.lower() == "para":
                return
            
# Mantem o Programa em Execução
while True:
    # Declaração de variaveis
    num = 0
    escolha = " "
    
    # Menu de Escolha do Utilizador
    menu()
    
    escolha = input("Insira a sua Escolha: ")
    
    match escolha:
        case "1":
            # Garante o Programa não Pare ao Inserir um Valor Invalido
            try:
                num = int(input("Insira um Numero: "))
                
            except ValueError:
                print("\n** Valor Invalido **")
                continue
            
            lerNumero(num)
        
        case "2":
            calculadora()
          
        case "3":
            tabuada()
            
        case "x":
            print("\n** Programa Encerrado **")
            break
        
        case _:
            print("\n** Opção Invalida **")
