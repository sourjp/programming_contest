def func(num):
    ans = 0
    val1 = int('9' * num)
    val2 = int('9' * num)

    while len(str(val1)) >= num:
        while len(str(val2)) >= num:
            pr = val1*val2
            if pr < ans: break
            print(val1, val2, pr)
            
            pr = str(pr)
            if len(pr) % 2 == 0:
                #print(pr[:len(pr)//2], pr[len(pr)//2:][::-1])
                if pr[:len(pr)//2] == pr[len(pr)//2:][::-1]: ans = max(ans, int(pr))
            else:
                if pr[:len(pr)//2] == pr[len(pr)//2+1:][::-1]: ans = max(ans, int(pr))
            
            val2 -= 1
        val2 = val1
        val1 -= 1

    return ans

num = 3
print(func(num))
