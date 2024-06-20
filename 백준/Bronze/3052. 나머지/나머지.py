n_list = [int(input()) for _ in' '*10]
rl=[]
for i in n_list:
    try: rl.index(i%42)
    except ValueError: rl.append(i%42)

print(len(rl))