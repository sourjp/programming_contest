N = input()

math = 0
for i in str(N):
    math = math + int(i)

if int(N) % math == 0:
    print('Yes')
else:
    print('No')