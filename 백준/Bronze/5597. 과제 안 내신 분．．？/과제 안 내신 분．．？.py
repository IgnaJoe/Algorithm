n_list =[0 for i in range(30)]
n_assign = []

for i in range(28):
    n = int(input())
    n_list[n-1] = 1

idx = 0
for i in n_list:
    if i == 0 : n_assign.append(idx)
    idx+=1

n_assign.sort()
for i in n_assign: print(i+1)