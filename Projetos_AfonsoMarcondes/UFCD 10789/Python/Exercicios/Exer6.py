cont = 0
num = 2
while cont < 10:
    
    primo = True
    
    for i in range(2, num):
        if num % i == 0:
            primo = False
            break
        
    if primo:
        print(num)
        cont += 1
        
    num += 1 
