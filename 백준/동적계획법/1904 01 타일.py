import sys
sys.setrecursionlimit(100000)

N = int(input())

box = [[0]*3] + [list(map(int, input().split())) for _ in range(N)]
dp = [[0]*3] + [[0]*N for _ in range(N)]

for i in range(1, N+1):

    dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + box[i][0]
    dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + box[i][1]
    dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + box[i][2]

print(min(dp[N][0], dp[N][1], dp[N][2]))
