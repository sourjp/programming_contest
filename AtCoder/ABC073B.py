N = input()

i = 0
result = 0
ans = 0
while i < int(N):
    l = []
    l = input().split()
    result = int(l[1]) - int(l[0]) + 1
    ans = ans + result
    i += 1

print(ans)