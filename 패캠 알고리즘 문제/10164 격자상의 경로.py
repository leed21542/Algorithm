N, M, K = map(int, input().split())

box = [[0]*(M+1) for _ in range(N+1)]


def cal(x, y, end_x, end_y):
    L_x, L_y = end_x - x+1, end_y - y+1
    L = [[0]*(L_y) for _ in range(L_x)]

    for i in range(L_y):
        L[0][i] = 1
    for i in range(L_x):
        L[i][0] = 1

    for i in range(1, L_x):
        for j in range(1, L_y):
            L[i][j] = L[i-1][j] + L[i][j-1]

    return L[end_x][end_y]


f_x, f_y = 0, 0
a = K
line = 0
while(True):
    if a <= M:
        f_x = line
        f_y = a-1
        break
    else:
        a -= M
        line += 1

if K == 0:
    print(cal(0, 0, N-1, M-1))
else:
    re1 = cal(0, 0, f_x, f_y)
    re2 = cal(0, 0, (N-1)-f_x, (M-1)-f_y)
    result = re1*re2
    print(result)
