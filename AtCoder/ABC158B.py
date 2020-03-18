N, A, B = map(int, input().split())

val =  N // (A+B)
left = N % (A+B)

ans = val * A

if left < A:
    ans += left
else:
    ans += A

print(ans)