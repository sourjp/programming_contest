N, K = map(int, input().split())

# print(N % K)
# print(N % abs(N-K))

# SN = N
# PN = float('inf')
# while PN > N:
#     PN = N
#     N = abs(N-K)
#     print(PN, N)

if N == K:
    print(0)

elif N > K:
    val = N % K
    print(min(abs(val), abs(val-K)))
else:
    SN = N
    PN = float('inf')
    while PN > N:
        PN = N
        N = abs(N-K)
    print(min(SN, PN))
