from xmlrpc.server import SimpleXMLRPCServer

def soma(a, b):
    resultado = a + b
    print(f"\n[Servidor] Soma: {a} + {b} = {resultado}")
    return resultado

def sub(a, b):
    resultado = a - b
    print(f"\n[Servidor] Soma: {a} - {b} = {resultado}")
    return resultado

def mult(a, b):
    resultado = a * b
    print(f"\n[Servidor] Soma: {a} * {b} = {resultado}")
    return resultado

def div(a, b):
    resultado = a / b
    print(f"\n[Servidor] Soma: {a} / {b} = {resultado}")
    return resultado

server = SimpleXMLRPCServer(("0.0.0.0", 8080))
print("\n** Servidor Iniciado **")
print("Está a correr na porta 8080")
print("A aguardar ligação remota...\n")

server.register_function(soma, "soma")
server.register_function(sub, "sub")
server.register_function(mult, "mult")
server.register_function(div, "div")

server.serve_forever()