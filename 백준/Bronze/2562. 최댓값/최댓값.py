n_list=[]
for i in range(9):
    n_list.append(int(input()))
copy_list = n_list.copy()
n_list.sort()
print(n_list[8])
print(copy_list.index(n_list[8])+1)