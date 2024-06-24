arr=['a', 'b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
s=input()
for c in arr:
        try: print(s.index(c), end=' ')
        except: print(-1, end=' ')