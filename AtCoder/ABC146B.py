
N = int(input())
S = []
S = input()

alphabets = []
for alphabet in range(ord('A'), ord('Z')+1):
    alphabets.append(chr(alphabet))


ans_list = []
for i in S:
    num = alphabets.index(i)
    position = num + N
    if position > 25: 
        position -= 26 
    ans_list.append(alphabets[position])

for i in ans_list:
    print(i, end='')
