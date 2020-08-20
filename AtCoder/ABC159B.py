s = input()
n = len(s)

c = (len(s)-1) // 2

l = s[:c]
r = s[-c::][::-1]

ss = s[(n+3)//2-1:]
nn = len(ss)
cc = (nn-1) // 2
ll = ss[:cc]
rr = ss[-cc::][::-1]

if n == 3:
    if s[0] == s[-1]:
        print('Yes')
    else:
        print('No')
elif l == r and ll == rr:
    print('Yes')
else:
    print('No')


