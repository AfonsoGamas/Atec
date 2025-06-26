lista = []

for i in range(10):
    lista.append(int(input("Insira o novo numero: ")))

for i in lista:
    if i % 2 == 0:
        print(i, "É par.")
    else:
        print(i, "É impar.")