import sys
from collections import deque

V = list(input())
S = deque()
S.extend(V)
Q = int(input())

memo = []
r = 0
for i in range(Q):
    c = sys.stdin.readline().split()
    #print(c)
    if c[0] == '1':
        r += 1
        continue
    else:
        if c[1] == '1':
            memo.append((r, c[2]))
        else:
            memo.append((r+1, c[2]))
        
#print(memo)        
if r % 2 == 1:
    S.reverse()

for m in memo:
    s, l = m
    s = r - s
    if s % 2 == 0:
        S.appendleft(l)
    else:
        S.append(l)    

print(''.join(S))