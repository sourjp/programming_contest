n = int(input())
L = list(map(int, input().split()))

L.sort()

cnt = 0
for i in range(n):
    for j in range(i, n):
        if L[i] == L[j]:
            continue
        for k in range(j, n):
            if L[j] == L[k]:
                continue
            if L[i]+L[j] > L[k]:
                cnt += 1

print(cnt)
