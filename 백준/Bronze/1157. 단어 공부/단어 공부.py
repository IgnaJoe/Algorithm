s=input().lower()
li=list(set(s))
cnt=[]
for i in li:
  count = s.count
  cnt.append(count(i))
if cnt.count(max(cnt)) > 1: print("?")
else: print(li[cnt.index(max(cnt))].upper())
