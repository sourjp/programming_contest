number = []
number = input().split()

start_number = int(number[0])
end_number = int(number[1])
count = 0

while start_number <= end_number:
    l = []
    for s in str(start_number):
        l.append(s)
    if l[0] == l[4] and l[1] == l[3]:
        count += 1
    start_number += 1

print(count)