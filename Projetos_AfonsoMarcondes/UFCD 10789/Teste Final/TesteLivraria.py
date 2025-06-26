# Exibir o Menu
def mostrarMenu():
    print("\n************************************************")
    print("*               |Escolhas|                     *")
    print("*                                              *")
    print("*    1 - Cadastrar livro                       *")
    print("*    2 - Procurar por livro                    *")
    print("*    3 - Excluir livro                         *")
    print("*    4 - Ordenar livros                        *")
    print("*    5 - Listar todos os livros cadastrados    *")
    print("*    x - Parar Programa                        *")
    print("*                                              *")
    print("************************************************")

class livros:
    listaLivros = []
    totalLivros = 0
    
    # 1 - Cadastrar livro 
    def __init__(self, titulo, autor, anoPublicacao):
        self.titulo = titulo
        self.autor = autor
        self.anoPublicacao = anoPublicacao
        
        livros.listaLivros.append(self)
        livros.totalLivros += 1
    
    # 2 - Procurar por livro
    def procurarLivro():
        pesquisar = input("\nInsira o Titulo/Autor do livro que deseja procurar: ")
        cont = 1
        for i in livros.listaLivros:
            if i.titulo == pesquisar or i.autor == pesquisar:
                print("\n**Livro Encontrado**")
                print(f"\n| {cont}º Livro |")
                print(f"Titulo: {i.titulo}")
                print(f"Autor: {i.autor}")
                print(f"Ano de Publicação: {i.anoPublicacao}")
                print("__________________________________________________")
                return
            
            cont += 1
            
        print("\n**Livro Não Encontrado**")
    
    # 3 - Excluir livro             
    def excluirLivro():
        opc = int(input("Insira o Nº do Livro que deseja excluir: "))
        livros.listaLivros.pop(opc - 1)
    
    # 4 - Ordenar livros
    def ordenarLivros():
        livros.listaLivros.sort(key=lambda livro: livro.titulo)
        
        
    # 5 - Listar todos os livros cadastrados
    def listarLivros():
        cont = 1
        for i in livros.listaLivros:
            print(f"\n| {cont}º Livro |")
            print(f"Titulo: {i.titulo}")
            print(f"Autor: {i.autor}")
            print(f"Ano de Publicação: {i.anoPublicacao}")
            print("__________________________________________________")
            cont += 1

# Mantem o Porgrama a Funcionar
while(True):
    mostrarMenu()
        
    escolha = input("Insira a sua escolha: ")
    
    match escolha:
        # 1 - Cadastrar livro
        case "1":
            # Impede que sejam criados mais de 100 livros
            if livros.totalLivros == 100:
                print("\n** Já Existem 100 Livros Registrados **")
                continue
            titulo = input("Titulo: ")
            autor = input("Autor: ")
            
            # Garante que recebe um numero
            while True: 
                try:
                    anoPublicacao = int(input("Ano de Publicação: "))
            
                    a = livros(titulo, autor, anoPublicacao)
                    break
                except ValueError:
                    print("\n**Valor Invalido**\n")
                    
        # 2 - Procurar por livro
        case "2":
            livros.procurarLivro()
        
        # 3 - Excluir livro
        case "3":
            livros.listarLivros()
            livros.excluirLivro()
        
        # 4 - Ordenar livros
        case "4":
            livros.ordenarLivros()
            print("\n**Livros Ordenados**")
            
        # 5 - Listar todos os livros cadastrados    
        case "5":
            livros.listarLivros()
        
        # x - Parar Programa
        case "x":
            print("\n**Programa Encerrado**")
            break
        
        case _:
            print("\n**Entrada Invalida**")
