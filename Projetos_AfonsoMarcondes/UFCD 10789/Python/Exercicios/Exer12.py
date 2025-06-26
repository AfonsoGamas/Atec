num = int(input("Insira um numero: "))
cont = 0
for i in range(1, num + 1):
    print("\n****", i, "****")
    print(num, "+", i, "=" , num + i)
    print(num, "-", i, "=" , num - i)
    print(num, "x", i, "=" , num * i)
    print(num, "/", i, "=" , num / i)
    cont += 4
print("\n** O programa fez um todal de", cont, "operações **")
