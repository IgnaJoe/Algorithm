n,m=map(int,input().split())
li=[]
for i in range(n): li.append(i+1)
for i in range(m):
    x,y=map(int,input().split())
    cp = li[x-1:y]
    cp.reverse()
    li[x-1:y] = cp
for i in li : print(i, end=' ')