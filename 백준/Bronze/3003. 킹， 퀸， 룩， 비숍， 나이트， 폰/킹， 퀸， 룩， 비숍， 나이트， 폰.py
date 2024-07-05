li=[1, 1, 2, 2, 2, 8]
find=list(map(int, input().split()))
for i in range(len(find)): print(li[i]-find[i], end=' ')