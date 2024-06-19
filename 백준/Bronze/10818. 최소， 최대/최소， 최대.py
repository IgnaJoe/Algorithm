n = int(input())
n_list = list(map(int, input().split()))
min = max = n_list[0]
n_list.pop(0)
for i in n_list :
    if i > max : max = i
    elif i < min : min = i
print("%d %d" %(min,max))