A, B = map(int, input().split())

ans = -1
for i in range(1251, 0, -1):
    av = int(i * 0.08)
    bv = int(i * 0.1)
    # print(i, av, bv)

    if av > 0 and bv > 0:
        if av == A and bv == B:
            ans = i

print(ans)