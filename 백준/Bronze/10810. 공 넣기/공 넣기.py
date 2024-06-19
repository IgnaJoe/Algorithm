n, m = map(int, input().split())
n_list = [0 for i in range(n)]
for idx1 in range(m):
    i,j,k = map(int, input().split())
    for idx2 in range(i-1,j):
        n_list[idx2] = k

for i in n_list:
    print(i, end=" ")