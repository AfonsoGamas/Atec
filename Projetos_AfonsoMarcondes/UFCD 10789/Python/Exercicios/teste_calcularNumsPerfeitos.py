num = 3000000000000000000
lista = []
soma = 0

for y in range(num):
    lista = []
    soma = 0
    for i in range(1, num):
       if num % i == 0:
            lista.append(i)
    
    soma = sum(lista)

    if soma == num:
        print(lista)
        print(num, " é um numero **PERFEITO**")
