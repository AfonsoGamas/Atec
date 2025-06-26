class cliente:
    listaClientes = []
    numClientes = 0
    
    def __init__(self, NomCli, morada, tel, nif, compra):
        cliente.numClientes += 1
        self.Numcli = cliente.numClientes
        self.NomCli = NomCli
        self.morada = morada
        self.tel = tel
        self.nif = nif
        self.compra = compra
        
        # Calcular o Desconto
        if self.compra > 99 and self.compra < 201:
            self.Divfin = self.compra * 0.95
            
        elif self.compra > 200 and self.compra < 500:
            self.Divfin = self.compra * 0.90
        
        elif self.compra >= 500:
            self.Divfin = self.compra * 0.85
        
        else:
            self.Divfin = self.compra
        
        # Adiciona à lista
        cliente.listaClientes.append(self)
        
    @classmethod
    def listarClientes(cls):
        cont = 1
        for i in cls.listaClientes:
            print(f"\n\n|{cont}º Cliente|")
            print(f"Nome: {i.NomCli}")
            print(f"Morada: {i.morada}")
            print(f"Telefone: {i.tel}")
            print(f"NIF: {i.nif}")
            print(f"Valor da Compra (Sem Desconto): {i.compra}")
            print(f"Divida Final (Com Desconto): {i.Divfin:.2f}")
            print("____________________________________________")
            cont += 1
            
            para = input("[para] para parar, qualquer outra tecla para continuar:")
            if para == "para" or para == "PARA":
                break
    
    @classmethod
    def procurarCliente(cls, num):
        cls.num = num
        cont = 1
        for i in cls.listaClientes:
            if i.Numcli == cls.num:
                print("\n\n|Cliente Encontrado|")
                print("\n____________________________________________")
                print(f"|{cont}º Cliente|")
                print(f"Nome: {i.NomCli}")
                print(f"Morada: {i.morada}")
                print(f"Telefone: {i.tel}")
                print(f"NIF: {i.nif}")
                print(f"Valor da Compra (Sem Desconto): {i.compra}")
                print(f"Divida Final (Com Desconto): {i.Divfin:.2f}")
                print("____________________________________________")
                return
            cont += 1
        print("\n\n|Cliente Não Encontrado|")
        
while(True):
    print("\n******************************")
    print("*         |Escolhas|         *")
    print("*                            *")
    print("*    1 - Novo Cliente        *")
    print("*    2 - Listar Clientes     *")
    print("*    3 - Procurar Cliente    *")
    print("*    4 - Parar Programa      *")
    print("*                            *")
    print("******************************")

    escolha = int(input("Insira a sua escolha: "))

    match escolha:
        case 1:
            print(f"\nCadastro do {cliente.numClientes + 1}ºN Cliente")
            NomCli = input("Nome: ")
            morada = input("Morada: ")
            tel = int(input("Telefone: "))
            nif = input("NIF: ")
            compra = int(input("Valor da Compra (Sem Desconto): "))
            
            p1 = cliente(NomCli, morada, tel, nif, compra)
            
        case 2:
            print("____________________________________________")
            cliente.listarClientes()
            print("\n\n")
        
        case 3:
            num = int(input("Insira o numero no cliente que pretende procurar: "))
            cliente.procurarCliente(num)
            print("\n")
            
        case 4:
            print("\n**Programa Encerrado**")
            break
        
        case _:
            print("\n**Escolha Invalida**")
