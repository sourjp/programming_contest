import math


a = 3
b = 5
c = (a * b) // math.gcd(a, b)
t = 999

def func(a, b, c):
    val1 = ((a + (t // a) * a) * (t // a)) // 2
    val2 = ((b + (t // b) * b) * (t // b)) // 2
    val3 = ((c + (t // c) * c) * (t // c)) // 2
    print(val1, val2, val3, c)
    return val1 + val2 - val3

print(func(a, b, c))

