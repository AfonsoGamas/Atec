import socket
import random
import threading

# Função do jogo para o cliente
def cliente(sock, addr):

    # Recebe os dados do Cliente
    data = sock.recv(1024)
    print("Dados recebidos: ", data.decode())

    # Define um numero aleatório para o jogo
    print("Definindo numero correto ...")
    num_certo = random.randint(1, 10)
    print(f"\n** O numero correto é {num_certo} **")


    # Loop para o cliente acertar um numero
    while True:

        # Tenta executar o codigo evitando crachar se o cliente cair
        try:
            # Envia a mensagem para o cliente
            print("\nA enviar query para o cliente...")
            sock.send('Adivinhe o numero (1 a 10): ' .encode('utf-8'))
            print("Enviado.")
            print("A aguardar resposta...")

            # Recebe a resposta do cliente
            num_byt = sock.recv(1024)

            # Decodifica a resposta do cliente sem espaços no começo e fim
            num = num_byt.decode('utf-8').strip()
            print("\nDados recebidos: ", num)

            # Converte os dados recebidos para um numero inteiro de forma a que não crache o codigo
            try:
                num = int(num)
            except ValueError:
                print("\nO cliente enviou um número inválido.")
                sock.send("\nPor favor, envia um número válido.\n".encode('utf-8'))
                continue
            
            # Se o cliente acertar, avisa e para o programa
            if num == num_certo:
                print("O cliente acertou o numero!")
                sock.send("Parabens! Acertou!".encode('utf-8'))
                break
            
            # Se não acertar, avisa o servidor e o cliente
            else:
                print("O cliente errou o numero.")
                sock.send("Errou o numero.\nTente Novamente...\n".encode('utf-8'))

        except ConnectionResetError:
            print(f"[-] Cliente {addr} caiu abruptamente")
            break
    sock.close()

# Cria a Variazel server
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Define que pode receber ligações de qualquer dispositivo pela porta 12345
server.bind(('0.0.0.0', 12345))

# Espera uma ligação
server.listen()
print("A aguardar ligação...")

# Aceita varios clientes simultaneos
while True:
    client_socket, addr = server.accept()
    print(f"Cliente ligado de {addr}")
    thread = threading.Thread(target=cliente, args=(client_socket, addr))
    thread.start()

# Termina a conecção
server.close()
 