def bonat(a):
    if a <= 1:
        return 1
    return bonat(a -1) + bonat(a -2)
        
for i in range(60):
    print(bonat(i))
