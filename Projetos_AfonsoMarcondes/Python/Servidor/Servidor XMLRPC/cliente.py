import xmlrpc.client

def calcular():
    try:
        num1 = int(input("\nInsira o primeiro numero: "))
        op = input("Insira o a operação aritmética [+][-][x][/]: ")
        num2 = int(input("Insira o segundo numero: "))

        if op == "+":
            return servidor.soma(num1, num2)

        elif op == "-":
            return servidor.sub(num1, num2)

        elif op == "x" or op == "*":
            return servidor.mult(num1, num2)

        elif op == "/":
            return servidor.div(num1, num2)
        
    except ValueError:
        print("\n[ERRO] -- Valores Invalidos")

servidor = xmlrpc.client.ServerProxy("http://172.16.136.88:8080")
while True:
    resultado = calcular()
    print("\nO servidor devolveu: ", resultado)

    sair = input("\nPretende encerrar a conecção? [S]im ou [N]ão: ")
    if sair.upper() == "S" or sair.upper() == "SIM":
        break
print("\n** Conecção Desfeita **\n")