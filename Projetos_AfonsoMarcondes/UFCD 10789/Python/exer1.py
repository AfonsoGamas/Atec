num1 = int(input("Insira o 1º numero: "))
num2 = int(input("Insira o 2º numero: "))
num3 = int(input("Insira o 3º numero: "))

if num1>num2 and num1>num3 and (num2>num3 or num3>num2):
    print("O numero 1 é o maior.")
elif num2>num1 and num2>num3 and (num1>num3 or num3>num1):
    print("O numero 2 é o maior.")
elif num3>num1 and num3>num2 and (num2>num1 or num1>num2):
    print("O numero 3 é o maior.")
else:
    print("Tem dois numeros iguais.")