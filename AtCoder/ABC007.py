from collections import deque

R, C = map(int, input().split())
sy, sx = map(lambda s: int(s)-1, input().split())
gy, gx = map(lambda g: int(g)-1, input().split())
M = [list(input()) for _ in range(R)]
A = [[0 for _ in range(C)] for _ in range(R)]

Q = deque()
Q.append((sx, sy))
while Q:
    x, y = Q.popleft()
    for dx, dy in [(1,0), (-1,0), (0,1), (0,-1)]:
        nx = x + dx
        ny = y + dy
        
        if 0 <= nx < C and 0<= ny < R and M[ny][nx] == '.':
            M[ny][nx] = '#'
            A[ny][nx] = A[y][x] + 1
            Q.append((nx, ny))

print(A[gy][gx])

'''
R, C = map(int, input().split())
sy, sx = map(int, input().split())
gy, gx = map(int, input().split())

sy -= 1
sx -= 1
gy -= 1
gx -= 1

M = []
for _ in range(R):
    M.append(list(input()))

A = [[0 for _ in range(C)] for _ in range(R)]

def bfs(startq):
    nextq = []
    
    while startq:
        y, x = startq.pop()
        if y+1 < R and M[y+1][x] == '.' and A[y+1][x] == 0:
            nextq.append((y+1, x))
            A[y+1][x] = A[y][x] + 1 

        if y-1 >= 0 and M[y-1][x] == '.' and A[y-1][x] == 0:
            nextq.append((y-1, x))
            A[y-1][x] = A[y][x] + 1

        if x+1 < C and M[y][x+1] == '.' and A[y][x+1] == 0:
            nextq.append((y, x+1))
            A[y][x+1] = A[y][x] + 1

        if x-1 >= 0 and M[y][x-1] == '.' and A[y][x-1] == 0:
            nextq.append((y, x-1))
            A[y][x-1] = A[y][x] + 1

        M[y][x] = '#'
    if nextq:
        bfs(nextq)

    return 

bfs([(sy, sx)])

print(A[gy][gx])
'''
