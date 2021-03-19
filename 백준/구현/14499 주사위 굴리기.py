N, M, x, y, K = map(int, input().split())

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]

dice, temp = [0]*6, [0]*6
direction = [[2, 0, 5, 3, 4, 1],
             [1, 5, 0, 3, 4, 2],
             [4, 1, 2, 0, 5, 3],
             [3, 1, 2, 5, 0, 4]]

board = []
for _ in range(N):
    board.append(list(map(int, input().split())))

Question = list(map(int, input().split()))

for i in Question:
    index = i-1
    x, y = x + dx[index], y+dy[index]
    if x < 0 or x >= N or y < 0 or y >= M:
        x, y = x, y = x - dx[index], y-dy[index]
        continue

    for i in range(6):
        temp[i] = dice[i]

    for i in range(6):
        dice[i] = temp[direction[index][i]]

    if board[x][y] == 0:
        board[x][y] = dice[5]
    else:
        dice[5] = board[x][y]
        board[x][y] = 0

    print(dice[0])
