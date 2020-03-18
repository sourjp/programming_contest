def func(num):
    can = 2
    snum = num
    while num != can:
        if num % can != 0:
            can += 1
        else:
            num //= can

        if can > snum ** (1/2):
            return snum

    return can

num = 600851475143
print(func(num))