num = int(input("Insira um numero: "))
divisores = []
for i in range(1, num):
    if num % i == 0:
        divisores.append(i)

print(f"O {num} tem os seguindes divisores: ")

print("\n*******")
for i in range(len(divisores)):
    print(divisores[i])

print("*******")
