lista_de_marcas = ["Toyota", "Ford", "Honda", "Chevrolet", "Nissan" ]

lista_de_marcas.append("Volkswagen ")

lista_de_marcas.remove("Ford")

indice = lista_de_marcas.index("Honda")
lista_de_marcas[indice] = "Hyundai"

lista_de_marcas.sort()

for i in lista_de_marcas:
    print(i)