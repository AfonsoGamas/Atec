nomes = []

para = True

while True:
    print("\n*****************************")
    print("*        (Escolhas)         *")
    print("*                           *")
    print("*   1 - Introduzir Nomes    *")
    print("*   2 - Listar Nomes        *")
    print("*   3 - Parar o Programas   *")
    print("*                           *")
    print("*****************************")
    
    esc = input("\nResposta: ")
    
    match esc:
        case '1':
            nomes.append(input("\nInsira o novo nome: "))
            
        case '2':
            print("\n** Lista Nomes **\n")
            
            lugar = 1
            
            for i in nomes:
                print(lugar, " - ", i)
                lugar += 1
                
            print("\n** Fim da Lista **")
            
        case '3':
            break
        
        case _:
            print("\n** Resposta Incorreta **")
