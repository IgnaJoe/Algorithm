li=['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
s=input()
var = 0
for c in s:
    for i in li:
        if c in i: var += li.index(i)+3
print(var)