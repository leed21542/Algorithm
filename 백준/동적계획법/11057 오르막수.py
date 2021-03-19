N = int(input())
s = [[0 for _ in range(10)]for _ in range(1001)]

for i in range(10):
    s[1][i] = 1

for i in range(2, N+1):
    for j in range(10):
        for k in range(j+1):
            s[i][j] += s[i-1][k]
print(sum(s[N]) % 10007)
