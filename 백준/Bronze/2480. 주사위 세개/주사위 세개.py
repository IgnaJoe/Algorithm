A,B,C = map(int, input().split())
result = 0
if A == B == C: result = 10000 + (A*1000)
elif A == B or A == C: result = 1000 + (A*100)
elif B == C: result = 1000 + (B*100)
else: 
    max = A
    if max < B: max = B
    if max < C: max = C
    result = max*100

print(result)
