num = int(input("Insira um numero: "))
lista = []
soma = 0

for i in range(1, num):
    if num % i == 0:
        lista.append(i)
    
soma = sum(lista)
print("Os seus divisores são",lista, "\nA soma deles dá", soma)

if soma == num:
    print("Então é um numero **PERFEITO**")
else:
    print("Então não é um numero perfeito.")
