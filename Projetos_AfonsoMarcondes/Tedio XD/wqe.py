a = 10 
cont = 0
for y in range(a):
    for i in range(3):
        if cont == 10:
            print(f"  {" _" * (a*3)}\n")
            cont = 0
        print(f"{" +" * a} | {" *" * a} | {" /" * a} ")
        cont += 1
        
