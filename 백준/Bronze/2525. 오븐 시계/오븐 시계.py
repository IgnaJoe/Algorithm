A,B = map(int, input().split())
C = int(input())

if B + C < 60: B = B+C
elif B + C == 60: A+=1; B = 0 
else: val = (B + C)//60; remain = (B + C)%60; A+=val; B = remain

if A >= 24: A-=24
print("%d %d" %(A, B))