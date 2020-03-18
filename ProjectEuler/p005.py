import math

def func(target):
    #pn = 1 * 3 * 5 * 7

    '''
    pn = 1 * 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19
    i = 1
    while True:
        for j in range(2, target+1):
            #print(pn, i, j, pn % j)
            if pn % j != 0: break
        if j == target:
            return pn
        pn *= i
        i += 1
    '''
    return 1 * 2 * 3 * 2 * 5 * 7 * 2 * 3 * 11 * 13 * 2 * 17 * 19

def func1(target):
    ''' 最小公倍数を１段階ずつ求めることで、全ての数値に対する最小公倍数 = divisibleの数値になる。
    '''
    ans = 1
    for i in range(1, target+1):
        print(str(i).zfill(2), ans, ans*i, math.gcd(ans, i))
        ans = (ans*i) // (math.gcd(ans, i))
    return ans

target = 20
print(func(target))
print(func1(target))