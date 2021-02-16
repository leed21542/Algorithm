import sys
sys.setrecursionlimit(100000)

box = []
Min = 1000000


a, b = map(int, input().split())
visit = [[0]*(b) for i in range(a)]

for _ in range(a):
    li = list(map(int, input()))
    box.append(li)


dx, dy = [-1, 1, 0, 0], [0, 0, -1, 1]
queue = [(0, 0)]
visit[0][0] = 1


while queue:
    x, y = queue.pop(0)
    if x == a-1 and y == b-1:
        print(visit[x][y])
        break

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < a and 0 <= ny < b:
            if visit[nx][ny] == 0 and box[nx][ny] == 1:
                visit[nx][ny] = visit[x][y]+1
                queue.append((nx, ny))
