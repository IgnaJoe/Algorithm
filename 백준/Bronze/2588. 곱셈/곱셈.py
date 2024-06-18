A = int(input())
B = int(input())

oneB = B%10
tenB = (B%100)//10
hundB = B//100

print(A * oneB)
print(A * tenB)
print(A * hundB)
print(A * B)