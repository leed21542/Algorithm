import sys
sys.setrecursionlimit(100000)
Total = int(input())
box = []
Num = 2
M = N = K = 0


def cal(x, y):
    global Num
    global box, M, N
    if x < 0 or y < 0 or x >= M or y >= N or box[x][y] != 1:
        return
    if box[x][y] == 1:
        box[x][y] = Num

    cal(x-1, y)  # 상
    cal(x+1, y)  # 하
    cal(x, y-1)  # 좌
    cal(x, y+1)  # 우


for _ in range(Total):
    M, N, K = map(int, input().split())
    box = [[0]*(N) for j in range(M)]

    for _ in range(K):
        x, y = map(int, input().split())
        box[x][y] = 1

    for z in range(M):
        for d in range(N):
            if box[z][d] == 1:
                cal(z, d)
                Num += 1

    print(Num-2)
    Num = 2
