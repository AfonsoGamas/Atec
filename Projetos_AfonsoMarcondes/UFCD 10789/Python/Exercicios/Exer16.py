nums = []
cont = 0
cont30 = 0
while True:
    cont += 1
    cont30 += 1
    num = int(input(f"Insira o {cont}º numero entre 1 e 50: "))
    if not num in range(1, 51):
        print("\n**Numero Invalido**\n")
        cont -= 1
        cont30 -= 1
    else:
        nums.append(num)
    if cont30 == 30:
        break
media = sum(nums) / len(nums)
print("A media é", media)
