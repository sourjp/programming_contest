
def fib(limit):
    a = 1
    b = 1
    res = 0
    while b < limit:
        if b % 2 == 0: res += b
        a, b = b, a+b
    
    return res

def fib2(limit):
    a = 1
    b = 1
    c = a + b
    ans = 0

    while c < limit:
        ans += c
        a = b + c
        b = a + c
        c = a + b

    return ans

limit = 4 * 10 ** 6
print(fib(limit))
print(fib2(limit))