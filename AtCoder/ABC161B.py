N, M = map(int, input().split())
A = sorted(map(int, input().split()))
sum_a = sum(A)
border = sum_a / (4*M)

if A[-M] >= border:
    print('Yes')
else:
    print('No')