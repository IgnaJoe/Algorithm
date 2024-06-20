n = int(input())
li = list(map(int, input().split()))
max = max(li)
sum = 0
for i in li: sum+= (i/max)*100
print(sum/n)