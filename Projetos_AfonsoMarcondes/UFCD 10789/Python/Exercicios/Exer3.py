lista = []
media = 0

for i in range(10):
    lista.append(int(input("Insira a nota de um novo aluno: ")))


for i in lista:
    media += i

tamanho_da_lista = 0

for i in lista:
    tamanho_da_lista += 1

media /= tamanho_da_lista

print("A media de notas é: ", media)