N, P = map(int, input().split())
S = input()

memo = {}
cnt = 0

def cal(x):
    #print('xx', x)
    while len(str(x)) > 3:
        x = str(x)
        x = int(x[:-1]) - int(x[-1]*2)

    #print('x', x)
    return x % P == 0

for i in range(N):
    for j in range(i+1, N+1):
        val = int(S[i:j])
        #print(i, j, val)
        if val in memo:
            cnt += 1
            continue

        
        if len(str(val)) > 3:
            if cal(str(val)):
                memo[val] = 1
                cnt += 1
        
        elif val % P == 0:
            memo[val] = 1
            cnt += 1

#print(memo)
print(cnt)