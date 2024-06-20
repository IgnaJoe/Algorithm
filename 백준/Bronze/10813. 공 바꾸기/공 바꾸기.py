n, m = map(int, input().split())
n_list = []
for i in range(1,n+1): n_list.append(i)
for idx1 in range(m):
    i,j = map(int, input().split())
    n_list[i-1], n_list[j-1] = n_list[j-1], n_list[i-1]

for i in n_list: print(i, end=" ")