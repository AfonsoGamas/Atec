cont = 0
for i in range(255):  
    print("O digito na", i+1 , "º posição do cadigo ASSCI é:", chr(i))
    cont += 1
    
    if cont == 20:
        continuar = input("\n\nDeseja continuar? \n(s para sim, qualquer outra tecla para sair): ")
        if continuar.lower() != 's':
            print("...Codigo Encerrado...")
            break
        cont = 0
    
