import collections
import sys
sys.setrecursionlimit(100000)

N, M = map(int, sys.stdin.readline().split())
queue = collections.deque([])
box = []
check_num = 2
swap = 0
result_day = 0
ss = 0

for i in range(M):
    L = list(map(int, sys.stdin.readline().split()))
    box.append(L)

for i in range(M):
    for j in range(N):
        if box[i][j] == 1:
            queue.append((i, j))


while queue:
    S = len(queue)
    while S:
        x, y = queue.popleft()

        if not (x-1) < 0:
            if (box[x-1][y] == 0):
                queue.append((x-1, y))
                box[x-1][y] = 1

        if not (x+1) >= M:
            if box[x+1][y] == 0:
                queue.append((x+1, y))
                box[x+1][y] = 1

        if not (y-1) < 0:
            if box[x][y-1] == 0:
                queue.append((x, y-1))
                box[x][y-1] = 1

        if not (y+1) >= N:
            if box[x][y+1] == 0:
                queue.append((x, y+1))
                box[x][y+1] = 1
        S -= 1

    result_day += 1


for i in range(M):
    for j in range(N):
        if box[i][j] == 0:
            result_day = -1
            break
    if result_day == -1:
        break

if result_day == -1:
    print(result_day)
else:
    print(result_day-1)
