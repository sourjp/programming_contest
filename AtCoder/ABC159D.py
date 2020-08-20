from sys import stdin

N = int(input())
readline = stdin.readline
A = list(readline().split())

def ncr(n):
    return n*(n-1) // 2

dmemo = {}
for a in A:
    dmemo.setdefault(a, 0)
    dmemo[a] += 1

max_num = 0
cmemo = {}
for dk, dv in dmemo.items():
    if dv not in cmemo:
        val = ncr(dv)
        cmemo[dv] = val
    max_num += cmemo[dv]

for a in A:
    val = dmemo[a]
    a1 = ncr(val)
    a2 = ncr(val-1)
    ans = max_num - a1 + a2
    print(ans)