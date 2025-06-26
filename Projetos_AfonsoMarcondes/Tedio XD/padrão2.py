a = 10 
cont = 0
for y in range(a):
    for i in range(y +1):
        print(f"{" +" * a} | {" *" * a} | {" /" * a} | {" -" * a} | {" x" * a}")
        cont += 1
        if cont == 10:
            print(f"  {" _" * (a*5)}\n")
            cont = 0
