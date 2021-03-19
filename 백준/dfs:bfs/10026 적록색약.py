import sys
import copy
sys.setrecursionlimit(10**6)

N = int(sys.stdin.readline())

board = []
for _ in range(N):
    board.append(list(sys.stdin.readline().strip()))

check = [[0 for _ in range(N)]for _ in range(N)]

bboard = copy.deepcopy(board)
ccheck = copy.deepcopy(check)

RG_Yes, RG_No = 0, 0
dx, dy = [0, 0, -1, 1], [1, -1, 0, 0]  # 동 서 남 북


def DFS(x, y, rgb):
    global board, check, dx, dy, N
    if x < 0 or x >= N or y < 0 or y >= N or board[x][y] != rgb or check[x][y] != 0:
        return

    check[x][y] = 1
    for i in range(4):
        nx, ny = x+dx[i], y+dy[i]
        DFS(nx, ny, board[x][y])


def DFS2(x, y, rgb):
    global bboard, ccheck, dx, dy, N
    if x < 0 or x >= N or y < 0 or y >= N or ccheck[x][y] != 0:
        return

    if rgb == 'B':
        if rgb != bboard[x][y]:
            return
    elif rgb == 'R' or rgb == 'G':
        if bboard[x][y] == 'B':
            return

    ccheck[x][y] = 1
    for i in range(4):
        nx, ny = x+dx[i], y+dy[i]
        DFS2(nx, ny, bboard[x][y])


for i in range(N):
    for j in range(N):
        if check[i][j] == 0:
            DFS(i, j, board[i][j])
            RG_Yes += 1

for i in range(N):
    for j in range(N):
        if ccheck[i][j] == 0:
            DFS2(i, j, bboard[i][j])
            RG_No += 1

print(RG_Yes, RG_No)
