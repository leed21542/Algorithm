import collections
import sys
sys.setrecursionlimit(100000)

N, M, H = map(int, sys.stdin.readline().split())
queue = collections.deque([])
box = [[]for i in range(H)]
check_num = 2
swap = 0
result_day = 0
ss = 0

for j in range(H):
    for i in range(M):
        box[j].append(list(map(int, sys.stdin.readline().split())))

for z in range(H):
    for i in range(M):
        for j in range(N):
            if box[z][i][j] == 1:
                queue.append((z, i, j))


while queue:
    S = len(queue)
    while S:
        z, x, y = queue.popleft()

        if not (x-1) < 0:
            if (box[z][x-1][y] == 0):
                queue.append((z, x-1, y))
                box[z][x-1][y] = 1

        if not (x+1) >= M:
            if box[z][x+1][y] == 0:
                queue.append((z, x+1, y))
                box[z][x+1][y] = 1

        if not (y-1) < 0:
            if box[z][x][y-1] == 0:
                queue.append((z, x, y-1))
                box[z][x][y-1] = 1

        if not (y+1) >= N:
            if box[z][x][y+1] == 0:
                queue.append((z, x, y+1))
                box[z][x][y+1] = 1

        if not (z-1) < 0:
            if box[z-1][x][y] == 0:
                queue.append((z-1, x, y))
                box[z-1][x][y] = 1

        if not (z+1) >= H:
            if box[z+1][x][y] == 0:
                queue.append((z+1, x, y))
                box[z+1][x][y] = 1
        S -= 1

    result_day += 1

for z in range(H):
    for i in range(M):
        for j in range(N):
            if box[z][i][j] == 0:
                result_day = -1
                break
        if result_day == -1:
            break

if result_day == -1:
    print(result_day)
else:
    print(result_day-1)
