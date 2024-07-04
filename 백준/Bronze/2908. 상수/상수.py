li = input().split()
if int(li[0][::-1]) > int(li[1][::-1]): print(int(li[0][::-1]))
else: print(int(li[1][::-1]))