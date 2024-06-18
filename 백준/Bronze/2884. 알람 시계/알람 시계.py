A,B = map(int, input().split())

if B < 45: 
    if A == 0: A = 23
    else: A -= 1
    
    B = 60 - (45 - B)
else: B -= 45

print("%d %d" %(A, B))