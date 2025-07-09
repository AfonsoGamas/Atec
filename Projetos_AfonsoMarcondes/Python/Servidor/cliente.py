import socket

# Cria a Variazel sock
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
 
# Tenta conectar ao servidor pela porta 12345
print("A ligar....")
sock.connect(('172.16.136.76' ,12345))
print("Ligação estabelecida.")

# Envia uma mensagem ao servidor
mensagem = input("Manda mensagem ao servidor: ")
sock.send(mensagem.encode('utf-8'))

# Loop para a query do servidor
while True:

    # Recebe a mensagem do servidor
    resposta = sock.recv(4096)
    
    # Para o programa de não hover mensagem
    if not resposta:
        print("\n**Servidor desconectou**")
        break
    
    # Decodifica a mensagem para texto
    texto = resposta.decode('utf-8')
    print(texto)
   
    # Vê se é um pergunta
    if "Adivinhe" in texto:
        num = input("Resposta: ")
        sock.send(num.encode('utf-8'))
    
    # Vê se é a confirmação se o cliente acertou
    if "Acertou" in texto:
        break
       
# Termina a conecção
sock.close()
 